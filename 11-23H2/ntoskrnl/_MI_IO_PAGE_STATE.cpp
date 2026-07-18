struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
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

struct _MI_IO_CACHE_STATS// Size=0x10 (Id=2185)
{
    unsigned long UnmappedCacheFlush;// Offset=0x0 Size=0x4
    unsigned long UnmappedCacheConflict;// Offset=0x4 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x8 Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0xc Size=0x4
};

struct _MI_IO_PAGE_STATE// Size=0xc0 (Id=2086)
{
    struct _RTL_AVL_TREE IoPfnRoot[2];// Offset=0x0 Size=0x10
    unsigned long long UnmappedNodeCount[2];// Offset=0x10 Size=0x10
    unsigned long long UnmappedHugeIoSpaceNodeCount;// Offset=0x20 Size=0x8
    unsigned long long UnmappedNodeCountMaximum;// Offset=0x40 Size=0x8
    unsigned long long TotalNodeCount[2];// Offset=0x48 Size=0x10
    struct _RTL_AVL_TREE InvariantIoSpace;// Offset=0x58 Size=0x8
    long IoPfnPruneLock;// Offset=0x60 Size=0x4
    unsigned long long ResumePageForDeleteScans[2];// Offset=0x68 Size=0x10
    struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;// Offset=0x78 Size=0x20
    struct _MI_IO_CACHE_STATS IoCacheStats;// Offset=0x98 Size=0x10
};
