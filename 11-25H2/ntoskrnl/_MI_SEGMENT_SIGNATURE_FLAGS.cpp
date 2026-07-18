struct _MI_SEGMENT_SIGNATURE_FLAGS// Size=0x1 (Id=2212)
{
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ImageSigningLevel:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char ImageSigningType:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
            unsigned char Spare:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char EntireField;// Offset=0x0 Size=0x1
    };
};
