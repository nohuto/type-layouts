struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO// Size=0x8 (Id=1042)
{
    union // Size=0x4 (Id=0)
    {
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1192::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1193::<unnamed-type-LsoV1Transmit> LsoV1Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1194::<unnamed-type-LsoV1TransmitComplete> LsoV1TransmitComplete;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1195::<unnamed-type-LsoV2Transmit> LsoV2Transmit;// Offset=0x0 Size=0x4
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO::_unnamed_1196::<unnamed-type-LsoV2TransmitComplete> LsoV2TransmitComplete;// Offset=0x0 Size=0x4
        void * Value;// Offset=0x0 Size=0x8
    };
};
