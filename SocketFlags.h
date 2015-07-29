#pragma once

enum class SocketFlags
{
	//
	// Summary:
	//     Use no flags for this call.
	None = 0,
	//
	// Summary:
	//     Process out-of-band data.
	OutOfBand = 1,
	//
	// Summary:
	//     Peek at the incoming message.
	Peek = 2,
	//
	// Summary:
	//     Send without using routing tables.
	DontRoute = 4,
	//
	// Summary:
	//     Provides a standard value for the number of WSABUF structures that are used to
	//     send and receive data. This value is not used or supported on .NET Framework
	//     4.5.
	MaxIOVectorLength = 16,
	//
	// Summary:
	//     The message was too large to fit into the specified buffer and was truncated.
	Truncated = 256,
	//
	// Summary:
	//     Indicates that the control data did not fit into an internal 64-KB buffer and
	//     was truncated.
	ControlDataTruncated = 512,
	//
	// Summary:
	//     Indicates a broadcast packet.
	Broadcast = 1024,
	//
	// Summary:
	//     Indicates a multicast packet.
	Multicast = 2048,
	//
	// Summary:
	//     Partial send or receive for message.
	Partial = 32768
};