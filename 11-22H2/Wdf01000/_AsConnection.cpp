union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _AsConnection// Size=0x10 (Id=1256)
{
    unsigned char Reserved[7];// Offset=0x0 Size=0x7
    struct // Size=0x1 (Id=0)
    {
        unsigned char Consumer:2;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:6;// Offset=0x7 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    union _LARGE_INTEGER Id;// Offset=0x8 Size=0x8
};
