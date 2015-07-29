#include "SocketException.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <WinSock2.h>

SocketException::SocketException()
{
	socketError = (SocketError)WSAGetLastError();
	CreateMessage();
}

SocketException::SocketException(int errorCode)
{
	socketError = (SocketError)errorCode;
	CreateMessage();
}

SocketException::~SocketException()
{
	LocalFree(errorMessage);
}

void SocketException::CreateMessage()
{
	LPSTR message = NULL;

	int result = FormatMessageA(
		FORMAT_MESSAGE_ALLOCATE_BUFFER |
		FORMAT_MESSAGE_FROM_SYSTEM |
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		(int)socketError,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPSTR)&message,
		0,
		NULL);

	errorMessage = message;
}
