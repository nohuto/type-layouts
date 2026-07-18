struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv4>// Size=0xc (Id=1229)
{
    unsigned long Encapsulation;// Offset=0x0 Size=0x4
    unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MinSegmentCount:6;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x6
        unsigned long SubMssFinalSegmentSupported:1;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};
