union _MI_AVAILABLE_PAGES_LARGE_GRANULARITY// Size=0x2 (Id=1987)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SmallAvailablePages:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
        unsigned short MediumFreeZeroPages:6;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x6
    };
    unsigned short EntireValue;// Offset=0x0 Size=0x2
    short EntireValueSigned;// Offset=0x0 Size=0x2
    short EntireValueVolatile;// Offset=0x0 Size=0x2
};
