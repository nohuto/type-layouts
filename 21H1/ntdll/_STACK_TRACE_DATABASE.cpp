struct _RTL_SRWLOCK// Size=0x4 (Id=468)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _RTL_STACK_DATABASE_LOCK// Size=0x4 (Id=453)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

struct _RTL_STD_LIST_HEAD// Size=0x8 (Id=590)
{
    struct _RTL_STD_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
    struct _RTL_STACK_DATABASE_LOCK Lock;// Offset=0x4 Size=0x4
};

struct _STACK_TRACE_DATABASE// Size=0x188 (Id=359)
{
    union // Size=0x38 (Id=0)
    {
        char Reserved[56];// Offset=0x0 Size=0x38
        struct _RTL_STACK_DATABASE_LOCK Lock;// Offset=0x0 Size=0x4
        void * Reserved2;// Offset=0x38 Size=0x4
    };
    unsigned long PeakHashCollisionListLength;// Offset=0x3c Size=0x4
    void * LowerMemoryStart;// Offset=0x40 Size=0x4
    unsigned char PreCommitted;// Offset=0x44 Size=0x1
    unsigned char DumpInProgress;// Offset=0x45 Size=0x1
    void * CommitBase;// Offset=0x48 Size=0x4
    void * CurrentLowerCommitLimit;// Offset=0x4c Size=0x4
    void * CurrentUpperCommitLimit;// Offset=0x50 Size=0x4
    char * NextFreeLowerMemory;// Offset=0x54 Size=0x4
    char * NextFreeUpperMemory;// Offset=0x58 Size=0x4
    unsigned long NumberOfEntriesLookedUp;// Offset=0x5c Size=0x4
    unsigned long NumberOfEntriesAdded;// Offset=0x60 Size=0x4
    struct _RTL_STACK_TRACE_ENTRY ** EntryIndexArray;// Offset=0x64 Size=0x4
    unsigned long NumberOfEntriesAllocated;// Offset=0x68 Size=0x4
    unsigned long NumberOfEntriesAvailable;// Offset=0x6c Size=0x4
    unsigned long NumberOfAllocationFailures;// Offset=0x70 Size=0x4
    union _SLIST_HEADER FreeLists[32];// Offset=0x78 Size=0x100
    unsigned long NumberOfBuckets;// Offset=0x178 Size=0x4
    struct _RTL_STD_LIST_HEAD Buckets[1];// Offset=0x17c Size=0x8
};
