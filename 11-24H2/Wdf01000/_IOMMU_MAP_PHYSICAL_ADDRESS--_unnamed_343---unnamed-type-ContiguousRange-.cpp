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

struct _IOMMU_MAP_PHYSICAL_ADDRESS::_unnamed_343::<unnamed-type-ContiguousRange>// Size=0x10 (Id=343)
{
    union _LARGE_INTEGER Base;// Offset=0x0 Size=0x8
    unsigned long long Size;// Offset=0x8 Size=0x8
};
