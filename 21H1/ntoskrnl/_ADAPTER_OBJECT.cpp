struct _DMA_ADAPTER// Size=0x10 (Id=257)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct _DMA_OPERATIONS * DmaOperations;// Offset=0x8 Size=0x8
};

struct _HALP_DMA_TRANSLATION_BUFFER_POSITION// Size=0x10 (Id=337)
{
    struct _HALP_DMA_TRANSLATION_BUFFER * Buffer;// Offset=0x0 Size=0x8
    unsigned long Offset;// Offset=0x8 Size=0x4
};

struct _anonymous_305// Size=0x20 (Id=305)
{
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;// Offset=0x0 Size=0x10
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;// Offset=0x10 Size=0x10
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=977)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _HALP_DMA_ADAPTER_OBJECT// Size=0x98 (Id=306)
{
    struct _DMA_ADAPTER DmaHeader;// Offset=0x0 Size=0x10
    struct _RTL_BITMAP * ContiguousMapRegisters;// Offset=0x10 Size=0x8
    struct _HALP_DMA_TRANSLATION_ENTRY * ScatterBufferListHead;// Offset=0x18 Size=0x8
    unsigned long NumberOfFreeScatterBuffers;// Offset=0x20 Size=0x4
    struct _HALP_DMA_TRANSLATION_BUFFER * ContiguousTranslations;// Offset=0x28 Size=0x8
    struct _HALP_DMA_TRANSLATION_BUFFER * ScatterTranslations;// Offset=0x30 Size=0x8
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;// Offset=0x38 Size=0x10
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;// Offset=0x48 Size=0x10
    struct _anonymous_305 CrashDump;// Offset=0x58 Size=0x20
    unsigned long long SpinLock;// Offset=0x78 Size=0x8
    unsigned long long GrowLock;// Offset=0x80 Size=0x8
    union _LARGE_INTEGER MaximumPhysicalAddress;// Offset=0x88 Size=0x8
    unsigned char IsMasterAdapter;// Offset=0x90 Size=0x1
    unsigned char DmaCanCross64K;// Offset=0x91 Size=0x1
    unsigned long LibraryVersion;// Offset=0x94 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE// Size=0x28 (Id=171)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY DeviceListHead;// Offset=0x8 Size=0x10
    unsigned long long Lock;// Offset=0x18 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char Busy;// Offset=0x20 Size=0x1
        struct // Size=0x8 (Id=0)
        {
            long long Reserved:8;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x8
            long long Hint:56;// Offset=0x20 Size=0x8 BitOffset=0x8 BitSize=0x38
        };
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

enum _DMA_WIDTH
{
    Width8Bits=0,
    Width16Bits=1,
    Width32Bits=2,
    Width64Bits=3,
    WidthNoWrap=4,
    MaximumDmaWidth=5
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

enum _EXT_IOMMU_TRANSLATION_TYPE
{
    ExtTranslationTypePassThrough=0,
    ExtTranslationTypeBlocked=1,
    ExtTranslationTypeTranslate=2,
    ExtTranslationTypeSafePassThrough=3,
    ExtTranslationTypeInvalid=4
};

enum _HALP_EMERGENCY_LA_QUEUE_TYPE
{
    HalpDmaLegacyLaQueueEntry=0,
    HalpDmaThinLaQueueEntry=1,
    HalpDmaLaQueueEntryMax=2
};

struct _HALP_EMERGENCY_LA_QUEUE_ENTRY// Size=0x18 (Id=304)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _HALP_EMERGENCY_LA_QUEUE_TYPE EntryType;// Offset=0x10 Size=0x4
};

enum _HALP_DMA_ADAPTER_ALLOCATION_STATE
{
    HalpDmaAdapterAllocationStateNone=0,
    HalpDmaAdapterAllocateChannel=1,
    HalpDmaAdapterAllocateMapRegisters=2,
    HalpDmaAdapterAllocateChannelRemapResources=3,
    HalpDmaAdapterAllocationStateComplete=4,
    HalpDmaAdapterAllocationStateMax=5
};

struct _SCATTER_GATHER_LIST// Size=0x10 (Id=246)
{
    unsigned long NumberOfElements;// Offset=0x0 Size=0x4
    unsigned long long Reserved;// Offset=0x8 Size=0x8
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

struct _ADAPTER_OBJECT// Size=0x280 (Id=223)
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;// Offset=0x0 Size=0x98
    struct _HALP_DMA_MASTER_ADAPTER_OBJECT * MasterAdapter;// Offset=0x98 Size=0x8
    struct _LIST_ENTRY WaitQueueEntry;// Offset=0xa0 Size=0x10
    union // Size=0x28 (Id=0)
    {
        struct _KDEVICE_QUEUE ChannelWaitQueue;// Offset=0xb0 Size=0x28
        unsigned long long ResourceWaitLock;// Offset=0xb0 Size=0x8
    };
    struct _LIST_ENTRY ResourceWaitQueue;// Offset=0xb8 Size=0x10
    struct _LIST_ENTRY ChannelResourceWaitQueue;// Offset=0xc8 Size=0x10
    unsigned char ResourceQueueBusy;// Offset=0xd8 Size=0x1
    unsigned long MapRegistersPerChannel;// Offset=0xe0 Size=0x4
    void * MapRegisterBase;// Offset=0xe8 Size=0x8
    unsigned long NumberOfMapRegisters;// Offset=0xf0 Size=0x4
    unsigned long MaxTransferLength;// Offset=0xf4 Size=0x4
    void * CrashDumpRegisterBase[2];// Offset=0xf8 Size=0x10
    unsigned long NumberOfCrashDumpRegisters[2];// Offset=0x108 Size=0x8
    unsigned long CrashDumpRegisterRefCount[2];// Offset=0x110 Size=0x8
    struct _LIST_ENTRY AdapterCrashDumpList;// Offset=0x118 Size=0x10
    struct _MDL * MapRegisterMdl;// Offset=0x128 Size=0x8
    unsigned long long MapRegisterMdlLock;// Offset=0x130 Size=0x8
    struct _EX_PUSH_LOCK ExpiredLock;// Offset=0x138 Size=0x8
    void * AllocationHandle;// Offset=0x140 Size=0x8
    void * VirtualAddress;// Offset=0x148 Size=0x8
    unsigned char IsAllocationMdlBased;// Offset=0x150 Size=0x1
    unsigned char NoLocalPool;// Offset=0x151 Size=0x1
    unsigned char ExpiredFlag;// Offset=0x152 Size=0x1
    struct _WAIT_CONTEXT_BLOCK * CurrentWcb;// Offset=0x158 Size=0x8
    struct _DMA_TRANSFER_CONTEXT * CurrentTransferContext;// Offset=0x160 Size=0x8
    struct _HALP_DMA_CONTROLLER * DmaController;// Offset=0x168 Size=0x8
    unsigned long Controller;// Offset=0x170 Size=0x4
    unsigned long ChannelNumber;// Offset=0x174 Size=0x4
    unsigned long RequestLine;// Offset=0x178 Size=0x4
    unsigned long RequestedChannelCount;// Offset=0x17c Size=0x4
    unsigned long AllocatedChannelCount;// Offset=0x180 Size=0x4
    unsigned long AllocatedChannels[8];// Offset=0x184 Size=0x20
    void * ChannelAdapter;// Offset=0x1a8 Size=0x8
    unsigned char NeedsMapRegisters;// Offset=0x1b0 Size=0x1
    unsigned char MasterDevice;// Offset=0x1b1 Size=0x1
    unsigned char ScatterGather;// Offset=0x1b2 Size=0x1
    unsigned char AutoInitialize;// Offset=0x1b3 Size=0x1
    unsigned char IgnoreCount;// Offset=0x1b4 Size=0x1
    unsigned char CacheCoherent;// Offset=0x1b5 Size=0x1
    union // Size=0x1ba (Id=0)
    {
        unsigned char Dma32BitAddresses;// Offset=0x1b8 Size=0x1
        unsigned char Dma64BitAddresses;// Offset=0x1b9 Size=0x1
        unsigned long DmaAddressWidth;// Offset=0x1b8 Size=0x4
    };
    enum _DMA_WIDTH DmaPortWidth;// Offset=0x1bc Size=0x4
    union _LARGE_INTEGER DeviceAddress;// Offset=0x1c0 Size=0x8
    struct _LIST_ENTRY AdapterList;// Offset=0x1c8 Size=0x10
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x1d8 Size=0x20
    struct _HALP_DMA_DOMAIN_OBJECT * DomainPointer;// Offset=0x1f8 Size=0x8
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;// Offset=0x200 Size=0x4
    unsigned char AdapterInUse;// Offset=0x204 Size=0x1
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x208 Size=0x8
    struct _EXT_IOMMU_DEVICE_ID * DeviceId;// Offset=0x210 Size=0x8
    void * IommuDevice;// Offset=0x218 Size=0x8
    struct _MDL * ScatterGatherMdl;// Offset=0x220 Size=0x8
    unsigned long long LowMemoryLogicalAddressBase;// Offset=0x228 Size=0x8
    unsigned long long LowMemoryLogicalAddressQueueLock;// Offset=0x230 Size=0x8
    struct _LIST_ENTRY LowMemoryLogicalAddressQueue;// Offset=0x238 Size=0x10
    unsigned char LowMemoryLogicalAddressQueueInUse;// Offset=0x248 Size=0x1
    struct _HALP_EMERGENCY_LA_QUEUE_ENTRY LowMemoryLogicalAddressQueueEntry;// Offset=0x250 Size=0x18
    enum _HALP_DMA_ADAPTER_ALLOCATION_STATE AllocationState;// Offset=0x268 Size=0x4
    unsigned long ScatterGatherBufferLength;// Offset=0x26c Size=0x4
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;// Offset=0x270 Size=0x10
};
