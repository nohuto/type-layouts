struct _NDIS_UDP_SEGMENTATION_OFFLOAD// Size=0x1c (Id=1141)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0xc (Id=11062)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount:6;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x6
            unsigned long SubMssFinalSegmentSupported:1;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved:25;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x19
        };
        struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0xc
        struct <unnamed-type-IPv6>// Size=0x10 (Id=11069)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount:6;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x6
            unsigned long SubMssFinalSegmentSupported:1;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved1:25;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x19
            unsigned long IpExtensionHeadersSupported:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Reserved2:30;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    struct _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed-type-IPv6> IPv6;// Offset=0xc Size=0x10
};
