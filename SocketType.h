#pragma once

enum class SocketType
{
	//
	// Summary:
	//     Specifies an unknown Socket type.
	Unknown = -1,
	//
	// Summary:
	//     Supports reliable, two-way, connection-based byte streams without the duplication
	//     of data and without preservation of boundaries. A Socket of this type communicates
	//     with a single peer and requires a remote host connection before communication
	//     can begin. System.Net.Sockets.SocketType.Stream uses the Transmission Control
	//     Protocol (System.Net.Sockets.ProtocolType.Tcp) System.Net.Sockets.ProtocolType
	//     and the InterNetworkSystem.Net.Sockets.AddressFamily.
	Stream = 1,
	//
	// Summary:
	//     Supports datagrams, which are connectionless, unreliable messages of a fixed
	//     (typically small) maximum length. Messages might be lost or duplicated and might
	//     arrive out of order. A System.Net.Sockets.Socket of type System.Net.Sockets.SocketType.Dgram
	//     requires no connection prior to sending and receiving data, and can communicate
	//     with multiple peers. System.Net.Sockets.SocketType.Dgram uses the Datagram Protocol
	//     (System.Net.Sockets.ProtocolType.Udp) and the System.Net.Sockets.AddressFamily.InterNetworkSystem.Net.Sockets.AddressFamily.
	Dgram = 2,
	//
	// Summary:
	//     Supports access to the underlying transport protocol. Using the System.Net.Sockets.SocketTypeSystem.Net.Sockets.SocketType.Raw,
	//     you can communicate using protocols like Internet Control Message Protocol (System.Net.Sockets.ProtocolType.Icmp)
	//     and Internet Group Management Protocol (System.Net.Sockets.ProtocolType.Igmp).
	//     Your application must provide a complete IP header when sending. Received datagrams
	//     return with the IP header and options intact.
	Raw = 3,
	//
	// Summary:
	//     Supports connectionless, message-oriented, reliably delivered messages, and preserves
	//     message boundaries in data. Rdm (Reliably Delivered Messages) messages arrive
	//     unduplicated and in order. Furthermore, the sender is notified if messages are
	//     lost. If you initialize a Socket using System.Net.Sockets.SocketType.Rdm, you
	//     do not require a remote host connection before sending and receiving data. With
	//     System.Net.Sockets.SocketType.Rdm, you can communicate with multiple peers.
	Rdm = 4,
	//
	// Summary:
	//     Provides connection-oriented and reliable two-way transfer of ordered byte streams
	//     across a network. System.Net.Sockets.SocketType.Seqpacket does not duplicate
	//     data, and it preserves boundaries within the data stream. A Socket of type System.Net.Sockets.SocketType.Seqpacket
	//     communicates with a single peer and requires a remote host connection before
	//     communication can begin.
	Seqpacket = 5
};
