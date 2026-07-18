struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1289// Size=0x4 (Id=1289)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MissedEtwRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsBootDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_1290// Size=0x4 (Id=1290)
{
    struct _unnamed_1289 Flags;// Offset=0x0 Size=0x4
    unsigned long Whole;// Offset=0x0 Size=0x4
};

struct _unnamed_535// Size=0x10 (Id=535)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=536)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_535 HeaderX64;// Offset=0x0 Size=0x10
};

struct _VF_TARGET_VERIFIED_DRIVER_DATA// Size=0x120 (Id=1291)
{
    struct _VF_SUSPECT_DRIVER_ENTRY * SuspectDriverEntry;// Offset=0x0 Size=0x8
    void * WMICallback;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY EtwHandlesListHead;// Offset=0x10 Size=0x10
    union _unnamed_1290 u1;// Offset=0x20 Size=0x4
    unsigned long long Signature;// Offset=0x28 Size=0x8
    unsigned char SeSigningLevel;// Offset=0x30 Size=0x1
    union _SLIST_HEADER PoolPageHeaders;// Offset=0x40 Size=0x10
    union _SLIST_HEADER PoolTrackers;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY DifPluginPerDriverDataContextHead;// Offset=0x60 Size=0x10
    unsigned long CurrentPagedPoolAllocations;// Offset=0x70 Size=0x4
    unsigned long CurrentNonPagedPoolAllocations;// Offset=0x74 Size=0x4
    unsigned long PeakPagedPoolAllocations;// Offset=0x78 Size=0x4
    unsigned long PeakNonPagedPoolAllocations;// Offset=0x7c Size=0x4
    unsigned long long PagedBytes;// Offset=0x80 Size=0x8
    unsigned long long NonPagedBytes;// Offset=0x88 Size=0x8
    unsigned long long PeakPagedBytes;// Offset=0x90 Size=0x8
    unsigned long long PeakNonPagedBytes;// Offset=0x98 Size=0x8
    unsigned long RaiseIrqls;// Offset=0xa0 Size=0x4
    unsigned long AcquireSpinLocks;// Offset=0xa4 Size=0x4
    unsigned long SynchronizeExecutions;// Offset=0xa8 Size=0x4
    unsigned long AllocationsWithNoTag;// Offset=0xac Size=0x4
    unsigned long AllocationsFailed;// Offset=0xb0 Size=0x4
    unsigned long AllocationsFailedDeliberately;// Offset=0xb4 Size=0x4
    unsigned long long LockedBytes;// Offset=0xb8 Size=0x8
    unsigned long long PeakLockedBytes;// Offset=0xc0 Size=0x8
    unsigned long long MappedLockedBytes;// Offset=0xc8 Size=0x8
    unsigned long long PeakMappedLockedBytes;// Offset=0xd0 Size=0x8
    unsigned long long MappedIoSpaceBytes;// Offset=0xd8 Size=0x8
    unsigned long long PeakMappedIoSpaceBytes;// Offset=0xe0 Size=0x8
    unsigned long long PagesForMdlBytes;// Offset=0xe8 Size=0x8
    unsigned long long PeakPagesForMdlBytes;// Offset=0xf0 Size=0x8
    unsigned long long ContiguousMemoryBytes;// Offset=0xf8 Size=0x8
    unsigned long long PeakContiguousMemoryBytes;// Offset=0x100 Size=0x8
    struct _LIST_ENTRY ContiguousMemoryListHead;// Offset=0x108 Size=0x10
};
