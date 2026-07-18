union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS// Size=0x4 (Id=3504)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MPIDR:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long AffinityLevel:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RunningState:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long VendorSpecificInfo:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
