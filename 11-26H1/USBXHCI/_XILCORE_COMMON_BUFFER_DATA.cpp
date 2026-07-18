struct _SPIN_LOCK// Size=0x10 (Id=1041)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char IsInitialized;// Offset=0x8 Size=0x1
    unsigned char OldIrql;// Offset=0x9 Size=0x1
};

struct _XIL_COMMON_BUFFER_POLICY// Size=0x10 (Id=955)
{
    unsigned long InitialCount;// Offset=0x0 Size=0x4
    unsigned long PreallocationThreshold;// Offset=0x4 Size=0x4
    unsigned long PreallocationCount;// Offset=0x8 Size=0x4
    unsigned long ReclamationThreshold;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _XILCORE_COMMON_BUFFER_SEGMENTER// Size=0x40 (Id=928)
{
    unsigned long SegmentSize;// Offset=0x0 Size=0x4
    unsigned long SegmentsPerPage;// Offset=0x4 Size=0x4
    struct _XIL_COMMON_BUFFER_POLICY Policy;// Offset=0x8 Size=0x10
    unsigned long NumberOfListEntries;// Offset=0x18 Size=0x4
    unsigned long AvailableListEntries;// Offset=0x1c Size=0x4
    struct _LIST_ENTRY List;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY SegmentHeaderList;// Offset=0x30 Size=0x10
};

struct _XILCORECOMMON_BUFFER_COUNTER// Size=0x10 (Id=480)
{
    unsigned long PagesTotal;// Offset=0x0 Size=0x4
    unsigned long PagesInUse;// Offset=0x4 Size=0x4
    unsigned long AllocationCount;// Offset=0x8 Size=0x4
    unsigned long FreeCount;// Offset=0xc Size=0x4
};

struct _XILCORE_COMMON_BUFFER_DATA// Size=0xd8 (Id=479)
{
    void * CommonBufferHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct _SPIN_LOCK CommonBufferLock;// Offset=0x10 Size=0x10
    struct _XILCORE_COMMON_BUFFER_SEGMENTER Segmenter[2];// Offset=0x20 Size=0x80
    struct _LIST_ENTRY BufferDataTrackingList;// Offset=0xa0 Size=0x10
    unsigned long PendingFreePageCount;// Offset=0xb0 Size=0x4
    struct _LIST_ENTRY RebalanceResourcesList;// Offset=0xb8 Size=0x10
    struct _XILCORECOMMON_BUFFER_COUNTER Counter;// Offset=0xc8 Size=0x10
};
