struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=271)
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

struct _KEVENT// Size=0x18 (Id=74)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _OWNER_ENTRY// Size=0x10 (Id=420)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=335)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0x1a Size=0x2
        unsigned char ReservedLowFlags;// Offset=0x1a Size=0x1
    };
    unsigned char WaiterPriority;// Offset=0x1b Size=0x1
    void * SharedWaiters;// Offset=0x20 Size=0x8
    void * ExclusiveWaiters;// Offset=0x28 Size=0x8
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x30 Size=0x10
    unsigned long ActiveEntries;// Offset=0x40 Size=0x4
    unsigned long ContentionCount;// Offset=0x44 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x48 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x4c Size=0x4
    void * Reserved2;// Offset=0x50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0x58 Size=0x8
        unsigned long long CreatorBackTraceIndex;// Offset=0x58 Size=0x8
    };
    unsigned long long SpinLock;// Offset=0x60 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KAFFINITY_EX// Size=0xa8 (Id=64)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESS_DISK_COUNTERS// Size=0x28 (Id=230)
{
    unsigned long long BytesRead;// Offset=0x0 Size=0x8
    unsigned long long BytesWritten;// Offset=0x8 Size=0x8
    unsigned long long ReadOperationCount;// Offset=0x10 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x18 Size=0x8
    unsigned long long FlushOperationCount;// Offset=0x20 Size=0x8
};

struct _WNF_STATE_NAME// Size=0x8 (Id=517)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _PS_JOB_WAKE_INFORMATION// Size=0x48 (Id=441)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long long WakeCounters[7];// Offset=0x8 Size=0x38
    unsigned long long NoWakeCounter;// Offset=0x40 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=290)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=91)
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

struct _EPROCESS_VALUES// Size=0x58 (Id=244)
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
};

struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PS_PROPERTY_SET// Size=0x18 (Id=257)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x28 (Id=249)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x8 Size=0x10
    unsigned char * BitMapBuffer;// Offset=0x18 Size=0x8
    unsigned long long BitMapBufferSize;// Offset=0x20 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=39)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=195)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _PS_IO_CONTROL_ENTRY// Size=0x38 (Id=312)
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

struct _RTL_RB_TREE// Size=0x10 (Id=38)
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

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=89)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

union _JOBOBJECT_ENERGY_TRACKING_STATE// Size=0x8 (Id=241)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long UpdateMask;// Offset=0x0 Size=0x4
    unsigned long DesiredState;// Offset=0x4 Size=0x4
};

