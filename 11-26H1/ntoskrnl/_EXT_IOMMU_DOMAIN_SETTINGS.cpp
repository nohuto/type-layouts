struct _unnamed_384// Size=0x1 (Id=384)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char EnableTranslation:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Blocked:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char EnableDefaultPasid:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char FirstStagePagingMode:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS// Size=0x10 (Id=385)
{
    struct _unnamed_384 Flags;// Offset=0x0 Size=0x1
    unsigned long long PageTableRoot;// Offset=0x8 Size=0x8
};

struct _unnamed_370// Size=0x10 (Id=370)
{
    unsigned char PageTableRootLevel;// Offset=0x0 Size=0x1
    unsigned char InputSize;// Offset=0x1 Size=0x1
    unsigned long long PageTableRoot;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_DOMAIN_SETTINGS// Size=0x20 (Id=371)
{
    struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS S1;// Offset=0x0 Size=0x10
    struct _unnamed_370 S2;// Offset=0x10 Size=0x10
};
