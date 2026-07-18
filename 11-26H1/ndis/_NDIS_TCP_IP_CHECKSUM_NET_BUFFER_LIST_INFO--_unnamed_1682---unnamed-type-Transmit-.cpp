struct _NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO::_unnamed_1682::<unnamed-type-Transmit>// Size=0x4 (Id=1682)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsIPv4:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsIPv6:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IpHeaderChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long TcpHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
    };
};
