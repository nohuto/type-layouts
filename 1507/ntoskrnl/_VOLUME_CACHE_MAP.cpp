struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DIRTY_PAGE_STATISTICS// Size=0x18 (Id=842)
{
    unsigned long long DirtyPages;// Offset=0x0 Size=0x8
    unsigned long long DirtyPagesLastScan;// Offset=0x8 Size=0x8
    unsigned long DirtyPagesScheduledLastScan;// Offset=0x10 Size=0x4
};

struct _DIRTY_PAGE_THRESHOLDS// Size=0x38 (Id=683)
{
    unsigned long long DirtyPageThreshold;// Offset=0x0 Size=0x8
    unsigned long long DirtyPageThresholdTop;// Offset=0x8 Size=0x8
    unsigned long long DirtyPageThresholdBottom;// Offset=0x10 Size=0x8
    unsigned long DirtyPageTarget;// Offset=0x18 Size=0x4
    unsigned long long AggregateAvailablePages;// Offset=0x20 Size=0x8
    unsigned long long AggregateDirtyPages;// Offset=0x28 Size=0x8
    unsigned long AvailableHistory;// Offset=0x30 Size=0x4
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LOG_HANDLE_CONTEXT// Size=0x98 (Id=367)
{
    void * LogHandle;// Offset=0x0 Size=0x8
    void  ( * FlushToLsnRoutine)(void * ,union _LARGE_INTEGER );// Offset=0x8 Size=0x8
    void  ( * QueryLogHandleInfoRoutine)(void * ,unsigned short * );// Offset=0x10 Size=0x8
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;// Offset=0x18 Size=0x18
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;// Offset=0x30 Size=0x38
    unsigned long AdditionalPagesToWrite;// Offset=0x68 Size=0x4
    unsigned long CcLWScanDPThreshold;// Offset=0x6c Size=0x4
    union _LARGE_INTEGER LargestLsnForCurrentLWScan;// Offset=0x70 Size=0x8
    struct _FILE_OBJECT * RelatedFileObject;// Offset=0x78 Size=0x8
    unsigned long long LargestLsnFileObjectKey;// Offset=0x80 Size=0x8
    union _LARGE_INTEGER LastLWTimeStamp;// Offset=0x88 Size=0x8
    unsigned long Flags;// Offset=0x90 Size=0x4
};

struct _VOLUME_CACHE_MAP// Size=0xd0 (Id=354)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteCode;// Offset=0x2 Size=0x2
    unsigned long UseCount;// Offset=0x4 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY VolumeCacheMapLinks;// Offset=0x10 Size=0x10
    unsigned long long DirtyPages;// Offset=0x20 Size=0x8
    struct _LOG_HANDLE_CONTEXT LogHandleContext;// Offset=0x28 Size=0x98
    unsigned long Flags;// Offset=0xc0 Size=0x4
    unsigned long PagesQueuedToDisk;// Offset=0xc4 Size=0x4
    unsigned long LoggedPagesQueuedToDisk;// Offset=0xc8 Size=0x4
};
