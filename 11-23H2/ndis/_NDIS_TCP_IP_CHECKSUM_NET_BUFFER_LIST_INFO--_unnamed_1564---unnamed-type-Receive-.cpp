struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO::_unnamed_1564::<unnamed-type-Receive>// Size=0x4 (Id=1564)
{
    struct // Size=0x4 (Id=0)
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
};
