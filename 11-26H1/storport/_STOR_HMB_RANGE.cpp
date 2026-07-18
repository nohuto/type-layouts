struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _STOR_HMB_RANGE// Size=0x28 (Id=762)
{
    struct _STOR_HMB_RANGE * NextRange;// Offset=0x0 Size=0x8
    struct _MDL * Mdl;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x10 Size=0x8
    void * VirtualAddress;// Offset=0x18 Size=0x8
    unsigned long long Size;// Offset=0x20 Size=0x8
};
