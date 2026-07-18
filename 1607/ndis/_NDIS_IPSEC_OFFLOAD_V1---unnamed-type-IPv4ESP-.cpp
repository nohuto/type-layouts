struct _NDIS_IPSEC_OFFLOAD_V1::<unnamed-type-IPv4ESP>// Size=0x4 (Id=1397)
{
    struct // Size=0x4 (Id=0)
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
};
