enum _IOMMU_DMA_DOMAIN_TYPE
{
    DomainTypeTranslate=0,
    DomainTypePassThrough=1,
    DomainTypeUnmanaged=2,
    DomainTypeTranslateS1=3,
    DomainTypeMax=4
};

enum _EXT_IOMMU_TRANSLATION_TYPE
{
    ExtTranslationTypePassThrough=0,
    ExtTranslationTypeBlocked=1,
    ExtTranslationTypeTranslate=2,
    ExtTranslationTypeInvalid=3
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _IOMMU_DMA_DOMAIN// Size=0x70 (Id=408)
{
    struct _HALP_DMA_DOMAIN_OBJECT * DmaDomainOwner;// Offset=0x0 Size=0x8
    enum _IOMMU_DMA_DOMAIN_TYPE DomainType;// Offset=0x8 Size=0x4
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;// Offset=0xc Size=0x4
    struct _LIST_ENTRY HardwareDomainListHead;// Offset=0x10 Size=0x10
    unsigned long long HardwareDomainListLock;// Offset=0x20 Size=0x8
    struct _DMAR_PAGE_TABLE_STATE * DmarptState;// Offset=0x28 Size=0x8
    unsigned long DomainId;// Offset=0x30 Size=0x4
    unsigned char IsStage1;// Offset=0x34 Size=0x1
    unsigned long Asid;// Offset=0x38 Size=0x4
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR * LogicalAllocator;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY AttachedDevicesList;// Offset=0x48 Size=0x10
    unsigned long long AttachedDevicesListLock;// Offset=0x58 Size=0x8
    unsigned long HvReferences;// Offset=0x60 Size=0x4
    unsigned char HvDomainIdAllocated;// Offset=0x64 Size=0x1
    struct _EX_PUSH_LOCK HvPushLock;// Offset=0x68 Size=0x8
};
