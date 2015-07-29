#pragma once

#include <exception>
#include <string>
#include "SocketError.h"

class SocketException : public std::exception
{
public:
	SocketException();
	SocketException(int errorCode);

	~SocketException();

	inline SocketError GetSocketErrorCode() { return socketError; }
	inline const char* GetErrorMessage() { return errorMessage; }

	const char* what() const noexcept override { return errorMessage; }
	
private:
	SocketError socketError;
	char* errorMessage;

	void CreateMessage();
};