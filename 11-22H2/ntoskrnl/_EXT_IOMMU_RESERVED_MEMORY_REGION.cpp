struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=508)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EXT_IOMMU_RESERVED_MEMORY_REGION// Size=0x18 (Id=390)
{
    union _LARGE_INTEGER Base;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Limit;// Offset=0x8 Size=0x8
    unsigned char Ignored;// Offset=0x10 Size=0x1
};
