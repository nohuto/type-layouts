struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CC_FLUSH_PACKET// Size=0x110 (Id=1150)
{
    struct _CC_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _PRIVATE_VOLUME_CACHEMAP * PrivateVolumeCacheMap;// Offset=0x8 Size=0x8
    struct _SHARED_CACHE_MAP * SharedCacheMap;// Offset=0x10 Size=0x8
    struct _SECTION_OBJECT_POINTERS * SectionObjectPointer;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER TargetOffset;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER NextFileOffset;// Offset=0x28 Size=0x8
    unsigned long NextLength;// Offset=0x30 Size=0x4
    unsigned long BytesWritten;// Offset=0x34 Size=0x4
    unsigned long MmFlushFlags;// Offset=0x38 Size=0x4
    unsigned long HotSpot;// Offset=0x3c Size=0x4
    unsigned long VerifyRequired;// Offset=0x40 Size=0x4
    struct _KEVENT * FlushEvent;// Offset=0x48 Size=0x8
    union _LARGE_INTEGER FlushLargestLsn;// Offset=0x50 Size=0x8
    union _LARGE_INTEGER * LargestLsn;// Offset=0x58 Size=0x8
    union _LARGE_INTEGER * CallersFileOffset;// Offset=0x60 Size=0x8
    unsigned long CallersLength;// Offset=0x68 Size=0x4
    unsigned char MarkWritethrough;// Offset=0x6c Size=0x1
    struct _IO_STATUS_BLOCK * CallersIoStatus;// Offset=0x70 Size=0x8
    struct _BCB * FirstBcb;// Offset=0x78 Size=0x8
    long FirstFailureStatus;// Offset=0x80 Size=0x4
    unsigned char IsLazyWriter;// Offset=0x84 Size=0x1
    unsigned char FastLazyWrite;// Offset=0x85 Size=0x1
    unsigned char ForceFullFlush;// Offset=0x86 Size=0x1
    unsigned char PerformedFlushForMemMapped;// Offset=0x87 Size=0x1
    unsigned char TeardownFlagBeforeFlush;// Offset=0x88 Size=0x1
    unsigned char ShouldRetryTeardown;// Offset=0x89 Size=0x1
    unsigned char FlushForImageSection;// Offset=0x8a Size=0x1
    unsigned char ForceSynchronousLazyWrite;// Offset=0x8b Size=0x1
    unsigned long AcquireForLazyWriteOutFlags;// Offset=0x8c Size=0x4
    unsigned char FlushDontTrustHints;// Offset=0x90 Size=0x1
    union _LARGE_INTEGER StartTick;// Offset=0x98 Size=0x8
    union _LARGE_INTEGER EndTick;// Offset=0xa0 Size=0x8
    struct _FSRTL_COMMON_FCB_HEADER * FsContext;// Offset=0xa8 Size=0x8
    struct _WORK_QUEUE_ENTRY * WorkEntry;// Offset=0xb0 Size=0x8
    struct _LIST_ENTRY * DeferredWritesList;// Offset=0xb8 Size=0x8
    unsigned char * CoalescingState;// Offset=0xc0 Size=0x8
    unsigned char DoSinglePassFlush;// Offset=0xc8 Size=0x1
    unsigned char RecordedSinglePassStartOffset;// Offset=0xc9 Size=0x1
    union _LARGE_INTEGER SinglePassStartOffset;// Offset=0xd0 Size=0x8
    unsigned long long DirtyPagesAtStart;// Offset=0xd8 Size=0x8
    unsigned long long TotalBytesWritten;// Offset=0xe0 Size=0x8
    union _LARGE_INTEGER LwFlushStart;// Offset=0xe8 Size=0x8
    union _LARGE_INTEGER LwFlushEnd;// Offset=0xf0 Size=0x8
    unsigned long TotalPagesFlushed;// Offset=0xf8 Size=0x4
    unsigned long PagesToWrite;// Offset=0xfc Size=0x4
    unsigned long RequeueToHeadCount;// Offset=0x100 Size=0x4
    struct _WORK_QUEUE_ENTRY * WorkQueueEntry;// Offset=0x108 Size=0x8
};
