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

struct _CACHED_KSTACK_LIST// Size=0x20 (Id=1935)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    long MinimumFree;// Offset=0x10 Size=0x4
    unsigned long Misses;// Offset=0x14 Size=0x4
    unsigned long MissesLast;// Offset=0x18 Size=0x4
    unsigned long AllStacksInUse;// Offset=0x1c Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=989)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=1572)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    unsigned long long MaximumSize;// Offset=0x10 Size=0x8
    unsigned long long Hint;// Offset=0x18 Size=0x8
    void * BaseVa;// Offset=0x20 Size=0x8
    unsigned long long SizeTopDown;// Offset=0x28 Size=0x8
    unsigned long long HintTopDown;// Offset=0x30 Size=0x8
    void * BaseVaTopDown;// Offset=0x38 Size=0x8
    unsigned long long SpinLock;// Offset=0x40 Size=0x8
};

struct _MI_SYSTEM_NODE_INFORMATION// Size=0xb0 (Id=1863)
{
    struct _CACHED_KSTACK_LIST CachedKernelStacks[2];// Offset=0x0 Size=0x40
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;// Offset=0x40 Size=0x48
    unsigned long long CachedNonPagedPoolCount;// Offset=0x88 Size=0x8
    unsigned long long NonPagedPoolSpinLock;// Offset=0x90 Size=0x8
    struct _MMPFN * CachedNonPagedPool;// Offset=0x98 Size=0x8
    void * NonPagedPoolFirstVa;// Offset=0xa0 Size=0x8
    void * NonPagedPoolLastVa;// Offset=0xa8 Size=0x8
};
