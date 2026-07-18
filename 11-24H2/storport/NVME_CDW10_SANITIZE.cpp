union NVME_CDW10_SANITIZE// Size=0x4 (Id=1209)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SANACT:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long AUSE:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long OWPASS:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long OIPBP:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long NDAS:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
