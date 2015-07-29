#pragma once

enum class SocketShutdown
{
	//
	// Summary:
	//     Disables a System.Net.Sockets.Socket for receiving. This field is constant.
	Receive = 0,
	//
	// Summary:
	//     Disables a System.Net.Sockets.Socket for sending. This field is constant.
	Send = 1,
	//
	// Summary:
	//     Disables a System.Net.Sockets.Socket for both sending and receiving. This field
	//     is constant.
	Both = 2
};