union _NDIS_NET_BUFFER_LIST_FILTERING_INFO::_unnamed_1765// Size=0x8 (Id=1765)
{
    struct <unnamed-type-FilteringInfo>// Size=0x4 (Id=8333)
    {
        unsigned short FilterId;// Offset=0x0 Size=0x2
        union <unnamed-type-QueueVPortInfo>// Size=0x2 (Id=8335)
        {
            unsigned short QueueId;// Offset=0x0 Size=0x2
            unsigned short VPortId;// Offset=0x0 Size=0x2
        };
        union _NDIS_NET_BUFFER_LIST_FILTERING_INFO::_unnamed_1767::<unnamed-type-FilteringInfo>::<unnamed-type-QueueVPortInfo> QueueVPortInfo;// Offset=0x2 Size=0x2
    };
    struct _NDIS_NET_BUFFER_LIST_FILTERING_INFO::_unnamed_1766::<unnamed-type-FilteringInfo> FilteringInfo;// Offset=0x0 Size=0x4
    void * Value;// Offset=0x0 Size=0x8
};
