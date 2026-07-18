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

struct NVME_ICE_ADDRESS_RANGE// Size=0x20 (Id=1167)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    union _LARGE_INTEGER RangeStart;// Offset=0x8 Size=0x8
    unsigned long long RangeLength;// Offset=0x10 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        unsigned long Readable:1;// Offset=0x18 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Writable:1;// Offset=0x18 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x18 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};
