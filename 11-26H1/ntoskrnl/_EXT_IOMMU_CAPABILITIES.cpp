union _EXT_IOMMU_CAPABILITIES// Size=0x8 (Id=413)
{
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long GeneratesMsiInterrupts:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CoherentTableWalks:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long InterruptsNotSubjectToRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long InterruptRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Stage2DmaRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Svm:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long PcieFunctionBased:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
    };
};
