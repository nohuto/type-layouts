union _NDIS_UDP_SEGMENTATION_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1439// Size=0x8 (Id=1439)
{
    struct <unnamed-type-Transmit>// Size=0x4 (Id=11673)
    {
        unsigned long MSS:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long UdpHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xa
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IPVersion:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_UDP_SEGMENTATION_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1440::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
    void * Value;// Offset=0x0 Size=0x8
};
