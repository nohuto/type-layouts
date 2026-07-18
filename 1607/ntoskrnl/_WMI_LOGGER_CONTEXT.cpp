struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _ETW_BUFFER_QUEUE// Size=0x10 (Id=476)
{
    struct _SINGLE_LIST_ENTRY * QueueTail;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY QueueEntry;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_FAST_REF// Size=0x8 (Id=91)
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

struct _UNICODE_STRING// Size=0x10 (Id=192)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
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

struct _GUID// Size=0x10 (Id=198)
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

struct _ETW_REF_CLOCK// Size=0x10 (Id=892)
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

struct _DISPATCHER_HEADER// Size=0x18 (Id=681)
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

struct _KEVENT// Size=0x18 (Id=64)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1125)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KDPC// Size=0x40 (Id=157)
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

struct _KMUTANT// Size=0x38 (Id=914)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY MutantListEntry;// Offset=0x18 Size=0x10
    struct _KTHREAD * OwnerThread;// Offset=0x28 Size=0x8
    unsigned char Abandoned;// Offset=0x30 Size=0x1
    unsigned char ApcDisable;// Offset=0x31 Size=0x1
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
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

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=662)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};

struct _LUID// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _TOKEN_SOURCE// Size=0x10 (Id=896)
{
    char SourceName[8];// Offset=0x0 Size=0x8
    struct _LUID SourceIdentifier;// Offset=0x8 Size=0x8
};

struct _TOKEN_CONTROL// Size=0x28 (Id=1205)
{
    struct _LUID TokenId;// Offset=0x0 Size=0x8
    struct _LUID AuthenticationId;// Offset=0x8 Size=0x8
    struct _LUID ModifiedId;// Offset=0x10 Size=0x8
    struct _TOKEN_SOURCE TokenSource;// Offset=0x18 Size=0x10
};

struct _SECURITY_CLIENT_CONTEXT// Size=0x48 (Id=735)
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x0 Size=0xc
    void * ClientToken;// Offset=0x10 Size=0x8
    unsigned char DirectlyAccessClientToken;// Offset=0x18 Size=0x1
    unsigned char DirectAccessEffectiveOnly;// Offset=0x19 Size=0x1
    unsigned char ServerIsRemote;// Offset=0x1a Size=0x1
    struct _TOKEN_CONTROL ClientTokenControl;// Offset=0x1c Size=0x28
};

struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _DISALLOWED_GUIDS// Size=0x10 (Id=879)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    struct _GUID * Guids;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _WMI_LOGGER_CONTEXT// Size=0x440 (Id=484)
{
    unsigned long LoggerId;// Offset=0x0 Size=0x4
    unsigned long BufferSize;// Offset=0x4 Size=0x4
    unsigned long MaximumEventSize;// Offset=0x8 Size=0x4
    unsigned long LoggerMode;// Offset=0xc Size=0x4
    long AcceptNewEvents;// Offset=0x10 Size=0x4
    unsigned long EventMarker[2];// Offset=0x14 Size=0x8
    unsigned long ErrorMarker;// Offset=0x1c Size=0x4
    unsigned long SizeMask;// Offset=0x20 Size=0x4
    long long  ( * GetCpuClock)();// Offset=0x28 Size=0x8
    struct _ETHREAD * LoggerThread;// Offset=0x30 Size=0x8
    long LoggerStatus;// Offset=0x38 Size=0x4
    unsigned long FailureReason;// Offset=0x3c Size=0x4
    struct _ETW_BUFFER_QUEUE BufferQueue;// Offset=0x40 Size=0x10
    struct _ETW_BUFFER_QUEUE OverflowQueue;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY GlobalList;// Offset=0x60 Size=0x10
    struct _LIST_ENTRY ProviderBinaryList;// Offset=0x70 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _WMI_BUFFER_HEADER * BatchedBufferList;// Offset=0x80 Size=0x8
        struct _EX_FAST_REF CurrentBuffer;// Offset=0x80 Size=0x8
    };
    struct _UNICODE_STRING LoggerName;// Offset=0x88 Size=0x10
    struct _UNICODE_STRING LogFileName;// Offset=0x98 Size=0x10
    struct _UNICODE_STRING LogFilePattern;// Offset=0xa8 Size=0x10
    struct _UNICODE_STRING NewLogFileName;// Offset=0xb8 Size=0x10
    unsigned long ClockType;// Offset=0xc8 Size=0x4
    unsigned long LastFlushedBuffer;// Offset=0xcc Size=0x4
    unsigned long FlushTimer;// Offset=0xd0 Size=0x4
    unsigned long FlushThreshold;// Offset=0xd4 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0xd8 Size=0x8
    unsigned long MinimumBuffers;// Offset=0xe0 Size=0x4
    long BuffersAvailable;// Offset=0xe4 Size=0x4
    long NumberOfBuffers;// Offset=0xe8 Size=0x4
    unsigned long MaximumBuffers;// Offset=0xec Size=0x4
    unsigned long EventsLost;// Offset=0xf0 Size=0x4
    long PeakBuffersCount;// Offset=0xf4 Size=0x4
    unsigned long BuffersWritten;// Offset=0xf8 Size=0x4
    unsigned long LogBuffersLost;// Offset=0xfc Size=0x4
    unsigned long RealTimeBuffersDelivered;// Offset=0x100 Size=0x4
    unsigned long RealTimeBuffersLost;// Offset=0x104 Size=0x4
    long * SequencePtr;// Offset=0x108 Size=0x8
    unsigned long LocalSequence;// Offset=0x110 Size=0x4
    struct _GUID InstanceGuid;// Offset=0x114 Size=0x10
    unsigned long MaximumFileSize;// Offset=0x124 Size=0x4
    long FileCounter;// Offset=0x128 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x12c Size=0x4
    struct _ETW_REF_CLOCK ReferenceTime;// Offset=0x130 Size=0x10
    long CollectionOn;// Offset=0x140 Size=0x4
    unsigned long ProviderInfoSize;// Offset=0x144 Size=0x4
    struct _LIST_ENTRY Consumers;// Offset=0x148 Size=0x10
    unsigned long NumConsumers;// Offset=0x158 Size=0x4
    struct _ETW_REALTIME_CONSUMER * TransitionConsumer;// Offset=0x160 Size=0x8
    void * RealtimeLogfileHandle;// Offset=0x168 Size=0x8
    struct _UNICODE_STRING RealtimeLogfileName;// Offset=0x170 Size=0x10
    union _LARGE_INTEGER RealtimeWriteOffset;// Offset=0x180 Size=0x8
    union _LARGE_INTEGER RealtimeReadOffset;// Offset=0x188 Size=0x8
    union _LARGE_INTEGER RealtimeLogfileSize;// Offset=0x190 Size=0x8
    unsigned long long RealtimeLogfileUsage;// Offset=0x198 Size=0x8
    unsigned long long RealtimeMaximumFileSize;// Offset=0x1a0 Size=0x8
    unsigned long RealtimeBuffersSaved;// Offset=0x1a8 Size=0x4
    struct _ETW_REF_CLOCK RealtimeReferenceTime;// Offset=0x1b0 Size=0x10
    enum _ETW_RT_EVENT_LOSS NewRTEventsLost;// Offset=0x1c0 Size=0x4
    struct _KEVENT LoggerEvent;// Offset=0x1c8 Size=0x18
    struct _KEVENT FlushEvent;// Offset=0x1e0 Size=0x18
    struct _KTIMER FlushTimeOutTimer;// Offset=0x1f8 Size=0x40
    struct _KDPC LoggerDpc;// Offset=0x238 Size=0x40
    struct _KMUTANT LoggerMutex;// Offset=0x278 Size=0x38
    struct _EX_PUSH_LOCK LoggerLock;// Offset=0x2b0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long BufferListSpinLock;// Offset=0x2b8 Size=0x8
        struct _EX_PUSH_LOCK BufferListPushLock;// Offset=0x2b8 Size=0x8
    };
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;// Offset=0x2c0 Size=0x48
    struct _TOKEN_ACCESS_INFORMATION * TokenAccessInformation;// Offset=0x308 Size=0x8
    struct _EX_FAST_REF SecurityDescriptor;// Offset=0x310 Size=0x8
    union _LARGE_INTEGER StartTime;// Offset=0x318 Size=0x8
    void * LogFileHandle;// Offset=0x320 Size=0x8
    long long BufferSequenceNumber;// Offset=0x328 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x330 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Persistent:1;// Offset=0x330 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AutoLogger:1;// Offset=0x330 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long FsReady:1;// Offset=0x330 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long RealTime:1;// Offset=0x330 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Wow:1;// Offset=0x330 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long KernelTrace:1;// Offset=0x330 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long NoMoreEnable:1;// Offset=0x330 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long StackTracing:1;// Offset=0x330 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ErrorLogged:1;// Offset=0x330 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RealtimeLoggerContextFreed:1;// Offset=0x330 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long PebsTracing:1;// Offset=0x330 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long PmcCounters:1;// Offset=0x330 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long PageAlignBuffers:1;// Offset=0x330 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long StackLookasideListAllocated:1;// Offset=0x330 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long SecurityTrace:1;// Offset=0x330 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long SpareFlags1:1;// Offset=0x330 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long SystemLoggerIndex:8;// Offset=0x330 Size=0x4 BitOffset=0x10 BitSize=0x8
            unsigned long StackCaching:1;// Offset=0x330 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long SpareFlags2:7;// Offset=0x330 Size=0x4 BitOffset=0x19 BitSize=0x7
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long RequestFlag;// Offset=0x334 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DbgRequestNewFile:1;// Offset=0x334 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DbgRequestUpdateFile:1;// Offset=0x334 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DbgRequestFlush:1;// Offset=0x334 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DbgRequestDisableRealtime:1;// Offset=0x334 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DbgRequestDisconnectConsumer:1;// Offset=0x334 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DbgRequestConnectConsumer:1;// Offset=0x334 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long DbgRequestNotifyConsumer:1;// Offset=0x334 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long DbgRequestUpdateHeader:1;// Offset=0x334 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long DbgRequestDeferredFlush:1;// Offset=0x334 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long DbgRequestDeferredFlushTimer:1;// Offset=0x334 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long DbgRequestFlushTimer:1;// Offset=0x334 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long DbgRequestUpdateDebugger:1;// Offset=0x334 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long DbgSpareRequestFlags:20;// Offset=0x334 Size=0x4 BitOffset=0xc BitSize=0x14
        };
    };
    struct _RTL_BITMAP HookIdMap;// Offset=0x338 Size=0x10
    struct _ETW_STACK_CACHE * StackCache;// Offset=0x348 Size=0x8
    struct _ETW_PMC_SUPPORT * PmcData;// Offset=0x350 Size=0x8
    struct _LIST_ENTRY WinRtProviderBinaryList;// Offset=0x358 Size=0x10
    struct _WMI_BUFFER_HEADER ** ScratchArray;// Offset=0x368 Size=0x8
    struct _DISALLOWED_GUIDS DisallowedGuids;// Offset=0x370 Size=0x10
    struct _ETW_SOFT_RESTART_CONTEXT * SoftRestartContext;// Offset=0x380 Size=0x8
    struct _ETW_SILODRIVERSTATE * SiloState;// Offset=0x388 Size=0x8
    struct _WORK_QUEUE_ITEM CompressionWorkItem;// Offset=0x390 Size=0x20
    long CompressionWorkItemState;// Offset=0x3b0 Size=0x4
    struct _EX_PUSH_LOCK CompressionLock;// Offset=0x3b8 Size=0x8
    struct _WMI_BUFFER_HEADER * CompressionTarget;// Offset=0x3c0 Size=0x8
    void * CompressionWorkspace;// Offset=0x3c8 Size=0x8
    long CompressionOn;// Offset=0x3d0 Size=0x4
    unsigned long CompressionRatioGuess;// Offset=0x3d4 Size=0x4
    unsigned long PartialBufferCompressionLevel;// Offset=0x3d8 Size=0x4
    enum ETW_COMPRESSION_RESUMPTION_MODE CompressionResumptionMode;// Offset=0x3dc Size=0x4
    struct _SINGLE_LIST_ENTRY PlaceholderList;// Offset=0x3e0 Size=0x8
    struct _KDPC CompressionDpc;// Offset=0x3e8 Size=0x40
    union _LARGE_INTEGER LastBufferSwitchTime;// Offset=0x428 Size=0x8
    union _LARGE_INTEGER BufferWriteDuration;// Offset=0x430 Size=0x8
    union _LARGE_INTEGER BufferCompressDuration;// Offset=0x438 Size=0x8
};
