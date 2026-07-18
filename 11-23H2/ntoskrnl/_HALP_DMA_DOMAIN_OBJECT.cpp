struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=1101)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _HALP_DMA_TRANSLATION_TYPE
{
    DmaTranslationTypePassthrough=0,
    DmaTranslationTypeSafePassthrough=1,
    DmaTranslationTypeHybridPassthrough=2,
    DmaTranslationTypeTranslate=3,
    DmaTranslationTypeMax=4
};

struct _RTL_RB_TREE// Size=0x10 (Id=115)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _HALP_DMA_DOMAIN_OBJECT// Size=0x78 (Id=382)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    union _LARGE_INTEGER MaximumPhysicalAddress;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER BoundaryAddressMultiple;// Offset=0x18 Size=0x8
    unsigned char CacheCoherent;// Offset=0x20 Size=0x1
    unsigned char FirmwareReserved;// Offset=0x21 Size=0x1
    struct _IOMMU_DMA_DOMAIN * IommuDomainPointer;// Offset=0x28 Size=0x8
    enum _HALP_DMA_TRANSLATION_TYPE TranslationType;// Offset=0x30 Size=0x4
    struct _ADAPTER_OBJECT * OwningAdapter;// Offset=0x38 Size=0x8
    struct _RTL_RB_TREE CommonBufferRoot;// Offset=0x40 Size=0x10
    unsigned long long CommonBufferTreeLock;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY VectorCommonBufferListHead;// Offset=0x58 Size=0x10
    unsigned long long VectorCommonBufferLock;// Offset=0x68 Size=0x8
    unsigned long DomainRefCount;// Offset=0x70 Size=0x4
};
