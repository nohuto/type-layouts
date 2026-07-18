struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x10 (Id=360)
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
};

struct _KEVENT// Size=0x10 (Id=69)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
};

struct _OWNER_ENTRY// Size=0x8 (Id=519)
{
    unsigned long OwnerThread;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x4 Size=0x4
    };
};

struct _ERESOURCE// Size=0x38 (Id=438)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x8
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x8 Size=0x4
    short ActiveCount;// Offset=0xc Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0xe Size=0x2
        unsigned char ReservedLowFlags;// Offset=0xe Size=0x1
    };
    unsigned char WaiterPriority;// Offset=0xf Size=0x1
    void * SharedWaiters;// Offset=0x10 Size=0x4
    void * ExclusiveWaiters;// Offset=0x14 Size=0x4
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x18 Size=0x8
    unsigned long ActiveEntries;// Offset=0x20 Size=0x4
    unsigned long ContentionCount;// Offset=0x24 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x28 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x2c Size=0x4
    union // Size=0x4 (Id=0)
    {
        void * Address;// Offset=0x30 Size=0x4
        unsigned long CreatorBackTraceIndex;// Offset=0x30 Size=0x4
    };
    unsigned long SpinLock;// Offset=0x34 Size=0x4
};

struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _PROCESS_DISK_COUNTERS// Size=0x28 (Id=305)
{
    unsigned long long BytesRead;// Offset=0x0 Size=0x8
    unsigned long long BytesWritten;// Offset=0x8 Size=0x8
    unsigned long long ReadOperationCount;// Offset=0x10 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x18 Size=0x8
    unsigned long long FlushOperationCount;// Offset=0x20 Size=0x8
};

struct _WNF_STATE_NAME// Size=0x8 (Id=603)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _PS_JOB_WAKE_INFORMATION// Size=0x48 (Id=531)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long long WakeCounters[7];// Offset=0x8 Size=0x38
    unsigned long long NoWakeCounter;// Offset=0x40 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=380)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x4 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _EPROCESS_VALUES// Size=0x68 (Id=321)
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

struct _GUID// Size=0x10 (Id=40)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PS_PROPERTY_SET// Size=0xc (Id=339)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    unsigned long Lock;// Offset=0x8 Size=0x4
};

struct _RTL_BITMAP// Size=0x8 (Id=358)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x4 Size=0x4
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x14 (Id=329)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x4
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x4 Size=0x8
    unsigned char * BitMapBuffer;// Offset=0xc Size=0x4
    unsigned long BitMapBufferSize;// Offset=0x10 Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _EX_RUNDOWN_REF// Size=0x4 (Id=185)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Count;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _PS_IO_CONTROL_ENTRY// Size=0x1c (Id=412)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;// Offset=0x0 Size=0xc
        struct _LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x8
        unsigned long ReservedForParentValue;// Offset=0x8 Size=0x4
    };
    unsigned long VolumeKey;// Offset=0xc Size=0x4
    struct _EX_RUNDOWN_REF Rundown;// Offset=0x10 Size=0x4
    void * IoControl;// Offset=0x14 Size=0x4
    void * VolumeIoAttribution;// Offset=0x18 Size=0x4
};

struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

struct _WORK_QUEUE_ITEM// Size=0x10 (Id=81)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x8
    void  ( * WorkerRoutine)(void * );// Offset=0x8 Size=0x4
    void * Parameter;// Offset=0xc Size=0x4
};

union _JOBOBJECT_ENERGY_TRACKING_STATE// Size=0x8 (Id=317)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned long UpdateMask;// Offset=0x0 Size=0x4
    unsigned long DesiredState;// Offset=0x4 Size=0x4
};

