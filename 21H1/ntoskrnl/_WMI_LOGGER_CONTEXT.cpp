struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=838)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ETW_BUFFER_QUEUE// Size=0x10 (Id=836)
{
    struct _SINGLE_LIST_ENTRY * QueueTail;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY QueueEntry;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_FAST_REF// Size=0x8 (Id=427)
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

struct _UNICODE_STRING// Size=0x10 (Id=415)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=977)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=475)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
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

struct _ETW_REF_CLOCK// Size=0x10 (Id=1332)
{
    union _LARGE_INTEGER StartTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER StartPerfClock;// Offset=0x8 Size=0x8
};

enum _ETW_RT_EVENT_LOSS
{
    EtwRtEventNoLoss=0,
    EtwRtEventLost=1,
    EtwRtBufferLost=2,
    EtwRtBackupLost=3,
    EtwRtEventLossMax=4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=157)
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
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
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

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=414)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1606)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KDPC// Size=0x40 (Id=88)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _KMUTANT// Size=0x38 (Id=1356)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char MutantFlags;// Offset=0x30 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x31 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Spare1:7;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x7
                unsigned char Abandoned2:1;// Offset=0x30 Size=0x1 BitOffset=0x0 BitSize=0x1
            };
            unsigned char AbEnabled:1;// Offset=0x30 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Spare2:6;// Offset=0x30 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=213)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};

struct _LUID// Size=0x8 (Id=99)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _TOKEN_SOURCE// Size=0x10 (Id=1335)
{
    char SourceName[8];// Offset=0x0 Size=0x8
    struct _LUID SourceIdentifier;// Offset=0x8 Size=0x8
};

struct _TOKEN_CONTROL// Size=0x28 (Id=1687)
{
    struct _LUID TokenId;// Offset=0x0 Size=0x8
    struct _LUID AuthenticationId;// Offset=0x8 Size=0x8
    struct _LUID ModifiedId;// Offset=0x10 Size=0x8
    struct _TOKEN_SOURCE TokenSource;// Offset=0x18 Size=0x10
};

struct _SECURITY_CLIENT_CONTEXT// Size=0x48 (Id=1141)
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x0 Size=0xc
    void * ClientToken;// Offset=0x10 Size=0x8
    unsigned char DirectlyAccessClientToken;// Offset=0x18 Size=0x1
    unsigned char DirectAccessEffectiveOnly;// Offset=0x19 Size=0x1
    unsigned char ServerIsRemote;// Offset=0x1a Size=0x1
    struct _TOKEN_CONTROL ClientTokenControl;// Offset=0x1c Size=0x28
};

struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _ETW_STACK_TRACE_BLOCK// Size=0x80 (Id=1511)
{
    union _LARGE_INTEGER RelatedTimestamp;// Offset=0x0 Size=0x8
    struct _ETHREAD * Thread;// Offset=0x8 Size=0x8
    struct _KDPC StackWalkDpc;// Offset=0x10 Size=0x40
    union _SLIST_HEADER ApcListHead;// Offset=0x50 Size=0x10
    struct _ETW_APC_ENTRY * ApcEntry;// Offset=0x60 Size=0x8
    unsigned long ApcEntryCount;// Offset=0x68 Size=0x4
    long Flags;// Offset=0x6c Size=0x4
    long ApcCount;// Offset=0x70 Size=0x4
    long MaxApcCount;// Offset=0x74 Size=0x4
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _DISALLOWED_GUIDS// Size=0x10 (Id=1323)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    struct _GUID * Guids;// Offset=0x8 Size=0x8
};

struct _PERIODIC_CAPTURE_STATE_GUIDS// Size=0x10 (Id=1455)
{
    unsigned short ProviderCount;// Offset=0x0 Size=0x2
    struct _GUID * Providers;// Offset=0x8 Size=0x8
};

