union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS// Size=0x4 (Id=3536)
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

struct _WHEA_ARM_PROCESSOR_ERROR_SECTION// Size=0x29 (Id=3266)
{
    union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS ValidBits;// Offset=0x0 Size=0x4
    unsigned short ErrorInformationStructures;// Offset=0x4 Size=0x2
    unsigned short ContextInformationStructures;// Offset=0x6 Size=0x2
    unsigned long SectionLength;// Offset=0x8 Size=0x4
    unsigned char ErrorAffinityLevel;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
    unsigned long long MPIDR_EL1;// Offset=0x10 Size=0x8
    unsigned long long MIDR_EL1;// Offset=0x18 Size=0x8
    unsigned long RunningState;// Offset=0x20 Size=0x4
    unsigned long PSCIState;// Offset=0x24 Size=0x4
    unsigned char Data[1];// Offset=0x28 Size=0x1
};
