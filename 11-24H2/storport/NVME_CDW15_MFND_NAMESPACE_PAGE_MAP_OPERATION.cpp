union NVME_CDW15_MFND_NAMESPACE_PAGE_MAP_OPERATION// Size=0x4 (Id=628)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SEL:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long Reserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
