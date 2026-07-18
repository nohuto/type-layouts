struct _MI_ACTIVE_WSLE_LISTHEAD// Size=0x10 (Id=1391)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x1a0 (Id=1178)
{
    unsigned long long NextSlot;// Offset=0x0 Size=0x8
    unsigned long long NextAgingSlot;// Offset=0x8 Size=0x8
    unsigned long long NextAccessClearingSlot;// Offset=0x10 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long ActiveWsleCounts[16];// Offset=0x20 Size=0x80
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];// Offset=0xa0 Size=0x100
};

struct _MMWSL_SHARED// Size=0x60 (Id=220)
{
    unsigned long long FirstFree;// Offset=0x0 Size=0x8
    unsigned long long FirstDynamic;// Offset=0x8 Size=0x8
    unsigned long long LastEntry;// Offset=0x10 Size=0x8
    unsigned long long LastInitializedWsle;// Offset=0x18 Size=0x8
    unsigned long WsleSize;// Offset=0x20 Size=0x4
    unsigned long long NonDirectCount;// Offset=0x28 Size=0x8
    void * LowestPagableAddress;// Offset=0x30 Size=0x8
    struct _MMWSLE_NONDIRECT_HASH * NonDirectHash;// Offset=0x38 Size=0x8
    struct _MMWSLE_HASH * HashTableStart;// Offset=0x40 Size=0x8
    struct _MMWSLE_HASH * HighestPermittedHashAddress;// Offset=0x48 Size=0x8
    struct _MMWSLE * Wsle;// Offset=0x50 Size=0x8
};

struct _MMWSL_FULL// Size=0x200 (Id=1353)
{
    struct _MMWSL_INSTANCE Instance;// Offset=0x0 Size=0x1a0
    struct _MMWSL_SHARED Shared;// Offset=0x1a0 Size=0x60
};
