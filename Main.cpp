#include <iostream>
#include <Windows.h>
#include "Socket.h"
#include "SocketException.h"

int main()
{
	WSADATA wsaData;
	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);

	if (result != 0)
	{
		printf("WSAStartup failed: %d\n", result);
		getchar();
		return 1;
	}

	Socket socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);

	try
	{
		socket.Connect("http://www.google.co.il", 80);
	}
	catch (SocketException e)
	{
		std::cout << e.GetErrorMessage() << std::endl;
	}

	char* header = "GET / HTTP/1.1\r\n\r\n";

	socket.Send(header, strlen(header), SocketFlags::None);
	
	char response[1024];
	ZeroMemory(response, sizeof(response));

	int read = socket.Receive(response, sizeof(response), SocketFlags::None);

	std::cout << "Read: " << read << "\n--------------------\nResponse: " << response << std::endl;

	socket.Shutdown(SocketShutdown::Both);
	socket.Disconnect(false);

	getchar();

	WSACleanup();

	return 0;
}