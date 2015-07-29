#include "Socket.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

Socket::Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType)
{
	this->addressFamily = addressFamily;
	this->socketType = socketType;
	this->protocolType = protocolType;

	connected = false;
	_socket = INVALID_SOCKET;
}

Socket::~Socket()
{
	Disconnect(false);
	// TODO cleanup
}

void Socket::Connect(const std::string & address, int port)
{
	// TODO check if connected

	addrinfo hints;
	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = (int)addressFamily;
	hints.ai_socktype = (int)socketType;
	hints.ai_protocol = (int)protocolType;

	addrinfo* result = nullptr;

	int error = getaddrinfo(address.c_str(), std::to_string(port).c_str(), &hints, &result);

	if (error != 0)
		throw SocketException(error);
	
	_socket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

	if (_socket == INVALID_SOCKET)
		throw SocketException();
	
	error = connect(_socket, result->ai_addr, (int)result->ai_addrlen);

	if (error == SOCKET_ERROR)
	{
		closesocket(_socket);
		_socket = INVALID_SOCKET;
		throw SocketException();
	}

	// TODO try to connect to the next address in `result` before failing

	freeaddrinfo(result);

	if (_socket == INVALID_SOCKET)
	{
		throw SocketException();
	}

	connected = true;
}

int Socket::Send(const char* buffer, int size, SocketFlags socketFlags)
{
	// TODO check if connected

	int result = send(_socket, buffer, size, (int)socketFlags);

	if (result == SOCKET_ERROR)
	{
		// Close socket?
		throw SocketException();
	}

	return result;
}

int Socket::Receive(char* buffer, int size, SocketFlags socketFlags)
{
	// TODO check if connected

	int result = recv(_socket, buffer, size, (int)socketFlags);

	if (result < 1)
	{
		if (result == 0)
		{
			// TODO connection closed, create exception message manually?
			throw SocketException();
		}
		else
		{
			throw SocketException();
		}
	}

	return result;
}

void Socket::Disconnect(bool reuseSocket)
{
	if (!reuseSocket)
	{
		closesocket(_socket);
		_socket = INVALID_SOCKET;
	}
	
	connected = false;
}

void Socket::Shutdown(SocketShutdown how)
{
	int result = shutdown(_socket, (int)how);

	if (result == SOCKET_ERROR)
	{
		throw SocketException();
	}
}
