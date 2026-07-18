enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE
{
    MapPhysicalAddressTypeMdl=0,
    MapPhysicalAddressTypeContiguousRange=1,
    MapPhysicalAddressTypePfn=2,
    MapPhysicalAddressTypeMax=3
};

struct _unnamed_1777// Size=0x8 (Id=1777)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
};

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

struct _unnamed_1778// Size=0x10 (Id=1778)
{
    union _LARGE_INTEGER Base;// Offset=0x0 Size=0x8
    unsigned long long Size;// Offset=0x8 Size=0x8
};

struct _unnamed_1779// Size=0x10 (Id=1779)
{
    unsigned long long * PageFrame;// Offset=0x0 Size=0x8
    unsigned long long NumberOfPages;// Offset=0x8 Size=0x8
};

struct _IOMMU_MAP_PHYSICAL_ADDRESS// Size=0x18 (Id=1780)
{
    enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_1777 Mdl;// Offset=0x8 Size=0x8
        struct _unnamed_1778 ContiguousRange;// Offset=0x8 Size=0x10
        struct _unnamed_1779 PfnArray;// Offset=0x8 Size=0x10
    };
};
