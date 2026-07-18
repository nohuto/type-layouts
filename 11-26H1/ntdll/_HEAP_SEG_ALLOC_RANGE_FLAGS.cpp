union _HEAP_SEG_ALLOC_RANGE_FLAGS// Size=0x4 (Id=380)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtraPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long GuardPagePresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EmptyPageNotify:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
