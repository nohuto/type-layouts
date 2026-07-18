struct _NDIS_TASK_IPSEC// Size=0x18 (Id=1648)
{
    union // Size=0x14 (Id=0)
    {
        struct <unnamed-type-Supported>// Size=0x10 (Id=10774)
        {
            unsigned long AH_ESP_COMBINED;// Offset=0x0 Size=0x4
            unsigned long TRANSPORT_TUNNEL_COMBINED;// Offset=0x4 Size=0x4
            unsigned long V4_OPTIONS;// Offset=0x8 Size=0x4
            unsigned long RESERVED;// Offset=0xc Size=0x4
        };
        struct _NDIS_TASK_IPSEC::<unnamed-type-Supported> Supported;// Offset=0x0 Size=0x10
        struct <unnamed-type-V4AH>// Size=0x4 (Id=10780)
        {
            unsigned long MD5:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long SHA_1:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Transport:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Tunnel:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Send:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Receive:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        };
        struct _NDIS_TASK_IPSEC::<unnamed-type-V4AH> V4AH;// Offset=0x10 Size=0x4
        struct <unnamed-type-V4ESP>// Size=0x4 (Id=10788)
        {
            unsigned long DES:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long RESERVED:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TRIPLE_DES:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NULL_ESP:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Transport:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Tunnel:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Send:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Receive:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        };
        struct _NDIS_TASK_IPSEC::<unnamed-type-V4ESP> V4ESP;// Offset=0x14 Size=0x4
    };
};
