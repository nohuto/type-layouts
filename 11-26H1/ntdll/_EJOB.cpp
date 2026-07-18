struct _LIST_ENTRY// Size=0x10 (Id=33)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=459)
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

struct _KEVENT// Size=0x18 (Id=102)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_ERESOURCE// Size=0x68 (Id=492)
{
    void * Reserved1[3];// Offset=0x0 Size=0x18
    unsigned long Reserved2;// Offset=0x18 Size=0x4
    void * Reserved3[4];// Offset=0x20 Size=0x20
    unsigned long Reserved4[4];// Offset=0x40 Size=0x10
    void * Reserved5;// Offset=0x50 Size=0x8
    void * Reserved6[2];// Offset=0x58 Size=0x10
};

struct _unnamed_41// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=415)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_41 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=73)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _PROCESS_DISK_COUNTERS// Size=0x28 (Id=390)
{
    unsigned long long BytesRead;// Offset=0x0 Size=0x8
    unsigned long long BytesWritten;// Offset=0x8 Size=0x8
    unsigned long long ReadOperationCount;// Offset=0x10 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x18 Size=0x8
    unsigned long long FlushOperationCount;// Offset=0x20 Size=0x8
};

struct _PROCESS_NETWORK_COUNTERS// Size=0x10 (Id=590)
{
    unsigned long long BytesIn;// Offset=0x0 Size=0x8
    unsigned long long BytesOut;// Offset=0x8 Size=0x8
};

struct _WNF_STATE_NAME// Size=0x8 (Id=750)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=488)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=107)
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

struct _EPROCESS_VALUES// Size=0x68 (Id=414)
{
    unsigned long long KernelTime;// Offset=0x0 Size=0x8
    unsigned long long UserTime;// Offset=0x8 Size=0x8
    unsigned long long ReadyTime;// Offset=0x10 Size=0x8
    unsigned long long CycleTime;// Offset=0x18 Size=0x8
    unsigned long long ContextSwitches;// Offset=0x20 Size=0x8
    long long ReadOperationCount;// Offset=0x28 Size=0x8
    long long WriteOperationCount;// Offset=0x30 Size=0x8
    long long OtherOperationCount;// Offset=0x38 Size=0x8
    long long ReadTransferCount;// Offset=0x40 Size=0x8
    long long WriteTransferCount;// Offset=0x48 Size=0x8
    long long OtherTransferCount;// Offset=0x50 Size=0x8
    unsigned long long KernelWaitTime;// Offset=0x58 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x60 Size=0x8
};

struct _GUID// Size=0x10 (Id=52)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PS_PROPERTY_SET// Size=0x18 (Id=436)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=43)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x28 (Id=426)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x8 Size=0x10
    unsigned char * BitMapBuffer;// Offset=0x18 Size=0x8
    unsigned long long BitMapBufferSize;// Offset=0x20 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=49)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=680)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _PS_IO_CONTROL_ENTRY// Size=0x38 (Id=523)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x10
        unsigned long long ReservedForParentValue;// Offset=0x10 Size=0x8
    };
    unsigned long long VolumeKey;// Offset=0x18 Size=0x8
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x20 Size=0x8
    void * IoControl;// Offset=0x28 Size=0x8
    void * VolumeIoAttribution;// Offset=0x30 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=48)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=105)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

union _JOBOBJECT_ENERGY_TRACKING_STATE// Size=0x8 (Id=407)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long UpdateMask;// Offset=0x0 Size=0x4
    unsigned long DesiredState;// Offset=0x4 Size=0x4
};

