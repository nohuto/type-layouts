struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=568)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _POP_POLICY_DEVICE// Size=0x40 (Id=1917)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    enum POWER_POLICY_DEVICE_TYPE DeviceType;// Offset=0x10 Size=0x4
    void * Notification;// Offset=0x18 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x20 Size=0x10
    struct _DEVICE_OBJECT * Device;// Offset=0x30 Size=0x8
    struct _IRP * Irp;// Offset=0x38 Size=0x8
};

struct _THERMAL_INFORMATION_EX// Size=0x5c (Id=1496)
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
    unsigned char PassiveCoolingDevicesPresent;// Offset=0x21 Size=0x1
    unsigned long ActiveTripPoint[10];// Offset=0x24 Size=0x28
    unsigned long S4TransitionTripPoint;// Offset=0x4c Size=0x4
    unsigned long MinimumThrottle;// Offset=0x50 Size=0x4
    unsigned long OverThrottleThreshold;// Offset=0x54 Size=0x4
    unsigned long PollingPeriod;// Offset=0x58 Size=0x4
};

struct _THERMAL_POLICY// Size=0x18 (Id=1535)
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

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=159)
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
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _KTIMER2// Size=0x88 (Id=1373)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union // Size=0x30 (Id=0)
    {
        struct _RTL_BALANCED_NODE RbNodes[2];// Offset=0x18 Size=0x30
        struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
        unsigned long long DueTime[2];// Offset=0x48 Size=0x10
    };
    long long Period;// Offset=0x58 Size=0x8
    void  ( * Callback)(struct _KTIMER2 * ,void * );// Offset=0x60 Size=0x8
    void * CallbackContext;// Offset=0x68 Size=0x8
    void  ( * DisableCallback)(void * );// Offset=0x70 Size=0x8
    void * DisableContext;// Offset=0x78 Size=0x8
    unsigned char AbsoluteSystemTime;// Offset=0x80 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char TypeFlags;// Offset=0x81 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Unused:1;// Offset=0x81 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char IdleResilient:1;// Offset=0x81 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char HighResolution:1;// Offset=0x81 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char NoWake:1;// Offset=0x81 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PseudoHighRes:1;// Offset=0x81 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char Unused1:3;// Offset=0x81 Size=0x1 BitOffset=0x5 BitSize=0x3
        };
    };
    unsigned char CollectionIndex[2];// Offset=0x82 Size=0x2
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _POP_RW_LOCK// Size=0x10 (Id=789)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _POP_THERMAL_TELEMETRY_TRACKER// Size=0x218 (Id=1703)
{
    unsigned char AccountingDisabled;// Offset=0x0 Size=0x1
    unsigned char ActiveLevels;// Offset=0x1 Size=0x1
    unsigned long long LastPassiveUpdateTime;// Offset=0x8 Size=0x8
    unsigned long long LastActiveUpdateTime;// Offset=0x10 Size=0x8
    unsigned long long TotalPassiveTime[21];// Offset=0x18 Size=0xa8
    unsigned long long PassiveTimeSnap[21];// Offset=0xc0 Size=0xa8
    unsigned long long TotalActiveTime[10];// Offset=0x168 Size=0x50
    unsigned long long ActiveTimeSnap[10];// Offset=0x1b8 Size=0x50
    unsigned long long TotalTime;// Offset=0x208 Size=0x8
    unsigned long long TotalTimeSnap;// Offset=0x210 Size=0x8
};

struct _POP_THERMAL_ZONE// Size=0x420 (Id=1311)
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
    unsigned long long LastPassiveTime;// Offset=0x60 Size=0x8
    unsigned long SampleRate;// Offset=0x68 Size=0x4
    unsigned long LastTemp;// Offset=0x6c Size=0x4
    struct _THERMAL_INFORMATION_EX Info;// Offset=0x70 Size=0x5c
    struct _THERMAL_POLICY Policy;// Offset=0xcc Size=0x18
    unsigned char PolicyDriver;// Offset=0xe4 Size=0x1
    unsigned long PollingRate;// Offset=0xe8 Size=0x4
    unsigned long long LastTemperatureTime;// Offset=0xf0 Size=0x8
    unsigned long long LastActiveStartTime;// Offset=0xf8 Size=0x8
    unsigned long long LastPassiveStartTime;// Offset=0x100 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x108 Size=0x20
    struct _KTIMER2 ZoneUpdateTimer;// Offset=0x128 Size=0x88
    struct _POP_RW_LOCK Lock;// Offset=0x1b0 Size=0x10
    struct _KEVENT ZoneStopped;// Offset=0x1c0 Size=0x18
    struct _KEVENT TemperatureUpdated;// Offset=0x1d8 Size=0x18
    unsigned long InstanceId;// Offset=0x1f0 Size=0x4
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;// Offset=0x1f8 Size=0x218
    struct _UNICODE_STRING Description;// Offset=0x410 Size=0x10
};
