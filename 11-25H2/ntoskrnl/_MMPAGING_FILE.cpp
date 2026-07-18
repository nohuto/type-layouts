struct _unnamed_533// Size=0x10 (Id=533)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=534)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_533 HeaderX64;// Offset=0x0 Size=0x10
};

struct _UNICODE_STRING// Size=0x10 (Id=537)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _MMPAGING_FILE// Size=0x100 (Id=1866)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long MaximumSize;// Offset=0x4 Size=0x4
    unsigned long MinimumSize;// Offset=0x8 Size=0x4
    unsigned long FreeSpace;// Offset=0xc Size=0x4
    unsigned long PeakUsage;// Offset=0x10 Size=0x4
    unsigned long FreeReservationSpace;// Offset=0x14 Size=0x4
    struct _FILE_OBJECT * File;// Offset=0x18 Size=0x8
    struct _MMMOD_WRITER_MDL_ENTRY ** Entry;// Offset=0x20 Size=0x8
    unsigned long NumberOfModWriterEntries;// Offset=0x28 Size=0x4
    union _SLIST_HEADER PfnsToFree;// Offset=0x30 Size=0x10
    struct _UNICODE_STRING PageFileName;// Offset=0x40 Size=0x10
    struct _MI_PAGING_FILE_SPACE_BITMAPS * Bitmaps;// Offset=0x50 Size=0x8
    unsigned long AllocationBitmapHint;// Offset=0x58 Size=0x4
    unsigned long LargestAllocationCluster;// Offset=0x5c Size=0x4
    unsigned long RefreshAllocationCluster;// Offset=0x60 Size=0x4
    unsigned long LastRefreshAllocationCluster;// Offset=0x64 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ReservedClusterSizeAggregate;// Offset=0x68 Size=0x4
        unsigned long ToBeEvictedHint;// Offset=0x68 Size=0x4
    };
    unsigned long MaximumRunLengthInBitmaps;// Offset=0x6c Size=0x4
    struct _RTL_RB_TREE BitmapsCacheLengthTree;// Offset=0x70 Size=0x10
    struct _RTL_RB_TREE BitmapsCacheLocationTree;// Offset=0x80 Size=0x10
    struct _LIST_ENTRY BitmapsCacheFreeList;// Offset=0x90 Size=0x10
    struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY * BitmapsCacheEntries;// Offset=0xa0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long ToBeEvictedCount;// Offset=0xa8 Size=0x4
        unsigned long HybridPriority;// Offset=0xa8 Size=0x4
    };
    struct // Size=0x4 (Id=0)
    {
        unsigned short PageFileNumber:4;// Offset=0xac Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short WsSwapPagefile:1;// Offset=0xac Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short NoReservations:1;// Offset=0xac Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short VirtualStorePagefile:1;// Offset=0xac Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short SwapSupported:1;// Offset=0xac Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short NodeInserted:1;// Offset=0xac Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short StackNotified:1;// Offset=0xac Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short BackedBySCM:1;// Offset=0xac Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short SpecialPurposeMemory:1;// Offset=0xac Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short Spare0:3;// Offset=0xac Size=0x2 BitOffset=0xc BitSize=0x3
        unsigned char AdriftMdls:1;// Offset=0xae Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Spare1:7;// Offset=0xae Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char IgnoreReservations:1;// Offset=0xaf Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Spare2:7;// Offset=0xaf Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned long PageHashPages;// Offset=0xb0 Size=0x4
    unsigned long PageHashPagesPeak;// Offset=0xb4 Size=0x4
    struct _MI_PAGE_HASH * PageHash;// Offset=0xb8 Size=0x8
    void * FileHandle;// Offset=0xc0 Size=0x8
    long SpinLock;// Offset=0xc8 Size=0x4
    struct _RTL_AVL_TREE FlowThroughReadRoot;// Offset=0xd0 Size=0x8
    struct _MI_PARTITION * Partition;// Offset=0xd8 Size=0x8
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE FileObjectNode;// Offset=0xe0 Size=0x18
        struct _RTL_RB_TREE ExtentsTree;// Offset=0xe0 Size=0x10
    };
};
