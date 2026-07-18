enum _RTLP_HP_LOCK_TYPE
{
    HeapLockPaged=0,
    HeapLockNonPaged=1,
    HeapLockTypeMax=2
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

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

struct _HEAP_VS_DELAY_FREE_CONTEXT// Size=0x8 (Id=390)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x8
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x14 (Id=208)
{
    unsigned long Allocate;// Offset=0x0 Size=0x4
    unsigned long Free;// Offset=0x4 Size=0x4
    unsigned long Commit;// Offset=0x8 Size=0x4
    unsigned long Decommit;// Offset=0xc Size=0x4
    unsigned long ExtendContext;// Offset=0x10 Size=0x4
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

struct _HEAP_VS_CONTEXT// Size=0xc0 (Id=259)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    enum _RTLP_HP_LOCK_TYPE LockType;// Offset=0x4 Size=0x4
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY SubsegmentList;// Offset=0x10 Size=0x8
    unsigned long TotalCommittedUnits;// Offset=0x18 Size=0x4
    unsigned long FreeCommittedUnits;// Offset=0x1c Size=0x4
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;// Offset=0x40 Size=0x8
    void * BackendCtx;// Offset=0x80 Size=0x4
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x84 Size=0x14
    struct _RTL_HP_VS_CONFIG Config;// Offset=0x98 Size=0x4
    unsigned long Flags;// Offset=0x9c Size=0x4
};
