struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V2::<unnamed-type-IPv6>// Size=0x10 (Id=1622)
{
    unsigned long Encapsulation;// Offset=0x0 Size=0x4
    unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
    unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IpExtensionHeadersSupported:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long TcpOptionsSupported:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
    };
};