struct _EJOB// Size=0x738 (Id=140)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY JobLinks;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY ProcessListHead;// Offset=0x28 Size=0x10
    struct _FAST_ERESOURCE JobLock;// Offset=0x38 Size=0x68
    union _LARGE_INTEGER TotalUserTime;// Offset=0xa0 Size=0x8
    union _LARGE_INTEGER TotalKernelTime;// Offset=0xa8 Size=0x8
    union _LARGE_INTEGER TotalCycleTime;// Offset=0xb0 Size=0x8
    union _LARGE_INTEGER ThisPeriodTotalUserTime;// Offset=0xb8 Size=0x8
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;// Offset=0xc0 Size=0x8
    unsigned long long TotalContextSwitches;// Offset=0xc8 Size=0x8
    unsigned long TotalPageFaultCount;// Offset=0xd0 Size=0x4
    unsigned long TotalProcesses;// Offset=0xd4 Size=0x4
    unsigned long ActiveProcesses;// Offset=0xd8 Size=0x4
    unsigned long TotalTerminatedProcesses;// Offset=0xdc Size=0x4
    union _LARGE_INTEGER PerProcessUserTimeLimit;// Offset=0xe0 Size=0x8
    union _LARGE_INTEGER PerJobUserTimeLimit;// Offset=0xe8 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0xf0 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0xf8 Size=0x8
    unsigned long LimitFlags;// Offset=0x100 Size=0x4
    unsigned long ActiveProcessLimit;// Offset=0x104 Size=0x4
    struct _KAFFINITY_EX Affinity;// Offset=0x108 Size=0x108
    struct _JOB_ACCESS_STATE * AccessState;// Offset=0x210 Size=0x8
    void * AccessStateQuotaReference;// Offset=0x218 Size=0x8
    unsigned long UIRestrictionsClass;// Offset=0x220 Size=0x4
    unsigned long EndOfJobTimeAction;// Offset=0x224 Size=0x4
    void * CompletionPort;// Offset=0x228 Size=0x8
    void * CompletionKey;// Offset=0x230 Size=0x8
    unsigned long long CompletionCount;// Offset=0x238 Size=0x8
    unsigned long SessionId;// Offset=0x240 Size=0x4
    unsigned long SchedulingClass;// Offset=0x244 Size=0x4
    unsigned long long ReadOperationCount;// Offset=0x248 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x250 Size=0x8
    unsigned long long OtherOperationCount;// Offset=0x258 Size=0x8
    unsigned long long ReadTransferCount;// Offset=0x260 Size=0x8
    unsigned long long WriteTransferCount;// Offset=0x268 Size=0x8
    unsigned long long OtherTransferCount;// Offset=0x270 Size=0x8
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;// Offset=0x278 Size=0x28
    struct _PROCESS_NETWORK_COUNTERS NetworkIoInfo;// Offset=0x2a0 Size=0x10
    unsigned long long ProcessMemoryLimit;// Offset=0x2b0 Size=0x8
    unsigned long long JobMemoryLimit;// Offset=0x2b8 Size=0x8
    unsigned long long JobTotalMemoryLimit;// Offset=0x2c0 Size=0x8
    unsigned long long PeakProcessMemoryUsed;// Offset=0x2c8 Size=0x8
    unsigned long long PeakJobMemoryUsed;// Offset=0x2d0 Size=0x8
    struct _KAFFINITY_EX EffectiveAffinity;// Offset=0x2d8 Size=0x108
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;// Offset=0x3e0 Size=0x8
    unsigned long long EffectiveMinimumWorkingSetSize;// Offset=0x3e8 Size=0x8
    unsigned long long EffectiveMaximumWorkingSetSize;// Offset=0x3f0 Size=0x8
    unsigned long long EffectiveProcessMemoryLimit;// Offset=0x3f8 Size=0x8
    struct _EJOB * EffectiveProcessMemoryLimitJob;// Offset=0x400 Size=0x8
    struct _EJOB * EffectivePerProcessUserTimeLimitJob;// Offset=0x408 Size=0x8
    struct _EJOB * EffectiveNetIoRateLimitJob;// Offset=0x410 Size=0x8
    struct _EJOB * EffectiveHeapAttributionJob;// Offset=0x418 Size=0x8
    unsigned long EffectiveLimitFlags;// Offset=0x420 Size=0x4
    unsigned long EffectiveSchedulingClass;// Offset=0x424 Size=0x4
    unsigned long EffectiveFreezeCount;// Offset=0x428 Size=0x4
    unsigned long EffectiveGraphicsFreezeCount;// Offset=0x42c Size=0x4
    unsigned long EffectiveBackgroundCount;// Offset=0x430 Size=0x4
    unsigned long EffectiveSwapCount;// Offset=0x434 Size=0x4
    unsigned long EffectiveNotificationLimitCount;// Offset=0x438 Size=0x4
    unsigned long EffectiveIoPriorityLimit;// Offset=0x43c Size=0x4
    unsigned long IoPriorityLimit;// Offset=0x440 Size=0x4
    unsigned long EffectivePagePriorityLimit;// Offset=0x444 Size=0x4
    unsigned long PagePriorityLimit;// Offset=0x448 Size=0x4
    unsigned char EffectivePriorityClass;// Offset=0x44c Size=0x1
    unsigned char PriorityClass;// Offset=0x44d Size=0x1
    unsigned char NestingDepth;// Offset=0x44e Size=0x1
    unsigned char Reserved1[1];// Offset=0x44f Size=0x1
    unsigned long CompletionFilter;// Offset=0x450 Size=0x4
    struct _WNF_STATE_NAME NotificationChannel;// Offset=0x454 Size=0x8
    unsigned long long WakeCounters[7];// Offset=0x460 Size=0x38
    unsigned long long NoWakeCounter;// Offset=0x498 Size=0x8
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x4a0 Size=0x8
    unsigned long LowEdgeLatchFilter;// Offset=0x4a8 Size=0x4
    struct _EJOB * NotificationLink;// Offset=0x4b0 Size=0x8
    unsigned long long CurrentJobMemoryUsed;// Offset=0x4b8 Size=0x8
    struct _JOB_NOTIFICATION_INFORMATION * NotificationInfo;// Offset=0x4c0 Size=0x8
    void * NotificationInfoQuotaReference;// Offset=0x4c8 Size=0x8
    struct _IO_MINI_COMPLETION_PACKET_USER * NotificationPacket;// Offset=0x4d0 Size=0x8
    struct _JOB_CPU_RATE_CONTROL * CpuRateControl;// Offset=0x4d8 Size=0x8
    void * EffectiveSchedulingGroup;// Offset=0x4e0 Size=0x8
    unsigned long long ReadyTime;// Offset=0x4e8 Size=0x8
    struct _EX_PUSH_LOCK MemoryLimitsLock;// Offset=0x4f0 Size=0x8
    struct _LIST_ENTRY SiblingJobLinks;// Offset=0x4f8 Size=0x10
    struct _LIST_ENTRY ChildJobListHead;// Offset=0x508 Size=0x10
    struct _EJOB * ParentJob;// Offset=0x518 Size=0x8
    struct _EJOB * RootJob;// Offset=0x520 Size=0x8
    struct _LIST_ENTRY IteratorListHead;// Offset=0x528 Size=0x10
    unsigned long long AncestorCount;// Offset=0x538 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _EJOB ** Ancestors;// Offset=0x540 Size=0x8
        void * SessionObject;// Offset=0x540 Size=0x8
    };
    struct _EPROCESS_VALUES Accounting;// Offset=0x548 Size=0x68
    unsigned long ShadowActiveProcessCount;// Offset=0x5b0 Size=0x4
    unsigned long ActiveAuxiliaryProcessCount;// Offset=0x5b4 Size=0x4
    unsigned long SequenceNumber;// Offset=0x5b8 Size=0x4
    unsigned long JobId;// Offset=0x5bc Size=0x4
    struct _GUID ContainerId;// Offset=0x5c0 Size=0x10
    struct _GUID ContainerTelemetryId;// Offset=0x5d0 Size=0x10
    struct _ESERVERSILO_GLOBALS * ServerSiloGlobals;// Offset=0x5e0 Size=0x8
    struct _PS_PROPERTY_SET PropertySet;// Offset=0x5e8 Size=0x18
    struct _PSP_STORAGE * Storage;// Offset=0x600 Size=0x8
    struct _JOB_NET_RATE_CONTROL * NetRateControl;// Offset=0x608 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags;// Offset=0x610 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CloseDone:1;// Offset=0x610 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MultiGroup:1;// Offset=0x610 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long OutstandingNotification:1;// Offset=0x610 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NotificationInProgress:1;// Offset=0x610 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long UILimits:1;// Offset=0x610 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CpuRateControlActive:1;// Offset=0x610 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OwnCpuRateControl:1;// Offset=0x610 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Terminating:1;// Offset=0x610 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long WorkingSetLock:1;// Offset=0x610 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long JobFrozen:1;// Offset=0x610 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Background:1;// Offset=0x610 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long Spare:1;// Offset=0x610 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long WakeNotificationEnabled:1;// Offset=0x610 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long WakeNotificationPending:1;// Offset=0x610 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long LimitNotificationRequired:1;// Offset=0x610 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ZeroCountNotificationRequired:1;// Offset=0x610 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long CycleTimeNotificationRequired:1;// Offset=0x610 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CycleTimeNotificationPending:1;// Offset=0x610 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long TimersVirtualized:1;// Offset=0x610 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long JobSwapped:1;// Offset=0x610 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long ViolationDetected:1;// Offset=0x610 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long EmptyJobNotified:1;// Offset=0x610 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long NoSystemCharge:1;// Offset=0x610 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long DropNoWakeCharges:1;// Offset=0x610 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long NoWakeChargePolicyDecided:1;// Offset=0x610 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long NetRateControlActive:1;// Offset=0x610 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long OwnNetRateControl:1;// Offset=0x610 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long IoRateControlActive:1;// Offset=0x610 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long OwnIoRateControl:1;// Offset=0x610 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long DisallowNewProcesses:1;// Offset=0x610 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long Silo:1;// Offset=0x610 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ContainerTelemetryIdSet:1;// Offset=0x610 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags2;// Offset=0x614 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ParentLocked:1;// Offset=0x614 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableUsermodeSiloThreadImpersonation:1;// Offset=0x614 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisallowUsermodeSiloThreadImpersonation:1;// Offset=0x614 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long JobGraphicsFreezeOptimized:1;// Offset=0x614 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long JobSystemUILimits:1;// Offset=0x614 Size=0x4 BitOffset=0x4 BitSize=0x1
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES_V1 * EnergyValues;// Offset=0x618 Size=0x8
    unsigned long long SharedCommitCharge;// Offset=0x620 Size=0x8
    unsigned long DiskIoAttributionUserRefCount;// Offset=0x628 Size=0x4
    unsigned long DiskIoAttributionRefCount;// Offset=0x62c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * DiskIoAttributionContext;// Offset=0x630 Size=0x8
        struct _EJOB * DiskIoAttributionOwnerJob;// Offset=0x630 Size=0x8
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;// Offset=0x638 Size=0x28
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;// Offset=0x660 Size=0x38
    long IoControlStateLock;// Offset=0x698 Size=0x4
    struct _RTL_RB_TREE VolumeIoControlTree;// Offset=0x6a0 Size=0x10
    unsigned long long IoRateOverQuotaHistory;// Offset=0x6b0 Size=0x8
    unsigned long IoRateCurrentGeneration;// Offset=0x6b8 Size=0x4
    unsigned long IoRateLastQueryGeneration;// Offset=0x6bc Size=0x4
    unsigned long IoRateGenerationLength;// Offset=0x6c0 Size=0x4
    unsigned long IoRateOverQuotaNotifySequenceId;// Offset=0x6c4 Size=0x4
    unsigned long long LastThrottledIoTime;// Offset=0x6c8 Size=0x8
    struct _EX_PUSH_LOCK IoControlLock;// Offset=0x6d0 Size=0x8
    long long SiloHardReferenceCount;// Offset=0x6d8 Size=0x8
    struct _WORK_QUEUE_ITEM RundownWorkItem;// Offset=0x6e0 Size=0x20
    void * PartitionObject;// Offset=0x700 Size=0x8
    struct _EJOB * PartitionOwnerJob;// Offset=0x708 Size=0x8
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;// Offset=0x710 Size=0x8
    unsigned long long KernelWaitTime;// Offset=0x718 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x720 Size=0x8
    void * CpuPartitionObject;// Offset=0x728 Size=0x8
    struct _EJOB * CpuPartitionOwnerJob;// Offset=0x730 Size=0x8
};
