enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser=0,
    HeapAddressKernel=1,
    HeapAddressSession=2,
    HeapAddressSecure=3,
    HeapAddressTypeMax=4
};

struct _RTL_CSPARSE_BITMAP// Size=0x40 (Id=914)
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

struct _RTL_SPARSE_ARRAY// Size=0x50 (Id=916)
{
    unsigned long long ElementCount;// Offset=0x0 Size=0x8
    unsigned long ElementSizeShift;// Offset=0x8 Size=0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x10 Size=0x40
};

struct _HEAP_VAMGR_VASPACE// Size=0x860 (Id=920)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    union // Size=0x50 (Id=0)
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x10 Size=0x50
        unsigned char VaRangeArrayBuffer[2128];// Offset=0x10 Size=0x850
    };
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

struct _HEAP_VAMGR_ALLOCATOR// Size=0x30 (Id=917)
{
    unsigned long long TreeLock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeRanges;// Offset=0x8 Size=0x10
    struct _HEAP_VAMGR_VASPACE * VaSpace;// Offset=0x18 Size=0x8
    void * ContextHandle;// Offset=0x20 Size=0x8
    unsigned short ChunksPerRegion;// Offset=0x28 Size=0x2
    unsigned short RefCount;// Offset=0x2a Size=0x2
    unsigned char AllocatorIndex;// Offset=0x2c Size=0x1
    unsigned char NumaNode;// Offset=0x2d Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LockType:1;// Offset=0x2e Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemoryType:3;// Offset=0x2e Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char ConstrainedVA:1;// Offset=0x2e Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char AllowFreeHead:1;// Offset=0x2e Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Spare0:2;// Offset=0x2e Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Spare1;// Offset=0x2f Size=0x1
};

struct _HEAP_VAMGR_CTX// Size=0x3840 (Id=1704)
{
    struct _HEAP_VAMGR_VASPACE VaSpace;// Offset=0x0 Size=0x860
    unsigned long long AllocatorLock;// Offset=0x860 Size=0x8
    unsigned long DefaultRegionSize;// Offset=0x868 Size=0x4
    unsigned long AllocatorCount;// Offset=0x86c Size=0x4
    struct _HEAP_VAMGR_ALLOCATOR Allocators[255];// Offset=0x870 Size=0x2fd0
};
