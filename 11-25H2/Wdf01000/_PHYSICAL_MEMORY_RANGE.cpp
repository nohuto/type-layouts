struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PHYSICAL_MEMORY_RANGE// Size=0x10 (Id=2625)
{
    union _LARGE_INTEGER BaseAddress;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER NumberOfBytes;// Offset=0x8 Size=0x8
};
