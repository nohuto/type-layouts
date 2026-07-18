struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ACCESS_RANGE// Size=0x10 (Id=165)
{
    union _LARGE_INTEGER RangeStart;// Offset=0x0 Size=0x8
    unsigned long RangeLength;// Offset=0x8 Size=0x4
    unsigned char RangeInMemory;// Offset=0xc Size=0x1
};
