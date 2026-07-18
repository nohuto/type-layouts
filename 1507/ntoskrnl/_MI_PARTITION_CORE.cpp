struct _MI_PARTITION_FLAGS// Size=0x4 (Id=902)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ObjectInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_878// Size=0x4 (Id=878)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MI_PARTITION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_PARTITION_STATISTICS// Size=0x50 (Id=967)
{
    unsigned long DeleteYield;// Offset=0x0 Size=0x4
    unsigned long DeleteBad;// Offset=0x4 Size=0x4
    unsigned long DeleteTrulyBad;// Offset=0x8 Size=0x4
    unsigned long DeleteLargePage;// Offset=0xc Size=0x4
    unsigned long DeleteLargePageRetry;// Offset=0x10 Size=0x4
    unsigned long DeleteZeroFree;// Offset=0x14 Size=0x4
    unsigned long DeleteTransition;// Offset=0x18 Size=0x4
    unsigned long DeleteStandbyReferenced;// Offset=0x1c Size=0x4
    unsigned long DeleteStandbyRelinkFailed;// Offset=0x20 Size=0x4
    unsigned long DeleteStandbySharedPagefile;// Offset=0x24 Size=0x4
    unsigned long DeleteStandbySharedFile;// Offset=0x28 Size=0x4
    unsigned long DeleteModifiedReferenced;// Offset=0x2c Size=0x4
    unsigned long DeleteModified;// Offset=0x30 Size=0x4
    unsigned long DeleteModifiedNoWrite;// Offset=0x34 Size=0x4
    unsigned long DeleteModifiedSharedPagefile;// Offset=0x38 Size=0x4
    unsigned long DeleteModifiedSharedFile;// Offset=0x3c Size=0x4
    unsigned long DeleteActiveSharedPagefile1;// Offset=0x40 Size=0x4
    unsigned long DeleteActiveSharedPagefile2;// Offset=0x44 Size=0x4
    unsigned long DeleteActiveSharedFile;// Offset=0x48 Size=0x4
    unsigned long DeleteWriteDelay;// Offset=0x4c Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=489)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=59)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=76)
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

struct _MI_PARTITION_CORE// Size=0x168 (Id=879)
{
    unsigned short PartitionId;// Offset=0x0 Size=0x2
    union _unnamed_878 u;// Offset=0x4 Size=0x4
    unsigned long long ReferenceCount;// Offset=0x8 Size=0x8
    struct _MI_PARTITION * ParentPartition;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
    struct _MI_NODE_INFORMATION * NodeInformation;// Offset=0x28 Size=0x8
    struct _MDL * MdlPhysicalMemoryBlock;// Offset=0x30 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryNodeRuns;// Offset=0x38 Size=0x8
    struct _MI_PARTITION_STATISTICS Stats;// Offset=0x40 Size=0x50
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryRuns;// Offset=0x90 Size=0x8
    struct _KEVENT ExitEvent;// Offset=0x98 Size=0x18
    void * SystemThreadHandles[5];// Offset=0xb0 Size=0x28
    void * PartitionObject;// Offset=0xd8 Size=0x8
    void * PartitionObjectHandle;// Offset=0xe0 Size=0x8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;// Offset=0xe8 Size=0x8
    long DynamicMemoryLock;// Offset=0xf0 Size=0x4
    struct _KEVENT TemporaryMemoryEvent;// Offset=0xf8 Size=0x18
    struct _KEVENT * MemoryEvents[11];// Offset=0x110 Size=0x58
};
