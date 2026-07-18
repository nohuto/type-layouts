struct _anonymous_199// Size=0x4 (Id=199)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LongFunction:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Persistent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Private:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _anonymous_200// Size=0x4 (Id=200)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _anonymous_199 s;// Offset=0x0 Size=0x4
};
