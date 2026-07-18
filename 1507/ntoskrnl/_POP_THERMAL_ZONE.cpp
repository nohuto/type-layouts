struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _POP_POLICY_DEVICE// Size=0x40 (Id=900)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    enum POWER_POLICY_DEVICE_TYPE DeviceType;// Offset=0x10 Size=0x4
    void * Notification;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x20 Size=0x10
    struct _DEVICE_OBJECT * Device;// Offset=0x30 Size=0x8
    struct _IRP * Irp;// Offset=0x38 Size=0x8
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

struct _KTIMER// Size=0x40 (Id=1001)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=152)
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

struct _THERMAL_INFORMATION_EX// Size=0x58 (Id=532)
{
    unsigned long ThermalStamp;// Offset=0x0 Size=0x4
    unsigned long ThermalConstant1;// Offset=0x4 Size=0x4
    unsigned long ThermalConstant2;// Offset=0x8 Size=0x4
    unsigned long SamplingPeriod;// Offset=0xc Size=0x4
    unsigned long CurrentTemperature;// Offset=0x10 Size=0x4
    unsigned long PassiveTripPoint;// Offset=0x14 Size=0x4
    unsigned long ThermalStandbyTripPoint;// Offset=0x18 Size=0x4
    unsigned long CriticalTripPoint;// Offset=0x1c Size=0x4
    unsigned char ActiveTripPointCount;// Offset=0x20 Size=0x1
    unsigned long ActiveTripPoint[10];// Offset=0x24 Size=0x28
    unsigned long S4TransitionTripPoint;// Offset=0x4c Size=0x4
    unsigned long MinimumThrottle;// Offset=0x50 Size=0x4
    unsigned long OverThrottleThreshold;// Offset=0x54 Size=0x4
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

struct _THERMAL_POLICY// Size=0x18 (Id=1298)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned char WaitForUpdate;// Offset=0x4 Size=0x1
    unsigned char Hibernate;// Offset=0x5 Size=0x1
    unsigned char Critical;// Offset=0x6 Size=0x1
    unsigned char ThermalStandby;// Offset=0x7 Size=0x1
    unsigned long ActivationReasons;// Offset=0x8 Size=0x4
    unsigned long PassiveLimit;// Offset=0xc Size=0x4
    unsigned long ActiveLevel;// Offset=0x10 Size=0x4
    unsigned char OverThrottled;// Offset=0x14 Size=0x1
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=74)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
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

struct _POP_RW_LOCK// Size=0x10 (Id=353)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
};

struct _KEVENT// Size=0x18 (Id=59)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _POP_THERMAL_TELEMETRY_TRACKER// Size=0x150 (Id=783)
{
    unsigned char AccountingDisabled;// Offset=0x0 Size=0x1
    unsigned long long LastPassiveUpdateTime;// Offset=0x8 Size=0x8
    unsigned long long TotalPassiveTime[20];// Offset=0x10 Size=0xa0
    unsigned long long PassiveTimeSnap[20];// Offset=0xb0 Size=0xa0
};

struct _POP_THERMAL_ZONE// Size=0x338 (Id=765)
{
    union // Size=0x40 (Id=0)
    {
        struct _POP_POLICY_DEVICE PolicyDevice;// Offset=0x0 Size=0x40
        struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
        enum POWER_POLICY_DEVICE_TYPE DeviceType;// Offset=0x10 Size=0x4
        void * Notification;// Offset=0x18 Size=0x8
        struct _UNICODE_STRING Name;// Offset=0x20 Size=0x10
        struct _DEVICE_OBJECT * Device;// Offset=0x30 Size=0x8
        struct _IRP * Irp;// Offset=0x38 Size=0x8
    };
    unsigned char State;// Offset=0x40 Size=0x1
    unsigned char Flags;// Offset=0x41 Size=0x1
    unsigned char Removing;// Offset=0x42 Size=0x1
    unsigned char Mode;// Offset=0x43 Size=0x1
    unsigned char PendingMode;// Offset=0x44 Size=0x1
    unsigned char ActivePoint;// Offset=0x45 Size=0x1
    unsigned char PendingActivePoint;// Offset=0x46 Size=0x1
    unsigned char Critical;// Offset=0x47 Size=0x1
    unsigned char ThermalStandby;// Offset=0x48 Size=0x1
    unsigned char OverThrottled;// Offset=0x49 Size=0x1
    long HighPrecisionThrottle;// Offset=0x4c Size=0x4
    long Throttle;// Offset=0x50 Size=0x4
    long PendingThrottle;// Offset=0x54 Size=0x4
    unsigned long ThrottleReasons;// Offset=0x58 Size=0x4
    unsigned long long LastTime;// Offset=0x60 Size=0x8
    unsigned long SampleRate;// Offset=0x68 Size=0x4
    unsigned long LastTemp;// Offset=0x6c Size=0x4
    struct _KTIMER PassiveTimer;// Offset=0x70 Size=0x40
    struct _KDPC PassiveDpc;// Offset=0xb0 Size=0x40
    struct _THERMAL_INFORMATION_EX Info;// Offset=0xf0 Size=0x58
    union _LARGE_INTEGER InfoLastUpdateTime;// Offset=0x148 Size=0x8
    struct _THERMAL_POLICY Policy;// Offset=0x150 Size=0x18
    unsigned char PolicyDriver;// Offset=0x168 Size=0x1
    unsigned long long LastActiveStartTime;// Offset=0x170 Size=0x8
    unsigned long long LastPassiveStartTime;// Offset=0x178 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x180 Size=0x20
    struct _POP_RW_LOCK Lock;// Offset=0x1a0 Size=0x10
    struct _KEVENT ZoneStopped;// Offset=0x1b0 Size=0x18
    struct _KEVENT TemperatureUpdated;// Offset=0x1c8 Size=0x18
    unsigned long InstanceId;// Offset=0x1e0 Size=0x4
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;// Offset=0x1e8 Size=0x150
};
