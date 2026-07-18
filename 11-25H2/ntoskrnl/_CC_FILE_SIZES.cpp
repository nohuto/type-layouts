struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CC_FILE_SIZES// Size=0x18 (Id=580)
{
    union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER FileSize;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER ValidDataLength;// Offset=0x10 Size=0x8
};
