struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv6>// Size=0x10 (Id=1081)
{
    unsigned long Encapsulation;// Offset=0x0 Size=0x4
    unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
    unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IpExtensionHeadersSupported:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};
