union _RTL_TICK_LOCK// Size=0x8 (Id=2420)
{
    unsigned long long AsULong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Busy:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Ticks:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};
