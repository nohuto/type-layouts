struct _RTL_CSPARSE_BITMAP// Size=0x40 (Id=434)
{
    unsigned long long CommitDirectory;// Offset=0x0 Size=0x8
    unsigned long long * CommitBitmap;// Offset=0x8 Size=0x8
    unsigned long long * UserBitmap;// Offset=0x10 Size=0x8
    long long BitCount;// Offset=0x18 Size=0x8
    unsigned long long BitmapLock;// Offset=0x20 Size=0x8
    unsigned long long DecommitPageIndex;// Offset=0x28 Size=0x8
    unsigned long long RtlpCSparseBitmapWakeLock;// Offset=0x30 Size=0x8
    unsigned char LockType;// Offset=0x38 Size=0x1
    unsigned char AddressSpace;// Offset=0x39 Size=0x1
    unsigned char MemType;// Offset=0x3a Size=0x1
    unsigned char AllocAlignment;// Offset=0x3b Size=0x1
};

struct _RTLP_HP_ALLOC_TRACKER// Size=0x48 (Id=443)
{
    struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;// Offset=0x0 Size=0x40
    unsigned long long BaseAddress;// Offset=0x40 Size=0x8
};

enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser=0,
    HeapAddressKernel=1,
    HeapAddressSession=2,
    HeapAddressTypeMax=3
};

struct _RTL_SPARSE_ARRAY// Size=0x50 (Id=436)
{
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x0 Size=0x40
    unsigned long long ElementCount;// Offset=0x40 Size=0x8
    unsigned long ElementSizeShift;// Offset=0x48 Size=0x4
};

struct _HEAP_VAMGR_VASPACE// Size=0x60 (Id=439)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x10 Size=0x50
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
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

struct _HEAP_VAMGR_ALLOCATOR// Size=0x30 (Id=437)
{
    unsigned long long TreeLock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeRanges;// Offset=0x8 Size=0x10
    struct _HEAP_VAMGR_VASPACE * VaSpace;// Offset=0x18 Size=0x8
    void * PartitionHandle;// Offset=0x20 Size=0x8
    unsigned short ChunksPerRegion;// Offset=0x28 Size=0x2
    unsigned short RefCount;// Offset=0x2a Size=0x2
    unsigned char AllocatorIndex;// Offset=0x2c Size=0x1
    unsigned char NumaNode;// Offset=0x2d Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LockType:1;// Offset=0x2e Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemoryType:2;// Offset=0x2e Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ConstrainedVA:1;// Offset=0x2e Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AllowFreeHead:1;// Offset=0x2e Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Spare0:3;// Offset=0x2e Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Spare1;// Offset=0x2f Size=0x1
};

struct _HEAP_VAMGR_CTX// Size=0x3040 (Id=1067)
{
    struct _HEAP_VAMGR_VASPACE VaSpace;// Offset=0x0 Size=0x60
    unsigned long long AllocatorLock;// Offset=0x60 Size=0x8
    unsigned long AllocatorCount;// Offset=0x68 Size=0x4
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];// Offset=0x70 Size=0x2fd0
};

union _RTL_RUN_ONCE// Size=0x8 (Id=727)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTLP_HP_METADATA_HEAP_CTX// Size=0x10 (Id=1092)
{
    struct _SEGMENT_HEAP * Heap;// Offset=0x0 Size=0x8
    union _RTL_RUN_ONCE InitOnce;// Offset=0x8 Size=0x8
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=919)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
};

struct _unnamed_730// Size=0x4 (Id=730)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=731)
{
    struct _unnamed_730 Flags;// Offset=0x0 Size=0x4
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x8 (Id=1229)
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0x4
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0x4 Size=0x4
};

struct _RTLP_HP_HEAP_MANAGER// Size=0x30c8 (Id=442)
{
    struct _RTLP_HP_HEAP_GLOBALS * Globals;// Offset=0x0 Size=0x8
    struct _RTLP_HP_ALLOC_TRACKER AllocTracker;// Offset=0x8 Size=0x48
    struct _HEAP_VAMGR_CTX VaMgr;// Offset=0x50 Size=0x3040
    struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];// Offset=0x3090 Size=0x30
    struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;// Offset=0x30c0 Size=0x8
};

struct _EX_HEAP_SESSION_STATE// Size=0x30e8 (Id=767)
{
    struct _RTLP_HP_HEAP_MANAGER HeapManager;// Offset=0x0 Size=0x30c8
    struct RTL_HP_ENV_HANDLE PagedEnv;// Offset=0x30c8 Size=0x10
    struct _SEGMENT_HEAP * PagedHeap;// Offset=0x30d8 Size=0x8
    struct _SEGMENT_HEAP * SpecialPoolHeap;// Offset=0x30e0 Size=0x8
};
