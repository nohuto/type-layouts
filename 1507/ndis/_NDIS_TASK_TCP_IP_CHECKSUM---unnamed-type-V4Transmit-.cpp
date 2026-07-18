struct _NDIS_TASK_TCP_IP_CHECKSUM::<unnamed-type-V4Transmit>// Size=0x4 (Id=1254)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TcpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};
