struct _MI_AWEINFO_FLAGS// Size=0x4 (Id=2398)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ProcessDefault:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PagesLockInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ZeroPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long IoSpace:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long LazyTbFlush:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Unused:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
        unsigned long AllBits;// Offset=0x0 Size=0x4
    };
};
