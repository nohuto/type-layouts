struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=83)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=85)
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

struct _EPARTITION// Size=0x80 (Id=253)
{
    void * MmPartition;// Offset=0x0 Size=0x8
    void * CcPartition;// Offset=0x8 Size=0x8
    void * ExPartition;// Offset=0x10 Size=0x8
    long long HardReferenceCount;// Offset=0x18 Size=0x8
    long long OpenHandleCount;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY ActivePartitionLinks;// Offset=0x28 Size=0x10
    struct _EPARTITION * ParentPartition;// Offset=0x38 Size=0x8
    struct _WORK_QUEUE_ITEM TeardownWorkItem;// Offset=0x40 Size=0x20
    struct _EX_PUSH_LOCK TeardownLock;// Offset=0x60 Size=0x8
    struct _EPROCESS * SystemProcess;// Offset=0x68 Size=0x8
    void * SystemProcessHandle;// Offset=0x70 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long PartitionFlags;// Offset=0x78 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long PairedWithJob:1;// Offset=0x78 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
    };
    unsigned long Padding;// Offset=0x7c Size=0x4
};
