struct _unnamed_60// Size=0x10 (Id=60)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=61)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_60 HeaderX64;// Offset=0x0 Size=0x10
};

struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=36)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=35)
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

struct _MMPAGING_FILE// Size=0x100 (Id=226)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    unsigned long long MaximumSize;// Offset=0x8 Size=0x8
    unsigned long long MinimumSize;// Offset=0x10 Size=0x8
    unsigned long long FreeSpace;// Offset=0x18 Size=0x8
    unsigned long long PeakUsage;// Offset=0x20 Size=0x8
    unsigned long long HighestPage;// Offset=0x28 Size=0x8
    unsigned long long FreeReservationSpace;// Offset=0x30 Size=0x8
    unsigned long long LargestReserveCluster;// Offset=0x38 Size=0x8
    struct _FILE_OBJECT * File;// Offset=0x40 Size=0x8
    struct _MMMOD_WRITER_MDL_ENTRY * Entry[2];// Offset=0x48 Size=0x10
    union _SLIST_HEADER PfnsToFree;// Offset=0x60 Size=0x10
    struct _UNICODE_STRING PageFileName;// Offset=0x70 Size=0x10
    struct _MI_PAGING_FILE_SPACE_BITMAPS * Bitmaps;// Offset=0x80 Size=0x8
    unsigned long AllocationBitmapHint;// Offset=0x88 Size=0x4
    unsigned long ReservationBitmapHint;// Offset=0x8c Size=0x4
    unsigned long LargestNonReservedClusterSize;// Offset=0x90 Size=0x4
    unsigned long RefreshClusterSize;// Offset=0x94 Size=0x4
    unsigned long LastRefreshClusterSize;// Offset=0x98 Size=0x4
    unsigned long ReservedClusterSizeAggregate;// Offset=0x9c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ToBeEvictedCount;// Offset=0xa0 Size=0x4
        unsigned long HybridPriority;// Offset=0xa0 Size=0x4
    };
    struct // Size=0x4 (Id=0)
    {
        unsigned short PageFileNumber:4;// Offset=0xa4 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short WsSwapPagefile:1;// Offset=0xa4 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short NoReservations:1;// Offset=0xa4 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short VirtualStorePagefile:1;// Offset=0xa4 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short SwapSupported:1;// Offset=0xa4 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short NodeInserted:1;// Offset=0xa4 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short StackNotified:1;// Offset=0xa4 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short Spare0:5;// Offset=0xa4 Size=0x2 BitOffset=0xa BitSize=0x5
        unsigned char AdriftMdls:1;// Offset=0xa6 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Spare1:7;// Offset=0xa6 Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char Spare2:8;// Offset=0xa7 Size=0x1 BitOffset=0x0 BitSize=0x8
    };
    unsigned long PageHashPages;// Offset=0xa8 Size=0x4
    unsigned long PageHashPagesPeak;// Offset=0xac Size=0x4
    unsigned long * PageHash;// Offset=0xb0 Size=0x8
    void * FileHandle;// Offset=0xb8 Size=0x8
    unsigned long long Lock;// Offset=0xc0 Size=0x8
    struct _ETHREAD * LockOwner;// Offset=0xc8 Size=0x8
    struct _RTL_AVL_TREE FlowThroughReadRoot;// Offset=0xd0 Size=0x8
    struct _MI_PARTITION * Partition;// Offset=0xd8 Size=0x8
    struct _RTL_BALANCED_NODE FileObjectNode;// Offset=0xe0 Size=0x18
};
