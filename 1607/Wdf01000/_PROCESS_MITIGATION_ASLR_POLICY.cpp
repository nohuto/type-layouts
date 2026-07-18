struct _PROCESS_MITIGATION_ASLR_POLICY// Size=0x4 (Id=3573)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EnableBottomUpRandomization:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableForceRelocateImages:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long EnableHighEntropy:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DisallowStrippedImages:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ReservedFlags:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
};
