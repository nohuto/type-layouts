union _NVME_NAMESPACE_STATE// Size=0x4 (Id=955)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PowerDown:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SystemPoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Removed:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Added:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Modified:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Missing:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long BlockSizeChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Processed:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ZNSCommandSetSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
