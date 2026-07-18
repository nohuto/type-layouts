struct _DMA_ADAPTER// Size=0x10 (Id=297)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct _DMA_OPERATIONS * DmaOperations;// Offset=0x8 Size=0x8
};

struct _HALP_DMA_TRANSLATION_BUFFER_POSITION// Size=0x10 (Id=432)
{
    struct _HALP_DMA_TRANSLATION_BUFFER * Buffer;// Offset=0x0 Size=0x8
    unsigned long Offset;// Offset=0x8 Size=0x4
};

struct _unnamed_379// Size=0x20 (Id=379)
{
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;// Offset=0x0 Size=0x10
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;// Offset=0x10 Size=0x10
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _HALP_DMA_ADAPTER_OBJECT// Size=0xa0 (Id=380)
{
    struct _DMA_ADAPTER DmaHeader;// Offset=0x0 Size=0x10
    unsigned long Signature;// Offset=0x10 Size=0x4
    struct _RTL_BITMAP * ContiguousMapRegisters;// Offset=0x18 Size=0x8
    struct _HALP_DMA_TRANSLATION_ENTRY * ScatterBufferListHead;// Offset=0x20 Size=0x8
    unsigned long NumberOfFreeScatterBuffers;// Offset=0x28 Size=0x4
    struct _HALP_DMA_TRANSLATION_BUFFER * ContiguousTranslations;// Offset=0x30 Size=0x8
    struct _HALP_DMA_TRANSLATION_BUFFER * ScatterTranslations;// Offset=0x38 Size=0x8
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;// Offset=0x40 Size=0x10
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;// Offset=0x50 Size=0x10
    struct _unnamed_379 CrashDump;// Offset=0x60 Size=0x20
    unsigned long long SpinLock;// Offset=0x80 Size=0x8
    unsigned long long GrowLock;// Offset=0x88 Size=0x8
    union _LARGE_INTEGER MaximumPhysicalAddress;// Offset=0x90 Size=0x8
    unsigned char IsMasterAdapter;// Offset=0x98 Size=0x1
    unsigned char DmaCanCross64K;// Offset=0x99 Size=0x1
    unsigned long LibraryVersion;// Offset=0x9c Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HALP_DMA_MASTER_ADAPTER_OBJECT// Size=0xe0 (Id=282)
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;// Offset=0x0 Size=0xa0
    struct _LIST_ENTRY ContiguousAdapterQueue;// Offset=0xa0 Size=0x10
    struct _LIST_ENTRY ScatterAdapterQueue;// Offset=0xb0 Size=0x10
    unsigned long MapBufferSize;// Offset=0xc0 Size=0x4
    union _LARGE_INTEGER MapBufferPhysicalAddress;// Offset=0xc8 Size=0x8
    unsigned long ContiguousPageCount;// Offset=0xd0 Size=0x4
    unsigned long ContiguousPageLimit;// Offset=0xd4 Size=0x4
    unsigned long ScatterPageCount;// Offset=0xd8 Size=0x4
    unsigned long ScatterPageLimit;// Offset=0xdc Size=0x4
};
