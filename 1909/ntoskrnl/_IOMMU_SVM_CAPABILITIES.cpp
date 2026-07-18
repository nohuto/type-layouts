struct _anonymous_1826// Size=0x4 (Id=1826)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PasidMaxWidth:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long PasidExePerm:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PasidPrivMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AtsPageAlignedRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AtsGlobalInvalidate:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long AtsInvalidateQueueDepth:5;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x5
    };
};

union _IOMMU_SVM_CAPABILITIES// Size=0xc (Id=1827)
{
    union // Size=0xc (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AtsCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PriCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long PasidCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
        struct _anonymous_1826 CapReg;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Rsvd:15;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0xf
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};
