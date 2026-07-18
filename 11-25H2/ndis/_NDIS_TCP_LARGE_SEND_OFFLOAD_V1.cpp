struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1// Size=0x10 (Id=1369)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x10 (Id=11337)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
            unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
            unsigned long TcpOptions:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long IpOptions:2;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x2
        };
        struct _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0x10
    };
};
