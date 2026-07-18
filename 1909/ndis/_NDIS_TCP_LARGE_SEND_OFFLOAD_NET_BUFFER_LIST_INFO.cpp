struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO// Size=0x8 (Id=1150)
{
    union // Size=0x4 (Id=0)
    {
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_anonymous_1347::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_anonymous_1348::<unnamed-type-LsoV1Transmit> LsoV1Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_anonymous_1349::<unnamed-type-LsoV1TransmitComplete> LsoV1TransmitComplete;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_anonymous_1350::<unnamed-type-LsoV2Transmit> LsoV2Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_anonymous_1351::<unnamed-type-LsoV2TransmitComplete> LsoV2TransmitComplete;// Offset=0x0 Size=0x4
        void * Value;// Offset=0x0 Size=0x8
    };
};
