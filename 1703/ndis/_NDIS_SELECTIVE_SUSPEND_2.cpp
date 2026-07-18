struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=685)
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
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER * );
    void _DISPATCHER_HEADER(struct _DISPATCHER_HEADER & );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER * );
    struct _DISPATCHER_HEADER & operator=(struct _DISPATCHER_HEADER & );
};

union _ULARGE_INTEGER// Size=0x8 (Id=71)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12838)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        unsigned long HighPart;// Offset=0x4 Size=0x4
    };
    struct _ULARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=316)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
    void _KTIMER(struct _KTIMER * );
    void _KTIMER(struct _KTIMER & );
    struct _KTIMER & operator=(struct _KTIMER * );
    struct _KTIMER & operator=(struct _KTIMER & );
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=29)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=89)
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
    void _KDPC(struct _KDPC * );
    void _KDPC(struct _KDPC & );
    struct _KDPC & operator=(struct _KDPC * );
    struct _KDPC & operator=(struct _KDPC & );
};

struct _NDIS_TIMER// Size=0x80 (Id=456)
{
    struct _KTIMER Timer;// Offset=0x0 Size=0x40
    struct _KDPC Dpc;// Offset=0x40 Size=0x40
    void _NDIS_TIMER(struct _NDIS_TIMER * );
    void _NDIS_TIMER(struct _NDIS_TIMER & );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER * );
    struct _NDIS_TIMER & operator=(struct _NDIS_TIMER & );
};

struct _KEVENT// Size=0x18 (Id=61)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void _KEVENT(struct _KEVENT * );
    void _KEVENT(struct _KEVENT & );
    struct _KEVENT & operator=(struct _KEVENT * );
    struct _KEVENT & operator=(struct _KEVENT & );
};

struct _NDIS_WORK_ITEM// Size=0x50 (Id=465)
{
    void * Context;// Offset=0x0 Size=0x8
    void  ( * Routine)(struct _NDIS_WORK_ITEM * ,void * );// Offset=0x8 Size=0x8
    unsigned char WrapperReserved[64];// Offset=0x10 Size=0x40
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=77)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _NDIS_IRP_WORK_ITEM// Size=0x30 (Id=804)
{
    struct _WORK_QUEUE_ITEM Item;// Offset=0x0 Size=0x20
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x20 Size=0x8
    struct _IRP * Irp;// Offset=0x28 Size=0x8
};

struct _NDIS_SS_IDLE_FLAGS// Size=0x4 (Id=746)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TimerRunning:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IdleWorkItemScheduled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IdleRequestSubmitted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SuspendPowerIrpRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DeviceSuspended:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ResumePowerIrpRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long CancelWorkItemScheduled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long IdleRequestCanceled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ForceIdleTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Stopped:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long DeviceGone:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _NDIS_SS_STOP_FLAGS// Size=0x4 (Id=1051)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long QueryRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DeviceRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SurpriseRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long QueryStop:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long DeviceStop:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long SystemPower:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long NicQuiet:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PnPOp:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long NotStarted:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long MiniportFatalError:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ApplyInterfaceChange:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long MagicPacket:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long BindChanges:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _NDIS_SS_CONTROL_OPS// Size=0x4 (Id=751)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Oid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Pause:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Restart:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reset:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long CheckForHang:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _NBL_QUEUE// Size=0x10 (Id=176)
{
    struct _NET_BUFFER_LIST * First;// Offset=0x0 Size=0x8
    struct _NET_BUFFER_LIST ** Last;// Offset=0x8 Size=0x8
};

enum _NDIS_SS_STOP_REASON
{
    NdisSSReasonUnspecified=0,
    NdisSSQueryRemove=1,
    NdisSSDeviceRemove=2,
    NdisSSDeviceSurpriseRemove=3,
    NdisSSQueryStop=4,
    NdisSSDeviceStop=5,
    NdisSSSystemPower=6,
    NdisSSNicQuiet=7,
    NdisSSPnPOp=8,
    NdisSSNotStarted=9,
    NdisSSApplyInterfaceChange=11,
    NdisSSMagicPacket=12,
    NdisSSBindChanges=13,
    NdisSSStopReasonMax=15
};

enum _NDIS_SS_BUSY_REASON
{
    NdisBusyOid=33,
    NdisBusyPause=34,
    NdisBusyRestart=35,
    NdisBusyReset=36,
    NdisBusyDevicePnPEvent=37,
    NdisBusyCheckForHang=49,
    NdisBusyDirectOid=50,
    NdisBusyCancelDirectOid=51,
    NdisBusySend=52,
    NdisBusyCancelSend=53,
    NdisBusyReceiveReturn=54,
    NdisBusyWaitWake=65
};

union _NDIS_SS_RESUME_REASON// Size=0x4 (Id=1140)
{
    enum _NDIS_SS_STOP_REASON StopReason;// Offset=0x0 Size=0x4
    enum _NDIS_SS_BUSY_REASON BusyReason;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=343)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5022)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _NDIS_DEVICE_POWER_STATE
{
    NdisDeviceStateUnspecified=0,
    NdisDeviceStateD0=1,
    NdisDeviceStateD1=2,
    NdisDeviceStateD2=3,
    NdisDeviceStateD3=4,
    NdisDeviceStateMaximum=5
};

struct _NDIS_NAPS_TELEMETRY_REASON_DATA// Size=0x10 (Id=1654)
{
    unsigned short WakeCount;// Offset=0x0 Size=0x2
    unsigned short BusyCount;// Offset=0x2 Size=0x2
    union _NDIS_SS_RESUME_REASON Reason;// Offset=0x4 Size=0x4
    unsigned long long TotalTimeMs;// Offset=0x8 Size=0x8
};

