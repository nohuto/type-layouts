struct _DIRTY_PAGE_STATISTICS// Size=0x18 (Id=588)
{
    unsigned long long DirtyPages;// Offset=0x0 Size=0x8
    unsigned long long DirtyPagesLastScan;// Offset=0x8 Size=0x8
    unsigned long DirtyPagesScheduledLastScan;// Offset=0x10 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CC_EXTERNAL_CACHE_INFO// Size=0x30 (Id=392)
{
    void  ( * Callback)(void * ,unsigned long long ,unsigned long );// Offset=0x0 Size=0x8
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;// Offset=0x8 Size=0x18
    struct _LIST_ENTRY Links;// Offset=0x20 Size=0x10
};
