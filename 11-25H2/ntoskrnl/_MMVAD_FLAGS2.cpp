struct _MMVAD_FLAGS2// Size=0x4 (Id=2074)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Large:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TrimBehind:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Inherit:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NoValidationNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long PrivateDemandZero:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ImageMappingExtended:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
        };
        unsigned long LongFlags;// Offset=0x0 Size=0x4
    };
};
