struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_AGING_FACTORS// Size=0x50 (Id=2396)
{
    unsigned long long AvailablePages[8];// Offset=0x0 Size=0x40
    unsigned long long AverageAvailValue;// Offset=0x40 Size=0x8
    unsigned long AvailableDeviationPosition;// Offset=0x48 Size=0x4
};

struct _MI_WS_CLAIM_INFORMATION// Size=0x50 (Id=1677)
{
    unsigned long long AgeDistribution[8];// Offset=0x0 Size=0x40
    unsigned long long VeryOldWsles;// Offset=0x40 Size=0x8
    unsigned char HardMaximumAgingNeeded;// Offset=0x48 Size=0x1
    unsigned char HardMaximumTrimmingNeeded;// Offset=0x49 Size=0x1
};

struct _MI_WORKING_SET_CONFIGURATION// Size=0xf0 (Id=1448)
{
    unsigned long long SecondsTillNextTrim;// Offset=0x0 Size=0x8
    unsigned long long AvailablePages;// Offset=0x8 Size=0x8
    unsigned long long AvailableGoal;// Offset=0x10 Size=0x8
    unsigned long long MaxAvailableGoal;// Offset=0x18 Size=0x8
    unsigned long AgePercent;// Offset=0x20 Size=0x4
    unsigned long MinAgePercent;// Offset=0x24 Size=0x4
    unsigned long StandbyRemoved;// Offset=0x28 Size=0x4
    unsigned long LastStandbyRePurposed;// Offset=0x2c Size=0x4
    unsigned long StandbyRemovedAtLastTrim;// Offset=0x30 Size=0x4
    struct _MI_AGING_FACTORS AgingFactors;// Offset=0x38 Size=0x50
    unsigned char PrivatePageTrimAge;// Offset=0x88 Size=0x1
    unsigned char SharedPageTrimAge;// Offset=0x89 Size=0x1
    unsigned char AgeForSlowStandby;// Offset=0x8a Size=0x1
    unsigned long long OldPagesNeeded;// Offset=0x90 Size=0x8
    struct _MI_WS_CLAIM_INFORMATION Claim;// Offset=0x98 Size=0x50
    unsigned long long TotalPagesInChildPartitions;// Offset=0xe8 Size=0x8
};

struct _MI_WORKING_SET_AGING_CONTROL// Size=0x38 (Id=1840)
{
    unsigned char Active;// Offset=0x0 Size=0x1
    unsigned char PeriodicAccessClearing;// Offset=0x1 Size=0x1
    unsigned long long TrimWhileAgingLowThreshold;// Offset=0x8 Size=0x8
    unsigned long long TrimWhileAgingHighThreshold;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE AgeListWalkers;// Offset=0x18 Size=0x8
    unsigned long long AgedPages;// Offset=0x20 Size=0x8
    unsigned long long AgingTime;// Offset=0x28 Size=0x8
    unsigned long long MaximumPtesAgePerSecond;// Offset=0x30 Size=0x8
};

struct _MI_WORKING_SET_TRIM_HISTOGRAM// Size=0x98 (Id=2287)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long ElapsedTime;// Offset=0x8 Size=0x8
    unsigned long long StartAvailablePages[2];// Offset=0x10 Size=0x10
    unsigned long long EndAvailablePages[2];// Offset=0x20 Size=0x10
    unsigned long long TrimGoal;// Offset=0x30 Size=0x8
    unsigned long long PagesTrimmed;// Offset=0x38 Size=0x8
    struct _MI_WS_CLAIM_INFORMATION Claim;// Offset=0x40 Size=0x50
    unsigned short NumPasses;// Offset=0x90 Size=0x2
    unsigned short TrimStamp;// Offset=0x92 Size=0x2
    enum MI_TRIM_REASON TrimReason;// Offset=0x94 Size=0x4
};

enum _MEMORY_PARTITION_TRIM_WHILE_AGING_STATE
{
    MmTrimWhileAgingOff=0,
    MmTrimWhileAgingLowPriority=1,
    MmTrimWhileAgingPassive=2,
    MmTrimWhileAgingNormal=3,
    MmTrimWhileAgingAggressive=4,
    MmTrimWhileAgingMax=5
};

struct _MI_WORKING_SET_TRIM_CONTROL// Size=0xa20 (Id=1604)
{
    unsigned short TrimStamp;// Offset=0x0 Size=0x2
    unsigned long long AvailableDeviationAverage;// Offset=0x8 Size=0x8
    unsigned long long AvailableDeviation[8];// Offset=0x10 Size=0x40
    unsigned long NumPasses[5];// Offset=0x50 Size=0x14
    unsigned long Delays;// Offset=0x64 Size=0x4
    unsigned char HistogramIndex;// Offset=0x68 Size=0x1
    struct _MI_WORKING_SET_TRIM_HISTOGRAM Histogram[16];// Offset=0x70 Size=0x980
    unsigned long long LowPriorityWsThreshold;// Offset=0x9f0 Size=0x8
    unsigned long long LastAvailable;// Offset=0x9f8 Size=0x8
    unsigned long long MinAvailableGoal;// Offset=0xa00 Size=0x8
    unsigned long long IdealAvailableGoal;// Offset=0xa08 Size=0x8
    enum _MEMORY_PARTITION_TRIM_WHILE_AGING_STATE TrimWhileAgingState;// Offset=0xa10 Size=0x4
    long ManyLowPriorityAgesExist;// Offset=0xa14 Size=0x4
    unsigned char TrimActive;// Offset=0xa18 Size=0x1
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
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

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_WORKING_SET_CONTROL// Size=0xc18 (Id=1354)
{
    struct _ETHREAD * WorkingSetThread[2];// Offset=0x0 Size=0x10
    struct _LIST_ENTRY WorkingSetExpansionHead[3];// Offset=0x10 Size=0x30
    struct _RTL_AVL_TREE HardLimitWalkers;// Offset=0x40 Size=0x8
    struct _MI_WORKING_SET_CONFIGURATION Config;// Offset=0x48 Size=0xf0
    struct _MI_WORKING_SET_AGING_CONTROL AgeControl;// Offset=0x138 Size=0x38
    struct _MI_WORKING_SET_TRIM_CONTROL TrimControl;// Offset=0x170 Size=0xa20
    struct _KEVENT Events[5];// Offset=0xb90 Size=0x78
    long PartitionListLock;// Offset=0xc08 Size=0x4
    char WorkingSetInitialized;// Offset=0xc0c Size=0x1
    long LowPriorityPassNeeded;// Offset=0xc10 Size=0x4
};
