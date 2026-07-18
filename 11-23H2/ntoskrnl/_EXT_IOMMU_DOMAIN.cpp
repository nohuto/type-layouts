enum _EXT_IOMMU_DOMAIN_TYPE
{
    ExtIommuDomainTypeS1=0,
    ExtIommuDomainTypeS2=1,
    ExtIommuDomainTypeInvalid=2
};

enum _EXT_IOMMU_TRANSLATION_TYPE
{
    ExtTranslationTypePassThrough=0,
    ExtTranslationTypeBlocked=1,
    ExtTranslationTypeTranslate=2,
    ExtTranslationTypeInvalid=3
};

struct _unnamed_316// Size=0x1 (Id=316)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char DefaultDomain:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char FirmwareDomain:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

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

struct _unnamed_347// Size=0x10 (Id=347)
{
    unsigned char PageTableRootLevel;// Offset=0x0 Size=0x1
    unsigned char InputSize;// Offset=0x1 Size=0x1
    unsigned long long PageTableRoot;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_DOMAIN_SETTINGS// Size=0x20 (Id=348)
{
    struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS S1;// Offset=0x0 Size=0x10
    struct _unnamed_347 S2;// Offset=0x10 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EXT_ENV_SPINLOCK// Size=0x20 (Id=410)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
    unsigned char OldIrql;// Offset=0x18 Size=0x1
};

struct _EXT_IOMMU_DOMAIN// Size=0x70 (Id=317)
{
    enum _EXT_IOMMU_DOMAIN_TYPE DomainType;// Offset=0x0 Size=0x4
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;// Offset=0x4 Size=0x4
    struct _unnamed_316 Flags;// Offset=0x8 Size=0x1
    unsigned short FirmwareDomainId;// Offset=0xa Size=0x2
    struct _EXT_IOMMU_DOMAIN_SETTINGS Settings;// Offset=0x10 Size=0x20
    unsigned int ContextId;// Offset=0x30 Size=0x4
    unsigned int DeviceCount;// Offset=0x34 Size=0x4
    struct _LIST_ENTRY Devices;// Offset=0x38 Size=0x10
    struct _EXT_ENV_SPINLOCK Lock;// Offset=0x48 Size=0x20
    struct _EXT_IOMMU_DOMAIN * S2Domain;// Offset=0x68 Size=0x8
};