enum _ETW_PERIODIC_TIMER_STATE
{
    EtwpPeriodicTimerUnset=0,
    EtwpPeriodicTimerSet=1
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ETW_PARTITION_CONTEXT// Size=0x8 (Id=978)
{
    struct _EPARTITION * Partition;// Offset=0x0 Size=0x8
};

struct _WMI_LOGGER_CONTEXT// Size=0x550 (Id=848)
{
    unsigned long LoggerId;// Offset=0x0 Size=0x4
    unsigned long BufferSize;// Offset=0x4 Size=0x4
    unsigned long MaximumEventSize;// Offset=0x8 Size=0x4
    unsigned long LoggerMode;// Offset=0xc Size=0x4
    long AcceptNewEvents;// Offset=0x10 Size=0x4
    unsigned long EventMarker[2];// Offset=0x14 Size=0x8
    unsigned long ErrorMarker;// Offset=0x1c Size=0x4
    unsigned long SizeMask;// Offset=0x20 Size=0x4
    unsigned long long GetCpuClock;// Offset=0x28 Size=0x8
    struct _ETHREAD * LoggerThread;// Offset=0x30 Size=0x8
    long LoggerStatus;// Offset=0x38 Size=0x4
    unsigned long FailureReason;// Offset=0x3c Size=0x4
    struct _ETW_BUFFER_QUEUE BufferQueue;// Offset=0x40 Size=0x10
    struct _ETW_BUFFER_QUEUE OverflowQueue;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY GlobalList;// Offset=0x60 Size=0x10
    struct _LIST_ENTRY DebugIdTrackingList;// Offset=0x70 Size=0x10
    struct _ETW_DECODE_CONTROL_ENTRY * DecodeControlList;// Offset=0x80 Size=0x8
    unsigned long DecodeControlCount;// Offset=0x88 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _WMI_BUFFER_HEADER * BatchedBufferList;// Offset=0x90 Size=0x8
        struct _EX_FAST_REF CurrentBuffer;// Offset=0x90 Size=0x8
    };
    struct _UNICODE_STRING LoggerName;// Offset=0x98 Size=0x10
    struct _UNICODE_STRING LogFileName;// Offset=0xa8 Size=0x10
    struct _UNICODE_STRING LogFilePattern;// Offset=0xb8 Size=0x10
    struct _UNICODE_STRING NewLogFileName;// Offset=0xc8 Size=0x10
    unsigned long ClockType;// Offset=0xd8 Size=0x4
    unsigned long LastFlushedBuffer;// Offset=0xdc Size=0x4
    unsigned long FlushTimer;// Offset=0xe0 Size=0x4
    unsigned long FlushThreshold;// Offset=0xe4 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0xe8 Size=0x8
    unsigned long MinimumBuffers;// Offset=0xf0 Size=0x4
    long BuffersAvailable;// Offset=0xf4 Size=0x4
    long NumberOfBuffers;// Offset=0xf8 Size=0x4
    unsigned long MaximumBuffers;// Offset=0xfc Size=0x4
    unsigned long EventsLost;// Offset=0x100 Size=0x4
    long PeakBuffersCount;// Offset=0x104 Size=0x4
    unsigned long BuffersWritten;// Offset=0x108 Size=0x4
    unsigned long LogBuffersLost;// Offset=0x10c Size=0x4
    unsigned long RealTimeBuffersDelivered;// Offset=0x110 Size=0x4
    unsigned long RealTimeBuffersLost;// Offset=0x114 Size=0x4
    long * SequencePtr;// Offset=0x118 Size=0x8
    unsigned long LocalSequence;// Offset=0x120 Size=0x4
    struct _GUID InstanceGuid;// Offset=0x124 Size=0x10
    unsigned long MaximumFileSize;// Offset=0x134 Size=0x4
    long FileCounter;// Offset=0x138 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x13c Size=0x4
    struct _ETW_REF_CLOCK ReferenceTime;// Offset=0x140 Size=0x10
    long CollectionOn;// Offset=0x150 Size=0x4
    unsigned long ProviderInfoSize;// Offset=0x154 Size=0x4
    struct _LIST_ENTRY Consumers;// Offset=0x158 Size=0x10
    unsigned long NumConsumers;// Offset=0x168 Size=0x4
    struct _ETW_REALTIME_CONSUMER * TransitionConsumer;// Offset=0x170 Size=0x8
    void * RealtimeLogfileHandle;// Offset=0x178 Size=0x8
    struct _UNICODE_STRING RealtimeLogfileName;// Offset=0x180 Size=0x10
    union _LARGE_INTEGER RealtimeWriteOffset;// Offset=0x190 Size=0x8
    union _LARGE_INTEGER RealtimeReadOffset;// Offset=0x198 Size=0x8
    union _LARGE_INTEGER RealtimeLogfileSize;// Offset=0x1a0 Size=0x8
    unsigned long long RealtimeLogfileUsage;// Offset=0x1a8 Size=0x8
    unsigned long long RealtimeMaximumFileSize;// Offset=0x1b0 Size=0x8
    unsigned long RealtimeBuffersSaved;// Offset=0x1b8 Size=0x4
    struct _ETW_REF_CLOCK RealtimeReferenceTime;// Offset=0x1c0 Size=0x10
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;// Offset=0x1d0 Size=0x4
    struct _KEVENT LoggerEvent;// Offset=0x1d8 Size=0x18
    struct _KEVENT FlushEvent;// Offset=0x1f0 Size=0x18
    struct _KTIMER FlushTimeOutTimer;// Offset=0x208 Size=0x40
    struct _KDPC LoggerDpc;// Offset=0x248 Size=0x40
    struct _KMUTANT LoggerMutex;// Offset=0x288 Size=0x38
    struct _EX_PUSH_LOCK LoggerLock;// Offset=0x2c0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long BufferListSpinLock;// Offset=0x2c8 Size=0x8
        struct _EX_PUSH_LOCK BufferListPushLock;// Offset=0x2c8 Size=0x8
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;// Offset=0x2d0 Size=0x48
    struct _TOKEN_ACCESS_INFORMATION * TokenAccessInformation;// Offset=0x318 Size=0x8
    struct _EX_FAST_REF SecurityDescriptor;// Offset=0x320 Size=0x8
    union _LARGE_INTEGER StartTime;// Offset=0x328 Size=0x8
    void * LogFileHandle;// Offset=0x330 Size=0x8
    long long BufferSequenceNumber;// Offset=0x338 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x340 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Persistent:1;// Offset=0x340 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AutoLogger:1;// Offset=0x340 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long FsReady:1;// Offset=0x340 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long RealTime:1;// Offset=0x340 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Wow:1;// Offset=0x340 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long KernelTrace:1;// Offset=0x340 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long NoMoreEnable:1;// Offset=0x340 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long StackTracing:1;// Offset=0x340 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ErrorLogged:1;// Offset=0x340 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RealtimeLoggerContextFreed:1;// Offset=0x340 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long PebsTracing:1;// Offset=0x340 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long PmcCounters:1;// Offset=0x340 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long PageAlignBuffers:1;// Offset=0x340 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long StackLookasideListAllocated:1;// Offset=0x340 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long SecurityTrace:1;// Offset=0x340 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long LastBranchTracing:1;// Offset=0x340 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long SystemLoggerIndex:8;// Offset=0x340 Size=0x4 BitOffset=0x10 BitSize=0x8
            unsigned long StackCaching:1;// Offset=0x340 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long ProviderTracking:1;// Offset=0x340 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long ProcessorTrace:1;// Offset=0x340 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long QpcDeltaTracking:1;// Offset=0x340 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long MarkerBufferSaved:1;// Offset=0x340 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long LargeMdlPages:1;// Offset=0x340 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long ExcludeKernelStack:1;// Offset=0x340 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long SpareFlags2:1;// Offset=0x340 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long RequestFlag;// Offset=0x344 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DbgRequestNewFile:1;// Offset=0x344 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DbgRequestUpdateFile:1;// Offset=0x344 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DbgRequestFlush:1;// Offset=0x344 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DbgRequestDisableRealtime:1;// Offset=0x344 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DbgRequestDisconnectConsumer:1;// Offset=0x344 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DbgRequestConnectConsumer:1;// Offset=0x344 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DbgRequestNotifyConsumer:1;// Offset=0x344 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long DbgRequestUpdateHeader:1;// Offset=0x344 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long DbgRequestDeferredFlush:1;// Offset=0x344 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long DbgRequestDeferredFlushTimer:1;// Offset=0x344 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long DbgRequestFlushTimer:1;// Offset=0x344 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long DbgRequestUpdateDebugger:1;// Offset=0x344 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long DbgSpareRequestFlags:20;// Offset=0x344 Size=0x4 BitOffset=0xc BitSize=0x14
        };
    };
    struct _ETW_STACK_TRACE_BLOCK StackTraceBlock;// Offset=0x350 Size=0x80
    struct _RTL_BITMAP HookIdMap;// Offset=0x3d0 Size=0x10
    struct _ETW_STACK_CACHE * StackCache;// Offset=0x3e0 Size=0x8
    struct _ETW_PMC_SUPPORT * PmcData;// Offset=0x3e8 Size=0x8
    struct _ETW_LBR_SUPPORT * LbrData;// Offset=0x3f0 Size=0x8
    struct _ETW_IPT_SUPPORT * IptData;// Offset=0x3f8 Size=0x8
    struct _LIST_ENTRY BinaryTrackingList;// Offset=0x400 Size=0x10
    struct _WMI_BUFFER_HEADER ** ScratchArray;// Offset=0x410 Size=0x8
    struct _DISALLOWED_GUIDS DisallowedGuids;// Offset=0x418 Size=0x10
    long long RelativeTimerDueTime;// Offset=0x428 Size=0x8
    struct _PERIODIC_CAPTURE_STATE_GUIDS PeriodicCaptureStateGuids;// Offset=0x430 Size=0x10
    struct _EX_TIMER * PeriodicCaptureStateTimer;// Offset=0x440 Size=0x8
    enum _ETW_PERIODIC_TIMER_STATE PeriodicCaptureStateTimerState;// Offset=0x448 Size=0x4
    struct _ETW_SOFT_RESTART_CONTEXT * SoftRestartContext;// Offset=0x450 Size=0x8
    struct _ETW_SILODRIVERSTATE * SiloState;// Offset=0x458 Size=0x8
    struct _WORK_QUEUE_ITEM CompressionWorkItem;// Offset=0x460 Size=0x20
    long CompressionWorkItemState;// Offset=0x480 Size=0x4
    struct _EX_PUSH_LOCK CompressionLock;// Offset=0x488 Size=0x8
    struct _WMI_BUFFER_HEADER * CompressionTarget;// Offset=0x490 Size=0x8
    void * CompressionWorkspace;// Offset=0x498 Size=0x8
    long CompressionOn;// Offset=0x4a0 Size=0x4
    unsigned long CompressionRatioGuess;// Offset=0x4a4 Size=0x4
    unsigned long PartialBufferCompressionLevel;// Offset=0x4a8 Size=0x4
    enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;// Offset=0x4ac Size=0x4
    struct _SINGLE_LIST_ENTRY PlaceholderList;// Offset=0x4b0 Size=0x8
    struct _KDPC CompressionDpc;// Offset=0x4b8 Size=0x40
    union _LARGE_INTEGER LastBufferSwitchTime;// Offset=0x4f8 Size=0x8
    union _LARGE_INTEGER BufferWriteDuration;// Offset=0x500 Size=0x8
    union _LARGE_INTEGER BufferCompressDuration;// Offset=0x508 Size=0x8
    long long ReferenceQpcDelta;// Offset=0x510 Size=0x8
    struct _ETW_EVENT_CALLBACK_CONTEXT * CallbackContext;// Offset=0x518 Size=0x8
    union _LARGE_INTEGER * LastDroppedTime;// Offset=0x520 Size=0x8
    union _LARGE_INTEGER * FlushingLastDroppedTime;// Offset=0x528 Size=0x8
    long long FlushingSequenceNumber;// Offset=0x530 Size=0x8
    struct _ETW_PARTITION_CONTEXT PartitionContext;// Offset=0x538 Size=0x8
    struct _MDL * BufferMdl;// Offset=0x540 Size=0x8
};
