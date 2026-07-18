union _MI_AVAILABLE_PAGES_HUGE_GRANULARITY// Size=0x4 (Id=1844)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SmallAvailablePages:19;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x13
        unsigned long LargeFreeZeroPages:10;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xa
        unsigned long Spare:2;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x2
    };
    unsigned long EntireValue;// Offset=0x0 Size=0x4
    long EntireValueSigned;// Offset=0x0 Size=0x4
    long EntireValueVolatile;// Offset=0x0 Size=0x4
};
