union _MI_AVAILABLE_PAGES_MEDIUM_GRANULARITY// Size=0x2 (Id=2182)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SmallFreeZeroPages:5;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x5
        unsigned short SmallAvailablePages:5;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x5
        unsigned short Spare:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short EntireValue;// Offset=0x0 Size=0x2
    short EntireValueSigned;// Offset=0x0 Size=0x2
    short EntireValueVolatile;// Offset=0x0 Size=0x2
};
