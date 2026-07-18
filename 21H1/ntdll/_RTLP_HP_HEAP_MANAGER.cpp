struct _RTL_CSPARSE_BITMAP// Size=0x24 (Id=210)
{
    unsigned long * CommitBitmap;// Offset=0x0 Size=0x4
    unsigned long * UserBitmap;// Offset=0x4 Size=0x4
    unsigned long BitCount;// Offset=0x8 Size=0x4
    unsigned long BitmapLock;// Offset=0xc Size=0x4
    unsigned long DecommitPageIndex;// Offset=0x10 Size=0x4
    unsigned long RtlpCSparseBitmapWakeLock;// Offset=0x14 Size=0x4
    unsigned char LockType;// Offset=0x18 Size=0x1
    unsigned char AddressSpace;// Offset=0x19 Size=0x1
    unsigned char MemType;// Offset=0x1a Size=0x1
    unsigned char AllocAlignment;// Offset=0x1b Size=0x1
    unsigned long CommitDirectoryMaxSize;// Offset=0x1c Size=0x4
    unsigned long CommitDirectory[1];// Offset=0x20 Size=0x4
};

struct _RTLP_HP_ALLOC_TRACKER// Size=0x2c (Id=219)
{
    unsigned long BaseAddress;// Offset=0x0 Size=0x4
    union // Size=0x24 (Id=0)
    {
        struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;// Offset=0x4 Size=0x24
        unsigned char AllocTrackerBitmapBuffer[40];// Offset=0x4 Size=0x28
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

struct _RTL_SPARSE_ARRAY// Size=0x2c (Id=212)
{
    unsigned long ElementCount;// Offset=0x0 Size=0x4
    unsigned long ElementSizeShift;// Offset=0x4 Size=0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x8 Size=0x24
};

struct _HEAP_VAMGR_VASPACE// Size=0x34 (Id=215)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long BaseAddress;// Offset=0x4 Size=0x4
    union // Size=0x2c (Id=0)
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x8 Size=0x2c
        unsigned char VaRangeArrayBuffer[44];// Offset=0x8 Size=0x2c
    };
};

struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

struct _HEAP_VAMGR_ALLOCATOR// Size=0x1c (Id=213)
{
    unsigned long TreeLock;// Offset=0x0 Size=0x4
    struct _RTL_RB_TREE FreeRanges;// Offset=0x4 Size=0x8
    struct _HEAP_VAMGR_VASPACE * VaSpace;// Offset=0xc Size=0x4
    void * PartitionHandle;// Offset=0x10 Size=0x4
    unsigned short ChunksPerRegion;// Offset=0x14 Size=0x2
    unsigned short RefCount;// Offset=0x16 Size=0x2
    unsigned char AllocatorIndex;// Offset=0x18 Size=0x1
    unsigned char NumaNode;// Offset=0x19 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LockType:1;// Offset=0x1a Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemoryType:2;// Offset=0x1a Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ConstrainedVA:1;// Offset=0x1a Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AllowFreeHead:1;// Offset=0x1a Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Spare0:3;// Offset=0x1a Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Spare1;// Offset=0x1b Size=0x1
};

struct _HEAP_VAMGR_CTX// Size=0x1c20 (Id=459)
{
    struct _HEAP_VAMGR_VASPACE VaSpace;// Offset=0x0 Size=0x34
    unsigned long AllocatorLock;// Offset=0x34 Size=0x4
    unsigned long AllocatorCount;// Offset=0x38 Size=0x4
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];// Offset=0x3c Size=0x1be4
};

union _RTL_RUN_ONCE// Size=0x4 (Id=343)
{
    void * Ptr;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTLP_HP_METADATA_HEAP_CTX// Size=0x8 (Id=473)
{
    struct _SEGMENT_HEAP * Heap;// Offset=0x0 Size=0x4
    union _RTL_RUN_ONCE InitOnce;// Offset=0x4 Size=0x4
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=414)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _anonymous_345// Size=0x4 (Id=345)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=346)
{
    struct _anonymous_345 Flags;// Offset=0x0 Size=0x4
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x8 (Id=535)
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0x4
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0x4 Size=0x4
};

struct _RTLP_HP_HEAP_MANAGER// Size=0x1c70 (Id=218)
{
    struct _RTLP_HP_HEAP_GLOBALS * Globals;// Offset=0x0 Size=0x4
    struct _RTLP_HP_ALLOC_TRACKER AllocTracker;// Offset=0x4 Size=0x2c
    struct _HEAP_VAMGR_CTX VaMgr;// Offset=0x30 Size=0x1c20
    struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];// Offset=0x1c50 Size=0x18
    struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;// Offset=0x1c68 Size=0x8
};
