struct _MI_ACTIVE_WSLE_LISTHEAD// Size=0x10 (Id=502)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MI_CFG_BITMAP_INFO// Size=0x18 (Id=1181)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long RegionSize;// Offset=0x8 Size=0x8
    struct _MMVAD * BitmapVad;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_USER_VA_INFO// Size=0x108 (Id=749)
{
    unsigned long NumberOfCommittedPageTables;// Offset=0x0 Size=0x4
    unsigned long VadBitMapHint;// Offset=0x4 Size=0x4
    unsigned long LastAllocationSizeHint;// Offset=0x8 Size=0x4
    unsigned long LastAllocationSize;// Offset=0xc Size=0x4
    unsigned long LowestBottomUpVadBit;// Offset=0x10 Size=0x4
    unsigned long VadBitMapSize;// Offset=0x14 Size=0x4
    unsigned long VadBitMapCommitment;// Offset=0x18 Size=0x4
    unsigned long MaximumLastVadBit;// Offset=0x1c Size=0x4
    long VadsBeingDeleted;// Offset=0x20 Size=0x4
    unsigned long long PhysicalMappingCount;// Offset=0x28 Size=0x8
    struct _KEVENT * LastVadDeletionEvent;// Offset=0x30 Size=0x8
    unsigned long * VadBitBuffer;// Offset=0x38 Size=0x8
    void * LowestBottomUpAllocationAddress;// Offset=0x40 Size=0x8
    void * HighestTopDownAllocationAddress;// Offset=0x48 Size=0x8
    void * FreeTebHint;// Offset=0x50 Size=0x8
    unsigned char NumaAware;// Offset=0x58 Size=0x1
    unsigned char SpareFlags[2];// Offset=0x59 Size=0x2
    unsigned char CheckingShadow;// Offset=0x5b Size=0x1
    unsigned long long CloneNestingLevel;// Offset=0x60 Size=0x8
    unsigned long long PrivateFixupVadCount;// Offset=0x68 Size=0x8
    struct _MI_CFG_BITMAP_INFO CfgBitMap[2];// Offset=0x70 Size=0x30
    unsigned long CommittedPageTableBufferForTopLevel[8];// Offset=0xa0 Size=0x20
    struct _RTL_BITMAP CommittedPageTableBitmaps[3];// Offset=0xc0 Size=0x30
    unsigned long PageTableBitmapPages[3];// Offset=0xf0 Size=0xc
    void * FreeUmsTebHint;// Offset=0x100 Size=0x8
};

struct _MMWSL// Size=0x300 (Id=211)
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
    struct _MI_USER_VA_INFO UserVaInfo;// Offset=0x1f8 Size=0x108
};
