struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4AH>// Size=0x4 (Id=1679)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Md5:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Sha_1:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long Transport:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long Tunnel:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long Send:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long Receive:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
    };
};
