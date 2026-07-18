struct _unnamed_16// Size=0x4 (Id=16)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LongFunction:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Persistent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Private:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_17// Size=0x4 (Id=17)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _unnamed_16 s;// Offset=0x0 Size=0x4
};
