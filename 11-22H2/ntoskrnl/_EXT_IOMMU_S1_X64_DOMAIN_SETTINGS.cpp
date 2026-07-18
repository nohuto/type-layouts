struct _unnamed_358// Size=0x1 (Id=358)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char EnableTranslation:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Blocked:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char EnableDefaultPasid:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};

struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS// Size=0x10 (Id=359)
{
    struct _unnamed_358 Flags;// Offset=0x0 Size=0x1
    unsigned long long PageTableRoot;// Offset=0x8 Size=0x8
};
