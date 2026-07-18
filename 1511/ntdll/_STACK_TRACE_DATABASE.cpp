struct _RTL_SRWLOCK// Size=0x8 (Id=218)
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

struct _RTL_STACK_DATABASE_LOCK// Size=0x8 (Id=536)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
};

struct _unnamed_60// Size=0x10 (Id=60)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=61)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_60 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RTL_STD_LIST_HEAD// Size=0x10 (Id=533)
{
    struct _RTL_STD_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
    struct _RTL_STACK_DATABASE_LOCK Lock;// Offset=0x8 Size=0x8
};

struct _STACK_TRACE_DATABASE// Size=0x2f0 (Id=490)
{
    union // Size=0x68 (Id=0)
    {
        char Reserved[104];// Offset=0x0 Size=0x68
        struct _RTL_STACK_DATABASE_LOCK Lock;// Offset=0x0 Size=0x8
        void * Reserved2;// Offset=0x68 Size=0x8
    };
    unsigned long long PeakHashCollisionListLength;// Offset=0x70 Size=0x8
    void * LowerMemoryStart;// Offset=0x78 Size=0x8
    unsigned char PreCommitted;// Offset=0x80 Size=0x1
    unsigned char DumpInProgress;// Offset=0x81 Size=0x1
    void * CommitBase;// Offset=0x88 Size=0x8
    void * CurrentLowerCommitLimit;// Offset=0x90 Size=0x8
    void * CurrentUpperCommitLimit;// Offset=0x98 Size=0x8
    char * NextFreeLowerMemory;// Offset=0xa0 Size=0x8
    char * NextFreeUpperMemory;// Offset=0xa8 Size=0x8
    unsigned long NumberOfEntriesLookedUp;// Offset=0xb0 Size=0x4
    unsigned long NumberOfEntriesAdded;// Offset=0xb4 Size=0x4
    struct _RTL_STACK_TRACE_ENTRY ** EntryIndexArray;// Offset=0xb8 Size=0x8
    unsigned long NumberOfEntriesAllocated;// Offset=0xc0 Size=0x4
    unsigned long NumberOfEntriesAvailable;// Offset=0xc4 Size=0x4
    unsigned long NumberOfAllocationFailures;// Offset=0xc8 Size=0x4
    union _SLIST_HEADER FreeLists[32];// Offset=0xd0 Size=0x200
    unsigned long NumberOfBuckets;// Offset=0x2d0 Size=0x4
    struct _RTL_STD_LIST_HEAD Buckets[1];// Offset=0x2d8 Size=0x10
};
