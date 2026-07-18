struct _NDIS_TASK_IPSEC::<unnamed-type-V4ESP>// Size=0x4 (Id=1546)
{
    struct // Size=0x4 (Id=0)
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
};
