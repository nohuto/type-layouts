struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_549// Size=0x10 (Id=549)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long DataPayload;// Offset=0x8 Size=0x4
};
