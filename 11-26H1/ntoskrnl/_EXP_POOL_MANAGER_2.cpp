struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EXP_POOL_LIST// Size=0x18 (Id=1839)
{
    struct _LIST_ENTRY Head;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _EXP_POOL_WEAK_REF// Size=0x8 (Id=1462)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _EXP_POOL_MANAGER// Size=0x88 (Id=974)
{
    union EXP_POOL_MANAGER_VOLATILE_FLAGS VolatileFlags;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK PoolListLock;// Offset=0x8 Size=0x8
    struct _EXP_POOL_LIST Pools[2];// Offset=0x10 Size=0x30
    struct _EX_PUSH_LOCK ConfigLock;// Offset=0x40 Size=0x8
    unsigned long long Cookie;// Offset=0x48 Size=0x8
    struct _WORK_QUEUE_ITEM RebalanceWorkItem;// Offset=0x50 Size=0x20
    struct _EXP_POOL_WEAK_REF MaintenanceHints[3];// Offset=0x70 Size=0x18
};
