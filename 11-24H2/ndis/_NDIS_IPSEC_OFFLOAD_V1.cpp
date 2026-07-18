struct _NDIS_IPSEC_OFFLOAD_V1// Size=0x1c (Id=1836)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-Supported>// Size=0x14 (Id=7868)
        {
            unsigned long Encapsulation;// Offset=0x0 Size=0x4
            unsigned long AhEspCombined;// Offset=0x4 Size=0x4
            unsigned long TransportTunnelCombined;// Offset=0x8 Size=0x4
            unsigned long IPv4Options;// Offset=0xc Size=0x4
            unsigned long Flags;// Offset=0x10 Size=0x4
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-Supported> Supported;// Offset=0x0 Size=0x14
        struct <unnamed-type-IPv4AH>// Size=0x4 (Id=7875)
        {
            unsigned long Md5:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Sha_1:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4AH> IPv4AH;// Offset=0x14 Size=0x4
        struct <unnamed-type-IPv4ESP>// Size=0x4 (Id=7883)
        {
            unsigned long Des:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Reserved:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long TripleDes:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
            unsigned long NullEsp:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
            unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4ESP> IPv4ESP;// Offset=0x18 Size=0x4
    };
};
