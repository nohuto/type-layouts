struct _NDIS_TCP_IP_CHECKSUM_OFFLOAD::<unnamed-type-IPv6Transmit>// Size=0x8 (Id=1111)
{
    unsigned long Encapsulation;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IpExtensionHeadersSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long TcpOptionsSupported:2;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long TcpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long UdpChecksum:2;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x2
    };
};
