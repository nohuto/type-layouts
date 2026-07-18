struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD// Size=0x20 (Id=1427)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-IPv4Transmit>// Size=0x8 (Id=9854)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Transmit> IPv4Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-IPv4Receive>// Size=0x8 (Id=9862)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long IpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv4Receive> IPv4Receive;// Offset=0x8 Size=0x8
        struct <unnamed-type-IPv6Transmit>// Size=0x8 (Id=9870)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Transmit> IPv6Transmit;// Offset=0x10 Size=0x8
        struct <unnamed-type-IPv6Receive>// Size=0x8 (Id=9877)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
        };
        struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Receive> IPv6Receive;// Offset=0x18 Size=0x8
    };
};
