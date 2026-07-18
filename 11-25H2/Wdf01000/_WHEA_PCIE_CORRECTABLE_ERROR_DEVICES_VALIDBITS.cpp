union _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS// Size=0x8 (Id=3067)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Segment:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Bus:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Device:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Function:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Mask:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CorrectableErrorCount:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
