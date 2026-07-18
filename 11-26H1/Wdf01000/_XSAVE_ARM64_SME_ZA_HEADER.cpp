struct _XSAVE_ARM64_SME_ZA_HEADER// Size=0x20 (Id=4115)
{
    unsigned long VectorLength;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Za:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReservedFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
    };
    unsigned long Reserved[6];// Offset=0x8 Size=0x18
};
