struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=1910)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    unsigned long long MaximumSize;// Offset=0x10 Size=0x8
    unsigned long long Hint;// Offset=0x18 Size=0x8
    void * BaseVa;// Offset=0x20 Size=0x8
    unsigned long long SizeTopDown;// Offset=0x28 Size=0x8
    unsigned long long HintTopDown;// Offset=0x30 Size=0x8
    void * BaseVaTopDown;// Offset=0x38 Size=0x8
    long SpinLock;// Offset=0x40 Size=0x4
};

struct _MI_PAGE_CHAIN_HEAD// Size=0x18 (Id=2253)
{
    struct _MMPFN * Head;// Offset=0x0 Size=0x8
    struct _MMPFN * Tail;// Offset=0x8 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x10 Size=0x8
};

enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached=0,
    MiCached=1,
    MiWriteCombined=2,
    MiNotMapped=3
};

struct _MI_ZERO_COST_COUNTS// Size=0x10 (Id=2488)
{
    unsigned long long NativeSum;// Offset=0x0 Size=0x8
    unsigned long long AlternateSum;// Offset=0x8 Size=0x8
};

struct _MI_SYSTEM_NODE_NONPAGED_POOL// Size=0x180 (Id=2445)
{
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;// Offset=0x0 Size=0x48
    long NonPagedPoolSpinLock;// Offset=0x48 Size=0x4
    struct _MI_PAGE_CHAIN_HEAD CachedNonPagedPool;// Offset=0x50 Size=0x18
    void * NonPagedPoolFirstVa;// Offset=0x68 Size=0x8
    void * NonPagedPoolLastVa;// Offset=0x70 Size=0x8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];// Offset=0x78 Size=0x40
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[3][2][2];// Offset=0xb8 Size=0xc0
    struct _MI_SYSTEM_NODE_INFORMATION * SystemNodeInformation;// Offset=0x178 Size=0x8
};
