struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_IO_CACHE_STATS// Size=0x28 (Id=1825)
{
    unsigned long long UnusedBlocks;// Offset=0x0 Size=0x8
    unsigned long ActiveCacheMatch;// Offset=0x8 Size=0x4
    unsigned long ActiveCacheOverride;// Offset=0xc Size=0x4
    unsigned long UnmappedCacheFlush;// Offset=0x10 Size=0x4
    unsigned long UnmappedCacheMatch;// Offset=0x14 Size=0x4
    unsigned long UnmappedCacheConflict;// Offset=0x18 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x1c Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0x20 Size=0x4
};

struct _MI_IO_PAGE_STATE// Size=0x68 (Id=1736)
{
    long IoPfnLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE IoPfnRoot[3];// Offset=0x8 Size=0x18
    struct _LIST_ENTRY UnusedCachedMaps;// Offset=0x20 Size=0x10
    unsigned long OldestCacheFlushTimeStamp;// Offset=0x30 Size=0x4
    struct _MI_IO_CACHE_STATS IoCacheStats;// Offset=0x38 Size=0x28
    struct _RTL_AVL_TREE InvariantIoSpace;// Offset=0x60 Size=0x8
};