struct _EJOB// Size=0x458 (Id=173)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY JobLinks;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ProcessListHead;// Offset=0x18 Size=0x8
    struct _ERESOURCE JobLock;// Offset=0x20 Size=0x38
    union _LARGE_INTEGER TotalUserTime;// Offset=0x58 Size=0x8
    union _LARGE_INTEGER TotalKernelTime;// Offset=0x60 Size=0x8
    union _LARGE_INTEGER TotalCycleTime;// Offset=0x68 Size=0x8
    union _LARGE_INTEGER ThisPeriodTotalUserTime;// Offset=0x70 Size=0x8
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;// Offset=0x78 Size=0x8
    unsigned long long TotalContextSwitches;// Offset=0x80 Size=0x8
    unsigned long TotalPageFaultCount;// Offset=0x88 Size=0x4
    unsigned long TotalProcesses;// Offset=0x8c Size=0x4
    unsigned long ActiveProcesses;// Offset=0x90 Size=0x4
    unsigned long TotalTerminatedProcesses;// Offset=0x94 Size=0x4
    union _LARGE_INTEGER PerProcessUserTimeLimit;// Offset=0x98 Size=0x8
    union _LARGE_INTEGER PerJobUserTimeLimit;// Offset=0xa0 Size=0x8
    unsigned long MinimumWorkingSetSize;// Offset=0xa8 Size=0x4
    unsigned long MaximumWorkingSetSize;// Offset=0xac Size=0x4
    unsigned long LimitFlags;// Offset=0xb0 Size=0x4
    unsigned long ActiveProcessLimit;// Offset=0xb4 Size=0x4
    struct _KAFFINITY_EX Affinity;// Offset=0xb8 Size=0x58
    struct _JOB_ACCESS_STATE * AccessState;// Offset=0x110 Size=0x4
    void * AccessStateQuotaReference;// Offset=0x114 Size=0x4
    unsigned long UIRestrictionsClass;// Offset=0x118 Size=0x4
    unsigned long EndOfJobTimeAction;// Offset=0x11c Size=0x4
    void * CompletionPort;// Offset=0x120 Size=0x4
    void * CompletionKey;// Offset=0x124 Size=0x4
    unsigned long long CompletionCount;// Offset=0x128 Size=0x8
    unsigned long SessionId;// Offset=0x130 Size=0x4
    unsigned long SchedulingClass;// Offset=0x134 Size=0x4
    unsigned long long ReadOperationCount;// Offset=0x138 Size=0x8
    unsigned long long WriteOperationCount;// Offset=0x140 Size=0x8
    unsigned long long OtherOperationCount;// Offset=0x148 Size=0x8
    unsigned long long ReadTransferCount;// Offset=0x150 Size=0x8
    unsigned long long WriteTransferCount;// Offset=0x158 Size=0x8
    unsigned long long OtherTransferCount;// Offset=0x160 Size=0x8
    struct _PROCESS_DISK_COUNTERS DiskIoInfo;// Offset=0x168 Size=0x28
    unsigned long ProcessMemoryLimit;// Offset=0x190 Size=0x4
    unsigned long JobMemoryLimit;// Offset=0x194 Size=0x4
    unsigned long JobTotalMemoryLimit;// Offset=0x198 Size=0x4
    unsigned long PeakProcessMemoryUsed;// Offset=0x19c Size=0x4
    unsigned long PeakJobMemoryUsed;// Offset=0x1a0 Size=0x4
    struct _KAFFINITY_EX EffectiveAffinity;// Offset=0x1a4 Size=0x58
    union _LARGE_INTEGER EffectivePerProcessUserTimeLimit;// Offset=0x200 Size=0x8
    unsigned long EffectiveMinimumWorkingSetSize;// Offset=0x208 Size=0x4
    unsigned long EffectiveMaximumWorkingSetSize;// Offset=0x20c Size=0x4
    unsigned long EffectiveProcessMemoryLimit;// Offset=0x210 Size=0x4
    struct _EJOB * EffectiveProcessMemoryLimitJob;// Offset=0x214 Size=0x4
    struct _EJOB * EffectivePerProcessUserTimeLimitJob;// Offset=0x218 Size=0x4
    struct _EJOB * EffectiveNetIoRateLimitJob;// Offset=0x21c Size=0x4
    struct _EJOB * EffectiveHeapAttributionJob;// Offset=0x220 Size=0x4
    unsigned long EffectiveLimitFlags;// Offset=0x224 Size=0x4
    unsigned long EffectiveSchedulingClass;// Offset=0x228 Size=0x4
    unsigned long EffectiveFreezeCount;// Offset=0x22c Size=0x4
    unsigned long EffectiveBackgroundCount;// Offset=0x230 Size=0x4
    unsigned long EffectiveSwapCount;// Offset=0x234 Size=0x4
    unsigned long EffectiveNotificationLimitCount;// Offset=0x238 Size=0x4
    unsigned char EffectivePriorityClass;// Offset=0x23c Size=0x1
    unsigned char PriorityClass;// Offset=0x23d Size=0x1
    unsigned char NestingDepth;// Offset=0x23e Size=0x1
    unsigned char Reserved1[1];// Offset=0x23f Size=0x1
    unsigned long CompletionFilter;// Offset=0x240 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _WNF_STATE_NAME WakeChannel;// Offset=0x248 Size=0x8
        struct _PS_JOB_WAKE_INFORMATION WakeInfo;// Offset=0x248 Size=0x48
    };
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x290 Size=0x8
    unsigned long LowEdgeLatchFilter;// Offset=0x298 Size=0x4
    struct _EJOB * NotificationLink;// Offset=0x29c Size=0x4
    unsigned long long CurrentJobMemoryUsed;// Offset=0x2a0 Size=0x8
    struct _JOB_NOTIFICATION_INFORMATION * NotificationInfo;// Offset=0x2a8 Size=0x4
    void * NotificationInfoQuotaReference;// Offset=0x2ac Size=0x4
    struct _IO_MINI_COMPLETION_PACKET_USER * NotificationPacket;// Offset=0x2b0 Size=0x4
    struct _JOB_CPU_RATE_CONTROL * CpuRateControl;// Offset=0x2b4 Size=0x4
    void * EffectiveSchedulingGroup;// Offset=0x2b8 Size=0x4
    unsigned long long ReadyTime;// Offset=0x2c0 Size=0x8
    struct _EX_PUSH_LOCK MemoryLimitsLock;// Offset=0x2c8 Size=0x4
    struct _LIST_ENTRY SiblingJobLinks;// Offset=0x2cc Size=0x8
    struct _LIST_ENTRY ChildJobListHead;// Offset=0x2d4 Size=0x8
    struct _EJOB * ParentJob;// Offset=0x2dc Size=0x4
    struct _EJOB * RootJob;// Offset=0x2e0 Size=0x4
    struct _LIST_ENTRY IteratorListHead;// Offset=0x2e4 Size=0x8
    unsigned long AncestorCount;// Offset=0x2ec Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct _EJOB ** Ancestors;// Offset=0x2f0 Size=0x4
        void * SessionObject;// Offset=0x2f0 Size=0x4
    };
    struct _EPROCESS_VALUES Accounting;// Offset=0x2f8 Size=0x68
    unsigned long ShadowActiveProcessCount;// Offset=0x360 Size=0x4
    unsigned long ActiveAuxiliaryProcessCount;// Offset=0x364 Size=0x4
    unsigned long SequenceNumber;// Offset=0x368 Size=0x4
    unsigned long JobId;// Offset=0x36c Size=0x4
    struct _GUID ContainerId;// Offset=0x370 Size=0x10
    struct _GUID ContainerTelemetryId;// Offset=0x380 Size=0x10
    struct _ESERVERSILO_GLOBALS * ServerSiloGlobals;// Offset=0x390 Size=0x4
    struct _PS_PROPERTY_SET PropertySet;// Offset=0x394 Size=0xc
    struct _PSP_STORAGE * Storage;// Offset=0x3a0 Size=0x4
    struct _JOB_NET_RATE_CONTROL * NetRateControl;// Offset=0x3a4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags;// Offset=0x3a8 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CloseDone:1;// Offset=0x3a8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MultiGroup:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long OutstandingNotification:1;// Offset=0x3a8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NotificationInProgress:1;// Offset=0x3a8 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long UILimits:1;// Offset=0x3a8 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CpuRateControlActive:1;// Offset=0x3a8 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OwnCpuRateControl:1;// Offset=0x3a8 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Terminating:1;// Offset=0x3a8 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long WorkingSetLock:1;// Offset=0x3a8 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long JobFrozen:1;// Offset=0x3a8 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Background:1;// Offset=0x3a8 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long WakeNotificationAllocated:1;// Offset=0x3a8 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long WakeNotificationEnabled:1;// Offset=0x3a8 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long WakeNotificationPending:1;// Offset=0x3a8 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long LimitNotificationRequired:1;// Offset=0x3a8 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ZeroCountNotificationRequired:1;// Offset=0x3a8 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long CycleTimeNotificationRequired:1;// Offset=0x3a8 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CycleTimeNotificationPending:1;// Offset=0x3a8 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long TimersVirtualized:1;// Offset=0x3a8 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long JobSwapped:1;// Offset=0x3a8 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long ViolationDetected:1;// Offset=0x3a8 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long EmptyJobNotified:1;// Offset=0x3a8 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long NoSystemCharge:1;// Offset=0x3a8 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long DropNoWakeCharges:1;// Offset=0x3a8 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long NoWakeChargePolicyDecided:1;// Offset=0x3a8 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long NetRateControlActive:1;// Offset=0x3a8 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long OwnNetRateControl:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long IoRateControlActive:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long OwnIoRateControl:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long DisallowNewProcesses:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long Silo:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ContainerTelemetryIdSet:1;// Offset=0x3a8 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long JobFlags2;// Offset=0x3ac Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ParentLocked:1;// Offset=0x3ac Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableUsermodeSiloThreadImpersonation:1;// Offset=0x3ac Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisallowUsermodeSiloThreadImpersonation:1;// Offset=0x3ac Size=0x4 BitOffset=0x2 BitSize=0x1
        };
    };
    struct _PROCESS_EXTENDED_ENERGY_VALUES * EnergyValues;// Offset=0x3b0 Size=0x4
    unsigned long SharedCommitCharge;// Offset=0x3b4 Size=0x4
    unsigned long DiskIoAttributionUserRefCount;// Offset=0x3b8 Size=0x4
    unsigned long DiskIoAttributionRefCount;// Offset=0x3bc Size=0x4
    union // Size=0x4 (Id=0)
    {
        void * DiskIoAttributionContext;// Offset=0x3c0 Size=0x4
        struct _EJOB * DiskIoAttributionOwnerJob;// Offset=0x3c0 Size=0x4
    };
    struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader;// Offset=0x3c4 Size=0x14
    struct _PS_IO_CONTROL_ENTRY GlobalIoControl;// Offset=0x3d8 Size=0x1c
    long IoControlStateLock;// Offset=0x3f4 Size=0x4
    struct _RTL_RB_TREE VolumeIoControlTree;// Offset=0x3f8 Size=0x8
    unsigned long long IoRateOverQuotaHistory;// Offset=0x400 Size=0x8
    unsigned long IoRateCurrentGeneration;// Offset=0x408 Size=0x4
    unsigned long IoRateLastQueryGeneration;// Offset=0x40c Size=0x4
    unsigned long IoRateGenerationLength;// Offset=0x410 Size=0x4
    unsigned long IoRateOverQuotaNotifySequenceId;// Offset=0x414 Size=0x4
    unsigned long long LastThrottledIoTime;// Offset=0x418 Size=0x8
    struct _EX_PUSH_LOCK IoControlLock;// Offset=0x420 Size=0x4
    long SiloHardReferenceCount;// Offset=0x424 Size=0x4
    struct _WORK_QUEUE_ITEM RundownWorkItem;// Offset=0x428 Size=0x10
    void * PartitionObject;// Offset=0x438 Size=0x4
    struct _EJOB * PartitionOwnerJob;// Offset=0x43c Size=0x4
    union _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;// Offset=0x440 Size=0x8
    unsigned long long KernelWaitTime;// Offset=0x448 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x450 Size=0x8
};
