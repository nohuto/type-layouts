struct _RTL_SRWLOCK// Size=0x8 (Id=218)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _RTL_RB_TREE// Size=0x10 (Id=34)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=209)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _HEAP_VS_CONTEXT// Size=0x68 (Id=219)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x18 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x28 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x30 Size=0x8
    void * BackendCtx;// Offset=0x38 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x40 Size=0x28
};
