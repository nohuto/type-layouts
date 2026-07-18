union _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1322// Size=0x8 (Id=1322)
{
    struct <unnamed-type-Transmit>// Size=0x4 (Id=9944)
    {
        unsigned long Unused:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long Type:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1323::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-LsoV1Transmit>// Size=0x4 (Id=9949)
    {
        unsigned long MSS:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long TcpHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xa
        unsigned long Type:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1324::<unnamed-type-LsoV1Transmit> LsoV1Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-LsoV1TransmitComplete>// Size=0x4 (Id=9955)
    {
        unsigned long TcpPayload:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long Type:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1325::<unnamed-type-LsoV1TransmitComplete> LsoV1TransmitComplete;// Offset=0x0 Size=0x4
    struct <unnamed-type-LsoV2Transmit>// Size=0x4 (Id=9960)
    {
        unsigned long MSS:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long TcpHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xa
        unsigned long Type:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IPVersion:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1326::<unnamed-type-LsoV2Transmit> LsoV2Transmit;// Offset=0x0 Size=0x4
    struct <unnamed-type-LsoV2TransmitComplete>// Size=0x4 (Id=9966)
    {
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long Type:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1327::<unnamed-type-LsoV2TransmitComplete> LsoV2TransmitComplete;// Offset=0x0 Size=0x4
    void * Value;// Offset=0x0 Size=0x8
};
