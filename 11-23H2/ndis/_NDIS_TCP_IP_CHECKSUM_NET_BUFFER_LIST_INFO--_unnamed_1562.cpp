union _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO::_unnamed_1562// Size=0x8 (Id=1562)
{
    struct <unnamed-type-Transmit>// Size=0x4 (Id=10983)
    {
        unsigned long IsIPv4:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsIPv6:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IpHeaderChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long TcpHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
    };
    struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO::_unnamed_1563::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-Receive>// Size=0x4 (Id=10992)
    {
        unsigned long TcpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UdpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IpChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long TcpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long UdpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long IpChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Loopback:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long TcpChecksumValueInvalid:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long IpChecksumValueInvalid:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
    };
    struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO::_unnamed_1564::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    void * Value;// Offset=0x0 Size=0x8
};
