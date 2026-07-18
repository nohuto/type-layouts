enum _RTLP_HP_LOCK_TYPE
{
    HeapLockPaged=0,
    HeapLockNonPaged=1,
    HeapLockTypeMax=2
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
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

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_79// Size=0x10 (Id=79)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=80)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_79 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_VS_DELAY_FREE_CONTEXT// Size=0x10 (Id=408)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=222)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _anonymous_363// Size=0x4 (Id=363)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=364)
{
    struct _anonymous_363 Flags;// Offset=0x0 Size=0x4
};

struct _HEAP_VS_CONTEXT// Size=0xc0 (Id=273)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    enum _RTLP_HP_LOCK_TYPE LockType;// Offset=0x8 Size=0x4
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x20 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x30 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x38 Size=0x8
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;// Offset=0x40 Size=0x10
    void * BackendCtx;// Offset=0x80 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x88 Size=0x28
    struct _RTL_HP_VS_CONFIG Config;// Offset=0xb0 Size=0x4
    unsigned long Flags;// Offset=0xb4 Size=0x4
};
