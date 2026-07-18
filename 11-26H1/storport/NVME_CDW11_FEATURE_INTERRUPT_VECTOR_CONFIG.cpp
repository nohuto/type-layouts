union NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG// Size=0x4 (Id=1245)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IV:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long CD:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved0:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
