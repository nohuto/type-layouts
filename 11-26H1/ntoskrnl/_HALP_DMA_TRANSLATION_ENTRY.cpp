struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT// Size=0x18 (Id=449)
{
    struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN * OwningToken;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Size;// Offset=0x10 Size=0x8
};

struct _unnamed_418// Size=0x8 (Id=418)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long BoundToMaster:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long BoundToScatterPool:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long OwnedByMaster:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long OwnedByScatterPool:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long TemporaryMapping:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long ZeroBuffer:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Address:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};

union _unnamed_419// Size=0x8 (Id=419)
{
    void * VirtualAddress;// Offset=0x0 Size=0x8
    struct _unnamed_418 Flags;// Offset=0x0 Size=0x8
};

struct _HALP_DMA_TRANSLATION_ENTRY// Size=0x48 (Id=420)
{
    unsigned long long PhysicalAddress;// Offset=0x0 Size=0x8
    struct _HALP_DMA_TRANSLATION_ENTRY * Next;// Offset=0x8 Size=0x8
    unsigned long MappedLength;// Offset=0x10 Size=0x4
    struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT RemappingAddress;// Offset=0x18 Size=0x18
    union _unnamed_419 u;// Offset=0x30 Size=0x8
    struct _HALP_DMA_TRANSLATION_ENTRY * NextMapping;// Offset=0x38 Size=0x8
    unsigned char LogicalBounceBufferPremapped;// Offset=0x40 Size=0x1
};
