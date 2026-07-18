struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=33)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=65)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _GENERAL_LOOKASIDE// Size=0x48 (Id=69)
{
    union // Size=0x8 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x8
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x4
        unsigned short Depth;// Offset=0x8 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0xa Size=0x2
    unsigned long TotalAllocates;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x10 Size=0x4
        unsigned long AllocateHits;// Offset=0x10 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x18 Size=0x4
        unsigned long FreeHits;// Offset=0x18 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x1c Size=0x4
    unsigned long Tag;// Offset=0x20 Size=0x4
    unsigned long Size;// Offset=0x24 Size=0x4
    union // Size=0x4 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x28 Size=0x4
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long ,unsigned long );// Offset=0x28 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x2c Size=0x4
        void  ( * Free)(void * );// Offset=0x2c Size=0x4
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x30 Size=0x8
    unsigned long LastTotalAllocates;// Offset=0x38 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x3c Size=0x4
        unsigned long LastAllocateHits;// Offset=0x3c Size=0x4
    };
    unsigned long Future[2];// Offset=0x40 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x10 (Id=262)
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
            unsigned char Index:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Processor:5;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x5
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
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
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
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char Instrumented:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x8
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER * );
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER & );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER * );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER & );
};

struct _KEVENT// Size=0x10 (Id=63)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

struct _FAST_MUTEX// Size=0x20 (Id=61)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x4 Size=0x4
    unsigned long Contention;// Offset=0x8 Size=0x4
    struct _KEVENT Event;// Offset=0xc Size=0x10
    unsigned long OldIrql;// Offset=0x1c Size=0x4
    void _FAST_MUTEX(struct _FAST_MUTEX * );
    void _FAST_MUTEX(struct _FAST_MUTEX & );
    struct _FAST_MUTEX & operator=(struct _FAST_MUTEX * );
    struct _FAST_MUTEX & operator=(struct _FAST_MUTEX & );
};

struct _PAGED_LOOKASIDE_LIST// Size=0x68 (Id=70)
{
    struct _GENERAL_LOOKASIDE L;// Offset=0x0 Size=0x48
    struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;// Offset=0x48 Size=0x20
    void _PAGED_LOOKASIDE_LIST(struct _PAGED_LOOKASIDE_LIST * );
    void _PAGED_LOOKASIDE_LIST(struct _PAGED_LOOKASIDE_LIST & );
    struct _PAGED_LOOKASIDE_LIST & operator=(struct _PAGED_LOOKASIDE_LIST * );
    struct _PAGED_LOOKASIDE_LIST & operator=(struct _PAGED_LOOKASIDE_LIST & );
};