struct _NDIS_NAPS_TELEMETRY_OID_DATA// Size=0xc (Id=1674)
{
    unsigned short WakeCount;// Offset=0x0 Size=0x2
    unsigned short BusyCount;// Offset=0x2 Size=0x2
    unsigned short Weight;// Offset=0x4 Size=0x2
    unsigned long Oid;// Offset=0x8 Size=0x4
};

struct _NDIS_NAPS_TELEMETRY_DATA// Size=0x390 (Id=1396)
{
    unsigned long StartingSuspendCount;// Offset=0x0 Size=0x4
    unsigned long long StartingResumeLatencyMs;// Offset=0x8 Size=0x8
    unsigned long long StartingSuspendTimeMs;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER StartTime;// Offset=0x18 Size=0x8
    struct _NDIS_NAPS_TELEMETRY_REASON_DATA Reasons[49];// Offset=0x20 Size=0x310
    struct _NDIS_NAPS_TELEMETRY_OID_DATA ReasonOids[8];// Offset=0x330 Size=0x60
};

struct _NDIS_SELECTIVE_SUSPEND// Size=0x650 (Id=741)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long IdleTimeout;// Offset=0x8 Size=0x4
    struct _NDIS_TIMER IdleTimer;// Offset=0x10 Size=0x80
    unsigned long IdleTickCount;// Offset=0x90 Size=0x4
    struct _KEVENT IdleWorkItemCompleteEvent;// Offset=0x98 Size=0x18
    struct _KEVENT PowerSuspendCompleteEvent;// Offset=0xb0 Size=0x18
    struct _KEVENT IdleNotificationCompleteEvent;// Offset=0xc8 Size=0x18
    struct _KEVENT IdleNotificationDoneEvent;// Offset=0xe0 Size=0x18
    struct _KEVENT DevicePowerReadyEvent;// Offset=0xf8 Size=0x18
    struct _KEVENT WdfD0LockedForSSEvent;// Offset=0x110 Size=0x18
    struct _NDIS_WORK_ITEM IdleTimerWorkItem;// Offset=0x128 Size=0x50
    struct _NDIS_WORK_ITEM IdleCancelWorkItem;// Offset=0x178 Size=0x50
    struct _NDIS_IRP_WORK_ITEM ResumeWorkItem;// Offset=0x1c8 Size=0x30
    struct _NDIS_SS_IDLE_FLAGS Flags;// Offset=0x1f8 Size=0x4
    struct _NDIS_SS_STOP_FLAGS StopFlags;// Offset=0x1fc Size=0x4
    struct _NDIS_SS_CONTROL_OPS PendingControlOps;// Offset=0x200 Size=0x4
    long PendingPnPEventCount;// Offset=0x204 Size=0x4
    long PendingSendNblCount;// Offset=0x208 Size=0x4
    long PendingCancelSendCount;// Offset=0x20c Size=0x4
    long PendingDirectOidCount;// Offset=0x210 Size=0x4
    long PendingCancelDirectOidCount;// Offset=0x214 Size=0x4
    long PendingPnPOpCount;// Offset=0x218 Size=0x4
    struct _NBL_QUEUE PendingSendNblQueue;// Offset=0x220 Size=0x10
    struct _NBL_QUEUE PendingReceiveNblQueue;// Offset=0x230 Size=0x10
    long PendingReceiveReturnCount;// Offset=0x240 Size=0x4
    struct _LIST_ENTRY PendingDirectOidQueue;// Offset=0x248 Size=0x10
    struct _NDIS_OID_CACHE_ENTRY * OidCacheArray;// Offset=0x258 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * QueuedSendNblTracker;// Offset=0x260 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * QueuedReceiveReturnNblTracker;// Offset=0x268 Size=0x8
    unsigned short LastUnexpectedFailureLine[2];// Offset=0x270 Size=0x4
    union _NDIS_SS_RESUME_REASON LastResumeReason;// Offset=0x274 Size=0x4
    unsigned long LastResumeContext;// Offset=0x278 Size=0x4
    union _NDIS_SS_RESUME_REASON LastBusyEvent;// Offset=0x27c Size=0x4
    unsigned long LastBusyContext;// Offset=0x280 Size=0x4
    unsigned long SuspendCount;// Offset=0x284 Size=0x4
    union _LARGE_INTEGER LastSuspendTime;// Offset=0x288 Size=0x8
    union _LARGE_INTEGER LastCancelTime;// Offset=0x290 Size=0x8
    unsigned long long LastResumeLatencyMs;// Offset=0x298 Size=0x8
    unsigned long long TotalResumeLatencyMs;// Offset=0x2a0 Size=0x8
    unsigned long long LastSuspendIntervalMs;// Offset=0x2a8 Size=0x8
    unsigned long long TotalSuspendedTimeMs;// Offset=0x2b0 Size=0x8
    enum _NDIS_DEVICE_POWER_STATE LastRequestedIdlePowerState;// Offset=0x2b8 Size=0x4
    struct _NDIS_NAPS_TELEMETRY_DATA TelemetryData;// Offset=0x2c0 Size=0x390
    void _NDIS_SELECTIVE_SUSPEND(struct _NDIS_SELECTIVE_SUSPEND * );
    void _NDIS_SELECTIVE_SUSPEND(struct _NDIS_SELECTIVE_SUSPEND & );
    struct _NDIS_SELECTIVE_SUSPEND & operator=(struct _NDIS_SELECTIVE_SUSPEND * );
    struct _NDIS_SELECTIVE_SUSPEND & operator=(struct _NDIS_SELECTIVE_SUSPEND & );
};
