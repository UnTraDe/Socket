#pragma once

enum class SocketError
{
	//
	// Summary:
	//     An unspecified System.Net.Sockets.Socket error has occurred.
	SocketError = -1,
	//
	// Summary:
	//     The System.Net.Sockets.Socket operation succeeded.
	Success = 0,
	//
	// Summary:
	//     The overlapped operation was aborted due to the closure of the System.Net.Sockets.Socket.
	OperationAborted = 995,
	//
	// Summary:
	//     The application has initiated an overlapped operation that cannot be completed
	//     immediately.
	IOPending = 997,
	//
	// Summary:
	//     A blocking System.Net.Sockets.Socket call was canceled.
	Interrupted = 10004,
	//
	// Summary:
	//     An attempt was made to access a System.Net.Sockets.Socket in a way that is forbidden
	//     by its access permissions.
	AccessDenied = 10013,
	//
	// Summary:
	//     An invalid pointer address was detected by the underlying socket provider.
	Fault = 10014,
	//
	// Summary:
	//     An invalid argument was supplied to a System.Net.Sockets.Socket member.
	InvalidArgument = 10022,
	//
	// Summary:
	//     There are too many open sockets in the underlying socket provider.
	TooManyOpenSockets = 10024,
	//
	// Summary:
	//     An operation on a nonblocking socket cannot be completed immediately.
	WouldBlock = 10035,
	//
	// Summary:
	//     A blocking operation is in progress.
	InProgress = 10036,
	//
	// Summary:
	//     The nonblocking System.Net.Sockets.Socket already has an operation in progress.
	AlreadyInProgress = 10037,
	//
	// Summary:
	//     A System.Net.Sockets.Socket operation was attempted on a non-socket.
	NotSocket = 10038,
	//
	// Summary:
	//     A required address was omitted from an operation on a System.Net.Sockets.Socket.
	DestinationAddressRequired = 10039,
	//
	// Summary:
	//     The datagram is too long.
	MessageSize = 10040,
	//
	// Summary:
	//     The protocol type is incorrect for this System.Net.Sockets.Socket.
	ProtocolType = 10041,
	//
	// Summary:
	//     An unknown, invalid, or unsupported option or level was used with a System.Net.Sockets.Socket.
	ProtocolOption = 10042,
	//
	// Summary:
	//     The protocol is not implemented or has not been configured.
	ProtocolNotSupported = 10043,
	//
	// Summary:
	//     The support for the specified socket type does not exist in this address family.
	SocketNotSupported = 10044,
	//
	// Summary:
	//     The address family is not supported by the protocol family.
	OperationNotSupported = 10045,
	//
	// Summary:
	//     The protocol family is not implemented or has not been configured.
	ProtocolFamilyNotSupported = 10046,
	//
	// Summary:
	//     The address family specified is not supported. This error is returned if the
	//     IPv6 address family was specified and the IPv6 stack is not installed on the
	//     local machine. This error is returned if the IPv4 address family was specified
	//     and the IPv4 stack is not installed on the local machine.
	AddressFamilyNotSupported = 10047,
	//
	// Summary:
	//     Only one use of an address is normally permitted.
	AddressAlreadyInUse = 10048,
	//
	// Summary:
	//     The selected IP address is not valid in this context.
	AddressNotAvailable = 10049,
	//
	// Summary:
	//     The network is not available.
	NetworkDown = 10050,
	//
	// Summary:
	//     No route to the remote host exists.
	NetworkUnreachable = 10051,
	//
	// Summary:
	//     The application tried to set System.Net.Sockets.SocketOptionName.KeepAlive on
	//     a connection that has already timed out.
	NetworkReset = 10052,
	//
	// Summary:
	//     The connection was aborted by the .NET Framework or the underlying socket provider.
	ConnectionAborted = 10053,
	//
	// Summary:
	//     The connection was reset by the remote peer.
	ConnectionReset = 10054,
	//
	// Summary:
	//     No free buffer space is available for a System.Net.Sockets.Socket operation.
	NoBufferSpaceAvailable = 10055,
	//
	// Summary:
	//     The System.Net.Sockets.Socket is already connected.
	IsConnected = 10056,
	//
	// Summary:
	//     The application tried to send or receive data, and the System.Net.Sockets.Socket
	//     is not connected.
	NotConnected = 10057,
	//
	// Summary:
	//     A request to send or receive data was disallowed because the System.Net.Sockets.Socket
	//     has already been closed.
	Shutdown = 10058,
	//
	// Summary:
	//     The connection attempt timed out, or the connected host has failed to respond.
	TimedOut = 10060,
	//
	// Summary:
	//     The remote host is actively refusing a connection.
	ConnectionRefused = 10061,
	//
	// Summary:
	//     The operation failed because the remote host is down.
	HostDown = 10064,
	//
	// Summary:
	//     There is no network route to the specified host.
	HostUnreachable = 10065,
	//
	// Summary:
	//     Too many processes are using the underlying socket provider.
	ProcessLimit = 10067,
	//
	// Summary:
	//     The network subsystem is unavailable.
	SystemNotReady = 10091,
	//
	// Summary:
	//     The version of the underlying socket provider is out of range.
	VersionNotSupported = 10092,
	//
	// Summary:
	//     The underlying socket provider has not been initialized.
	NotInitialized = 10093,
	//
	// Summary:
	//     A graceful shutdown is in progress.
	Disconnecting = 10101,
	//
	// Summary:
	//     The specified class was not found.
	TypeNotFound = 10109,
	//
	// Summary:
	//     No such host is known. The name is not an official host name or alias.
	HostNotFound = 11001,
	//
	// Summary:
	//     The name of the host could not be resolved. Try again later.
	TryAgain = 11002,
	//
	// Summary:
	//     The error is unrecoverable or the requested database cannot be located.
	NoRecovery = 11003,
	//
	// Summary:
	//     The requested name or IP address was not found on the name server.
	NoData = 11004
};