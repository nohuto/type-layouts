union NVME_CDW11_FEATURE_INTERRUPT_COALESCING// Size=0x4 (Id=1241)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long THR:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long LARGE_INTEGER:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
