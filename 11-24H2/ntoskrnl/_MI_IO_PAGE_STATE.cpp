struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_IO_PAGE_STATE_CELL// Size=0x40 (Id=2454)
{
    struct _RTL_AVL_TREE PfnRoot;// Offset=0x0 Size=0x8
    unsigned long long UnmappedNodeCount;// Offset=0x8 Size=0x8
    unsigned long long UnmappedHugeIoSpaceNodeCount;// Offset=0x10 Size=0x8
    unsigned long long TotalNodeCount;// Offset=0x18 Size=0x8
    unsigned long long ResumePageForDeleteScans;// Offset=0x20 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_IO_CACHE_STATS// Size=0x14 (Id=2379)
{
    unsigned long UnmappedCacheFlush;// Offset=0x0 Size=0x4
    unsigned long UnmappedCacheConflict;// Offset=0x4 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x8 Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0xc Size=0x4
    unsigned long ExclusionReferenceConflict;// Offset=0x10 Size=0x4
};

struct _MI_IO_PAGE_STATE// Size=0x100 (Id=2279)
{
    struct _MI_IO_PAGE_STATE_CELL TypeCell[2];// Offset=0x0 Size=0x80
    struct _RTL_AVL_TREE InvariantIoSpace;// Offset=0x80 Size=0x8
    struct _RTL_AVL_TREE ExclusionSpace;// Offset=0x88 Size=0x8
    long IoPfnPruneLock;// Offset=0x90 Size=0x4
    struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;// Offset=0x98 Size=0x20
    struct _MI_IO_CACHE_STATS IoCacheStats;// Offset=0xb8 Size=0x14
};