struct _EJOB// Size=0x620 (Id=183)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY JobLinks;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY ProcessListHead;// Offset=0x28 Size=0x10
    struct _ERESOURCE JobLock;// Offset=0x38 Size=0x68
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
    struct _KAFFINITY_EX Affinity;// Offset=0x108 Size=0xa8
    struct _JOB_ACCESS_STATE * AccessState;// Offset=0x1b0 Size=0x8
    void * AccessStateQuotaReference;// Offset=0x1b8 Size=0x8
    unsigned long UIRestrictionsClass;// Offset=0x1c0 Size=0x4
    unsigned long EndOfJobTimeAction;// Offset=0x1c4 Size=0x4
    void * CompletionPort;// Offset=0x1c8 Size=0x8
    void * CompletionKey;// Offset=0x1d0 Size=0x8
    unsigned long long CompletionCount;// Offset=0x1d8 Size=0x8
    unsigned long SessionId;// Offset=0x1e0 Size=0x4
    unsigned long SchedulingClass;// Offset=0x1e4 Size=0x4
    unsigned long long ReadOperationCount;// Offset=0x1e8 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x1f0 Size=0x8
    unsigned long long OtherOperationCount;// Offset=0x1f8 Size=0x8
    unsigned long long ReadTransferCount;// Offset=0x200 Size=0x8
    unsigned long long WriteTransferCount;// Offset=0x208 Size=0x8
    unsigned long long OtherTransferCount;// Offset=0x210 Size=0x8
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;// Offset=0x218 Size=0x28
    unsigned long long ProcessMemoryLimit;// Offset=0x240 Size=0x8
    unsigned long long JobMemoryLimit;// Offset=0x248 Size=0x8
    unsigned long long JobTotalMemoryLimit;// Offset=0x250 Size=0x8
    unsigned long long PeakProcessMemoryUsed;// Offset=0x258 Size=0x8
    unsigned long long PeakJobMemoryUsed;// Offset=0x260 Size=0x8
    struct _KAFFINITY_EX EffectiveAffinity;// Offset=0x268 Size=0xa8
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;// Offset=0x310 Size=0x8
    unsigned long long EffectiveMinimumWorkingSetSize;// Offset=0x318 Size=0x8
    unsigned long long EffectiveMaximumWorkingSetSize;// Offset=0x320 Size=0x8
    unsigned long long EffectiveProcessMemoryLimit;// Offset=0x328 Size=0x8
    struct _EJOB * EffectiveProcessMemoryLimitJob;// Offset=0x330 Size=0x8
    struct _EJOB * EffectivePerProcessUserTimeLimitJob;// Offset=0x338 Size=0x8
    struct _EJOB * EffectiveNetIoRateLimitJob;// Offset=0x340 Size=0x8
    struct _EJOB * EffectiveHeapAttributionJob;// Offset=0x348 Size=0x8
    unsigned long EffectiveLimitFlags;// Offset=0x350 Size=0x4
    unsigned long EffectiveSchedulingClass;// Offset=0x354 Size=0x4
    unsigned long EffectiveFreezeCount;// Offset=0x358 Size=0x4
    unsigned long EffectiveBackgroundCount;// Offset=0x35c Size=0x4
    unsigned long EffectiveSwapCount;// Offset=0x360 Size=0x4
    unsigned long EffectiveNotificationLimitCount;// Offset=0x364 Size=0x4
    unsigned char EffectivePriorityClass;// Offset=0x368 Size=0x1
    unsigned char PriorityClass;// Offset=0x369 Size=0x1
    unsigned char NestingDepth;// Offset=0x36a Size=0x1
    unsigned char Reserved1[1];// Offset=0x36b Size=0x1
    unsigned long CompletionFilter;// Offset=0x36c Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _WNF_STATE_NAME WakeChannel;// Offset=0x370 Size=0x8
        struct _PS_JOB_WAKE_INFORMATION WakeInfo;// Offset=0x370 Size=0x48
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x3b8 Size=0x8
    unsigned long LowEdgeLatchFilter;// Offset=0x3c0 Size=0x4
    struct _EJOB * NotificationLink;// Offset=0x3c8 Size=0x8
    unsigned long long CurrentJobMemoryUsed;// Offset=0x3d0 Size=0x8
    struct _JOB_NOTIFICATION_INFORMATION * NotificationInfo;// Offset=0x3d8 Size=0x8
    void * NotificationInfoQuotaReference;// Offset=0x3e0 Size=0x8
    struct _IO_MINI_COMPLETION_PACKET_USER * NotificationPacket;// Offset=0x3e8 Size=0x8
    struct _JOB_CPU_RATE_CONTROL * CpuRateControl;// Offset=0x3f0 Size=0x8
    void * EffectiveSchedulingGroup;// Offset=0x3f8 Size=0x8
    unsigned long long ReadyTime;// Offset=0x400 Size=0x8
    struct _EX_PUSH_LOCK MemoryLimitsLock;// Offset=0x408 Size=0x8
    struct _LIST_ENTRY SiblingJobLinks;// Offset=0x410 Size=0x10
    struct _LIST_ENTRY ChildJobListHead;// Offset=0x420 Size=0x10
    struct _EJOB * ParentJob;// Offset=0x430 Size=0x8
    struct _EJOB * RootJob;// Offset=0x438 Size=0x8
    struct _LIST_ENTRY IteratorListHead;// Offset=0x440 Size=0x10
    unsigned long long AncestorCount;// Offset=0x450 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _EJOB ** Ancestors;// Offset=0x458 Size=0x8
        void * SessionObject;// Offset=0x458 Size=0x8
    };
    struct _EPROCESS_VALUES Accounting;// Offset=0x460 Size=0x58
    unsigned long ShadowActiveProcessCount;// Offset=0x4b8 Size=0x4
    unsigned long ActiveAuxiliaryProcessCount;// Offset=0x4bc Size=0x4
    unsigned long SequenceNumber;// Offset=0x4c0 Size=0x4
    unsigned long JobId;// Offset=0x4c4 Size=0x4
    struct _GUID ContainerId;// Offset=0x4c8 Size=0x10
    struct _GUID ContainerTelemetryId;// Offset=0x4d8 Size=0x10
    struct _ESERVERSILO_GLOBALS * ServerSiloGlobals;// Offset=0x4e8 Size=0x8
    struct _PS_PROPERTY_SET PropertySet;// Offset=0x4f0 Size=0x18
    struct _PSP_STORAGE * Storage;// Offset=0x508 Size=0x8
    struct _JOB_NET_RATE_CONTROL * NetRateControl;// Offset=0x510 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags;// Offset=0x518 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CloseDone:1;// Offset=0x518 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MultiGroup:1;// Offset=0x518 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long OutstandingNotification:1;// Offset=0x518 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NotificationInProgress:1;// Offset=0x518 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long UILimits:1;// Offset=0x518 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CpuRateControlActive:1;// Offset=0x518 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OwnCpuRateControl:1;// Offset=0x518 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Terminating:1;// Offset=0x518 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long WorkingSetLock:1;// Offset=0x518 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long JobFrozen:1;// Offset=0x518 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Background:1;// Offset=0x518 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long WakeNotificationAllocated:1;// Offset=0x518 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long WakeNotificationEnabled:1;// Offset=0x518 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long WakeNotificationPending:1;// Offset=0x518 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long LimitNotificationRequired:1;// Offset=0x518 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ZeroCountNotificationRequired:1;// Offset=0x518 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long CycleTimeNotificationRequired:1;// Offset=0x518 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CycleTimeNotificationPending:1;// Offset=0x518 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long TimersVirtualized:1;// Offset=0x518 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long JobSwapped:1;// Offset=0x518 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long ViolationDetected:1;// Offset=0x518 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long EmptyJobNotified:1;// Offset=0x518 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long NoSystemCharge:1;// Offset=0x518 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long DropNoWakeCharges:1;// Offset=0x518 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long NoWakeChargePolicyDecided:1;// Offset=0x518 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long NetRateControlActive:1;// Offset=0x518 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long OwnNetRateControl:1;// Offset=0x518 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long IoRateControlActive:1;// Offset=0x518 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long OwnIoRateControl:1;// Offset=0x518 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long DisallowNewProcesses:1;// Offset=0x518 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long Silo:1;// Offset=0x518 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ContainerTelemetryIdSet:1;// Offset=0x518 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags2;// Offset=0x51c Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ParentLocked:1;// Offset=0x51c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableUsermodeSiloThreadImpersonation:1;// Offset=0x51c Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisallowUsermodeSiloThreadImpersonation:1;// Offset=0x51c Size=0x4 BitOffset=0x2 BitSize=0x1
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES * EnergyValues;// Offset=0x520 Size=0x8
    unsigned long long SharedCommitCharge;// Offset=0x528 Size=0x8
    unsigned long DiskIoAttributionUserRefCount;// Offset=0x530 Size=0x4
    unsigned long DiskIoAttributionRefCount;// Offset=0x534 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * DiskIoAttributionContext;// Offset=0x538 Size=0x8
        struct _EJOB * DiskIoAttributionOwnerJob;// Offset=0x538 Size=0x8
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;// Offset=0x540 Size=0x28
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;// Offset=0x568 Size=0x38
    long IoControlStateLock;// Offset=0x5a0 Size=0x4
    struct _RTL_RB_TREE VolumeIoControlTree;// Offset=0x5a8 Size=0x10
    unsigned long long IoRateOverQuotaHistory;// Offset=0x5b8 Size=0x8
    unsigned long IoRateCurrentGeneration;// Offset=0x5c0 Size=0x4
    unsigned long IoRateLastQueryGeneration;// Offset=0x5c4 Size=0x4
    unsigned long IoRateGenerationLength;// Offset=0x5c8 Size=0x4
    unsigned long IoRateOverQuotaNotifySequenceId;// Offset=0x5cc Size=0x4
    unsigned long long LastThrottledIoTime;// Offset=0x5d0 Size=0x8
    struct _EX_PUSH_LOCK IoControlLock;// Offset=0x5d8 Size=0x8
    unsigned long long SiloHardReferenceCount;// Offset=0x5e0 Size=0x8
    struct _WORK_QUEUE_ITEM RundownWorkItem;// Offset=0x5e8 Size=0x20
    void * PartitionObject;// Offset=0x608 Size=0x8
    struct _EJOB * PartitionOwnerJob;// Offset=0x610 Size=0x8
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;// Offset=0x618 Size=0x8
};
