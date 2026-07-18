struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_FAST_REF// Size=0x8 (Id=96)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=87)
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

struct _LOGGED_STREAM_CALLBACK_V1// Size=0x10 (Id=837)
{
    void * LogHandle;// Offset=0x0 Size=0x8
    void  ( * FlushToLsnRoutine)(void * ,union _LARGE_INTEGER );// Offset=0x8 Size=0x8
};

struct _LOGGED_STREAM_CALLBACK_V2// Size=0x8 (Id=1078)
{
    struct _LOG_HANDLE_CONTEXT * LogHandleContext;// Offset=0x0 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=783)
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
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
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

struct _KEVENT// Size=0x18 (Id=70)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_MUTEX// Size=0x38 (Id=68)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x8 Size=0x8
    unsigned long Contention;// Offset=0x10 Size=0x4
    struct _KEVENT Event;// Offset=0x18 Size=0x18
    unsigned long OldIrql;// Offset=0x30 Size=0x4
};

struct _PRIVATE_CACHE_MAP_FLAGS// Size=0x4 (Id=1365)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DontUse:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long ReadAheadActive:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReadAheadEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long PagePriority:3;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x3
        unsigned long PipelineReadAheads:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Available:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
    };
};

struct _PRIVATE_CACHE_MAP// Size=0x78 (Id=850)
{
    union // Size=0x2 (Id=0)
    {
        short NodeTypeCode;// Offset=0x0 Size=0x2
        struct _PRIVATE_CACHE_MAP_FLAGS Flags;// Offset=0x0 Size=0x4
    };
    unsigned long ReadAheadMask;// Offset=0x4 Size=0x4
    struct _FILE_OBJECT * FileObject;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER FileOffset1;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER BeyondLastByte1;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER FileOffset2;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER BeyondLastByte2;// Offset=0x28 Size=0x8
    unsigned long SequentialReadCount;// Offset=0x30 Size=0x4
    unsigned long ReadAheadLength;// Offset=0x34 Size=0x4
    union _LARGE_INTEGER ReadAheadOffset;// Offset=0x38 Size=0x8
    union _LARGE_INTEGER ReadAheadBeyondLastByte;// Offset=0x40 Size=0x8
    unsigned long long PrevReadAheadBeyondLastByte;// Offset=0x48 Size=0x8
    unsigned long long ReadAheadSpinLock;// Offset=0x50 Size=0x8
    unsigned long PipelinedReadAheadRequestSize;// Offset=0x58 Size=0x4
    unsigned long ReadAheadGrowth;// Offset=0x5c Size=0x4
    struct _LIST_ENTRY PrivateLinks;// Offset=0x60 Size=0x10
    void * ReadAheadWorkItem;// Offset=0x70 Size=0x8
};

struct _SHARED_CACHE_MAP// Size=0x220 (Id=409)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteSize;// Offset=0x2 Size=0x2
    unsigned long OpenCount;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER FileSize;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY BcbList;// Offset=0x10 Size=0x10
    union _LARGE_INTEGER SectionSize;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER ValidDataLength;// Offset=0x28 Size=0x8
    union _LARGE_INTEGER ValidDataGoal;// Offset=0x30 Size=0x8
    struct _VACB * InitialVacbs[4];// Offset=0x38 Size=0x20
    struct _VACB ** Vacbs;// Offset=0x58 Size=0x8
    struct _EX_FAST_REF FileObjectFastRef;// Offset=0x60 Size=0x8
    struct _EX_PUSH_LOCK VacbLock;// Offset=0x68 Size=0x8
    unsigned long DirtyPages;// Offset=0x70 Size=0x4
    struct _LIST_ENTRY LoggedStreamLinks;// Offset=0x78 Size=0x10
    struct _LIST_ENTRY SharedCacheMapLinks;// Offset=0x88 Size=0x10
    unsigned long Flags;// Offset=0x98 Size=0x4
    long Status;// Offset=0x9c Size=0x4
    struct _MBCB * Mbcb;// Offset=0xa0 Size=0x8
    void * Section;// Offset=0xa8 Size=0x8
    struct _KEVENT * CreateEvent;// Offset=0xb0 Size=0x8
    struct _KEVENT * WaitOnActiveCount;// Offset=0xb8 Size=0x8
    unsigned long PagesToWrite;// Offset=0xc0 Size=0x4
    long long BeyondLastFlush;// Offset=0xc8 Size=0x8
    struct _CACHE_MANAGER_CALLBACKS * Callbacks;// Offset=0xd0 Size=0x8
    void * LazyWriteContext;// Offset=0xd8 Size=0x8
    struct _LIST_ENTRY PrivateList;// Offset=0xe0 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _LOGGED_STREAM_CALLBACK_V1 V1;// Offset=0xf0 Size=0x10
        struct _LOGGED_STREAM_CALLBACK_V2 V2;// Offset=0xf0 Size=0x8
    };
    union _LARGE_INTEGER LargestLSN;// Offset=0x100 Size=0x8
    unsigned long DirtyPageThreshold;// Offset=0x108 Size=0x4
    unsigned long LazyWritePassCount;// Offset=0x10c Size=0x4
    struct _CACHE_UNINITIALIZE_EVENT * UninitializeEvent;// Offset=0x110 Size=0x8
    struct _FAST_MUTEX BcbLock;// Offset=0x118 Size=0x38
    union _LARGE_INTEGER LastUnmapBehindOffset;// Offset=0x150 Size=0x8
    struct _KEVENT Event;// Offset=0x158 Size=0x18
    union _LARGE_INTEGER HighWaterMappingOffset;// Offset=0x170 Size=0x8
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;// Offset=0x178 Size=0x78
    void * WriteBehindWorkQueueEntry;// Offset=0x1f0 Size=0x8
    struct _VOLUME_CACHE_MAP * VolumeCacheMap;// Offset=0x1f8 Size=0x8
    unsigned long ProcImagePathHash;// Offset=0x200 Size=0x4
    unsigned long WritesInProgress;// Offset=0x204 Size=0x4
    unsigned long AsyncReadRequestCount;// Offset=0x208 Size=0x4
    struct _CC_PARTITION * Partition;// Offset=0x210 Size=0x8
    unsigned long InternalRefCount;// Offset=0x218 Size=0x4
};
