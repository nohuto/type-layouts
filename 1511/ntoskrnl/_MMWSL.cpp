struct _MI_ACTIVE_WSLE_LISTHEAD// Size=0x10 (Id=516)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_VAD_ALLOCATION_CELL// Size=0x28 (Id=1091)
{
    struct _RTL_BITMAP AllocationBitMap;// Offset=0x0 Size=0x10
    unsigned long BitMapHint;// Offset=0x10 Size=0x4
    unsigned long LastAllocationSize;// Offset=0x14 Size=0x4
    unsigned long LastAllocationSizeHint;// Offset=0x18 Size=0x4
    unsigned long LowestBottomUpVadBit;// Offset=0x1c Size=0x4
    void * LowestBottomUpAllocationAddress;// Offset=0x20 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_CFG_BITMAP_INFO// Size=0x18 (Id=1190)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long RegionSize;// Offset=0x8 Size=0x8
    struct _MMVAD * BitmapVad;// Offset=0x10 Size=0x8
};

struct _MI_USER_VA_INFO// Size=0x158 (Id=758)
{
    unsigned long NumberOfCommittedPageTables;// Offset=0x0 Size=0x4
    void * HighestTopDownAllocationAddress;// Offset=0x8 Size=0x8
    struct _MI_VAD_ALLOCATION_CELL VadCell[2];// Offset=0x10 Size=0x50
    unsigned long VadBitMapCommitment;// Offset=0x60 Size=0x4
    unsigned long MaximumLastVadBit;// Offset=0x64 Size=0x4
    long VadsBeingDeleted;// Offset=0x68 Size=0x4
    long NumberOfDebugEnclaves;// Offset=0x6c Size=0x4
    unsigned long long PhysicalMappingCount;// Offset=0x70 Size=0x8
    struct _KEVENT * LastVadDeletionEvent;// Offset=0x78 Size=0x8
    struct _LIST_ENTRY SubVadRanges[3];// Offset=0x80 Size=0x30
    unsigned char NumaAware;// Offset=0xb0 Size=0x1
    unsigned char SpareFlags[2];// Offset=0xb1 Size=0x2
    unsigned char CheckingShadow;// Offset=0xb3 Size=0x1
    unsigned long long CloneNestingLevel;// Offset=0xb8 Size=0x8
    unsigned long long PrivateFixupVadCount;// Offset=0xc0 Size=0x8
    struct _MI_CFG_BITMAP_INFO CfgBitMap[2];// Offset=0xc8 Size=0x30
    unsigned long CommittedPageTableBufferForTopLevel[8];// Offset=0xf8 Size=0x20
    struct _RTL_BITMAP CommittedPageTableBitmaps[3];// Offset=0x118 Size=0x30
    unsigned long PageTableBitmapPages[3];// Offset=0x148 Size=0xc
};

struct _MMWSL// Size=0x350 (Id=223)
{
    unsigned long long FirstFree;// Offset=0x0 Size=0x8
    unsigned long long FirstDynamic;// Offset=0x8 Size=0x8
    unsigned long long LastEntry;// Offset=0x10 Size=0x8
    unsigned long long NextSlot;// Offset=0x18 Size=0x8
    unsigned long long LastInitializedWsle;// Offset=0x20 Size=0x8
    unsigned long long NextAgingSlot;// Offset=0x28 Size=0x8
    unsigned long long NextAccessClearingSlot;// Offset=0x30 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x38 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x3c Size=0x4
    unsigned long WsleSize;// Offset=0x40 Size=0x4
    unsigned long long NonDirectCount;// Offset=0x48 Size=0x8
    void * LowestPagableAddress;// Offset=0x50 Size=0x8
    struct _MMWSLE_NONDIRECT_HASH * NonDirectHash;// Offset=0x58 Size=0x8
    struct _MMWSLE_HASH * HashTableStart;// Offset=0x60 Size=0x8
    struct _MMWSLE_HASH * HighestPermittedHashAddress;// Offset=0x68 Size=0x8
    unsigned long long ActiveWsleCounts[16];// Offset=0x70 Size=0x80
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];// Offset=0xf0 Size=0x100
    struct _MMWSLE * Wsle;// Offset=0x1f0 Size=0x8
    struct _MI_USER_VA_INFO UserVaInfo;// Offset=0x1f8 Size=0x158
};
