#pragma once

#include <string>
#include "AddressFamily.h"
#include "SocketType.h"
#include "ProtocolType.h"
#include "SocketFlags.h"
#include "SocketShutdown.h"
#include "SocketException.h"

class Socket
{
public:
	Socket(AddressFamily addressFamily, SocketType socketType, ProtocolType protocolType);
	~Socket();

	void Connect(const std::string& address, int port);

	int Send(const char* buffer, int size, SocketFlags socketFlags);
	int Receive(char* buffer, int size, SocketFlags socketFlags);

	void Disconnect(bool reuseSocket);
	void Shutdown(SocketShutdown how);

	inline AddressFamily GetAddressFamily() { return addressFamily;  }
	inline SocketType GetSocketType() { return socketType; }
	inline ProtocolType GetProtocolType() { return protocolType; }
	inline bool IsConnected() { return connected; }

private:
	AddressFamily addressFamily;
	SocketType socketType;
	ProtocolType protocolType;
	bool connected;
	unsigned int _socket;
};