struct _RTL_CSPARSE_BITMAP// Size=0x40 (Id=725)
{
    unsigned long long * CommitBitmap;// Offset=0x0 Size=0x8
    unsigned long long * UserBitmap;// Offset=0x8 Size=0x8
    unsigned long long BitCount;// Offset=0x10 Size=0x8
    unsigned long long BitmapLock;// Offset=0x18 Size=0x8
    unsigned long long DecommitPageIndex;// Offset=0x20 Size=0x8
    unsigned long long RtlpCSparseBitmapWakeLock;// Offset=0x28 Size=0x8
    unsigned char LockType;// Offset=0x30 Size=0x1
    unsigned char AddressSpace;// Offset=0x31 Size=0x1
    unsigned char MemType;// Offset=0x32 Size=0x1
    unsigned char AllocAlignment;// Offset=0x33 Size=0x1
    unsigned long CommitDirectoryMaxSize;// Offset=0x34 Size=0x4
    unsigned long long CommitDirectory[1];// Offset=0x38 Size=0x8
};

struct _RTLP_HP_ALLOC_TRACKER// Size=0x50 (Id=734)
{
    unsigned long long BaseAddress;// Offset=0x0 Size=0x8
    union // Size=0x40 (Id=0)
    {
        struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;// Offset=0x8 Size=0x40
        unsigned char AllocTrackerBitmapBuffer[72];// Offset=0x8 Size=0x48
    };
};

enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser=0,
    HeapAddressKernel=1,
    HeapAddressSession=2,
    HeapAddressSecureKernel=3,
    HeapAddressTypeMax=4
};

struct _RTL_SPARSE_ARRAY// Size=0x50 (Id=727)
{
    unsigned long long ElementCount;// Offset=0x0 Size=0x8
    unsigned long ElementSizeShift;// Offset=0x8 Size=0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x10 Size=0x40
};

struct _HEAP_VAMGR_VASPACE// Size=0x860 (Id=730)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    union // Size=0x50 (Id=0)
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x10 Size=0x50
        unsigned char VaRangeArrayBuffer[2128];// Offset=0x10 Size=0x850
    };
};

struct _RTL_RB_TREE// Size=0x10 (Id=118)
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

struct _HEAP_VAMGR_ALLOCATOR// Size=0x30 (Id=728)
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

struct _HEAP_VAMGR_CTX// Size=0x3840 (Id=1336)
{
    struct _HEAP_VAMGR_VASPACE VaSpace;// Offset=0x0 Size=0x860
    unsigned long long AllocatorLock;// Offset=0x860 Size=0x8
    unsigned long AllocatorCount;// Offset=0x868 Size=0x4
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];// Offset=0x870 Size=0x2fd0
};

union _RTL_RUN_ONCE// Size=0x8 (Id=1026)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTLP_HP_METADATA_HEAP_CTX// Size=0x10 (Id=1356)
{
    struct _SEGMENT_HEAP * Heap;// Offset=0x0 Size=0x8
    union _RTL_RUN_ONCE InitOnce;// Offset=0x8 Size=0x8
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=1211)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _anonymous_1029// Size=0x4 (Id=1029)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=1030)
{
    struct _anonymous_1029 Flags;// Offset=0x0 Size=0x4
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x8 (Id=1497)
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0x4
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0x4 Size=0x4
};

struct _RTLP_HP_HEAP_MANAGER// Size=0x38d0 (Id=733)
{
    struct _RTLP_HP_HEAP_GLOBALS * Globals;// Offset=0x0 Size=0x8
    struct _RTLP_HP_ALLOC_TRACKER AllocTracker;// Offset=0x8 Size=0x50
    struct _HEAP_VAMGR_CTX VaMgr;// Offset=0x58 Size=0x3840
    struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];// Offset=0x3898 Size=0x30
    struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;// Offset=0x38c8 Size=0x8
};

struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RTL_LOOKASIDE// Size=0x40 (Id=763)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
    unsigned short Depth;// Offset=0x10 Size=0x2
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    unsigned long AllocateMisses;// Offset=0x18 Size=0x4
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    unsigned long FreeMisses;// Offset=0x20 Size=0x4
    unsigned long LastTotalAllocates;// Offset=0x24 Size=0x4
    unsigned long LastAllocateMisses;// Offset=0x28 Size=0x4
    unsigned long LastTotalFrees;// Offset=0x2c Size=0x4
};

struct _RTL_DYNAMIC_LOOKASIDE// Size=0x1040 (Id=762)
{
    unsigned long long EnabledBucketBitmap;// Offset=0x0 Size=0x8
    unsigned long BucketCount;// Offset=0x8 Size=0x4
    unsigned long ActiveBucketCount;// Offset=0xc Size=0x4
    struct _RTL_LOOKASIDE Buckets[64];// Offset=0x40 Size=0x1000
};

struct _EX_HEAP_POOL_NODE// Size=0x20c0 (Id=1544)
{
    struct _SEGMENT_HEAP * Heaps[4];// Offset=0x0 Size=0x20
    struct _RTL_DYNAMIC_LOOKASIDE Lookasides[2];// Offset=0x40 Size=0x2080
};

struct _EX_POOL_HEAP_MANAGER_STATE// Size=0x86940 (Id=1330)
{
    struct _RTLP_HP_HEAP_MANAGER HeapManager;// Offset=0x0 Size=0x38d0
    unsigned long NumberOfPools;// Offset=0x38d0 Size=0x4
    struct _EX_HEAP_POOL_NODE PoolNode[64];// Offset=0x3900 Size=0x83000
    struct _SEGMENT_HEAP * SpecialHeaps[4];// Offset=0x86900 Size=0x20
};
