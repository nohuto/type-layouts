struct _PROC_IDLE_POLICY// Size=0x6 (Id=558)
{
    unsigned char PromotePercent;// Offset=0x0 Size=0x1
    unsigned char DemotePercent;// Offset=0x1 Size=0x1
    unsigned char PromotePercentBase;// Offset=0x2 Size=0x1
    unsigned char DemotePercentBase;// Offset=0x3 Size=0x1
    unsigned char AllowScaling;// Offset=0x4 Size=0x1
    unsigned char ForceLightIdle;// Offset=0x5 Size=0x1
};

union _PPM_IDLE_SYNCHRONIZATION_STATE// Size=0x4 (Id=396)
{
    long AsLong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long RefCount:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long State:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PROC_FEEDBACK// Size=0x90 (Id=424)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long long CyclesLast;// Offset=0x8 Size=0x8
    unsigned long long CyclesActive;// Offset=0x10 Size=0x8
    struct _PROC_FEEDBACK_COUNTER * Counters[2];// Offset=0x18 Size=0x10
    unsigned long long LastUpdateTime;// Offset=0x28 Size=0x8
    unsigned long long UnscaledTime;// Offset=0x30 Size=0x8
    long long UnaccountedTime;// Offset=0x38 Size=0x8
    unsigned long long ScaledTime[2];// Offset=0x40 Size=0x10
    unsigned long long UnaccountedKernelTime;// Offset=0x50 Size=0x8
    unsigned long long PerformanceScaledKernelTime;// Offset=0x58 Size=0x8
    unsigned long UserTimeLast;// Offset=0x60 Size=0x4
    unsigned long KernelTimeLast;// Offset=0x64 Size=0x4
    unsigned long long IdleGenerationNumberLast;// Offset=0x68 Size=0x8
    unsigned long long HvActiveTimeLast;// Offset=0x70 Size=0x8
    unsigned long long StallCyclesLast;// Offset=0x78 Size=0x8
    unsigned long long StallTime;// Offset=0x80 Size=0x8
    unsigned char KernelTimesIndex;// Offset=0x88 Size=0x1
};

enum _PROC_HYPERVISOR_STATE
{
    ProcHypervisorNone=0,
    ProcHypervisorPresent=1,
    ProcHypervisorPower=2,
    ProcHypervisorHvCounters=3
};

struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=227)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=430)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=23)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=162)
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

struct _PROC_IDLE_SNAP// Size=0x10 (Id=531)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Idle;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_POWER_STATE// Size=0x1d8 (Id=398)
{
    struct _PPM_IDLE_STATES * IdleStates;// Offset=0x0 Size=0x8
    struct _PROC_IDLE_ACCOUNTING * IdleAccounting;// Offset=0x8 Size=0x8
    unsigned long long IdleTimeLast;// Offset=0x10 Size=0x8
    unsigned long long IdleTimeTotal;// Offset=0x18 Size=0x8
    unsigned long long IdleTimeEntry;// Offset=0x20 Size=0x8
    unsigned long long IdleTimeExpiration;// Offset=0x28 Size=0x8
    unsigned char NonInterruptibleTransition;// Offset=0x30 Size=0x1
    unsigned char PepWokenTransition;// Offset=0x31 Size=0x1
    unsigned char EfficiencyClass;// Offset=0x32 Size=0x1
    unsigned char SchedulingClass;// Offset=0x33 Size=0x1
    unsigned long TargetIdleState;// Offset=0x34 Size=0x4
    struct _PROC_IDLE_POLICY IdlePolicy;// Offset=0x38 Size=0x6
    union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;// Offset=0x40 Size=0x4
    struct _PROC_FEEDBACK PerfFeedback;// Offset=0x48 Size=0x90
    enum _PROC_HYPERVISOR_STATE Hypervisor;// Offset=0xd8 Size=0x4
    unsigned long LastSysTime;// Offset=0xdc Size=0x4
    unsigned long long WmiDispatchPtr;// Offset=0xe0 Size=0x8
    long WmiInterfaceEnabled;// Offset=0xe8 Size=0x4
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;// Offset=0xf0 Size=0x20
    struct _KDPC PerfActionDpc;// Offset=0x110 Size=0x40
    long PerfActionMask;// Offset=0x150 Size=0x4
    struct _PROC_IDLE_SNAP HvIdleCheck;// Offset=0x158 Size=0x10
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x168 Size=0x8
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x170 Size=0x8
    struct _PROC_PERF_CONSTRAINT * PerfConstraint;// Offset=0x178 Size=0x8
    struct _PPM_CONCURRENCY_ACCOUNTING * Concurrency;// Offset=0x180 Size=0x8
    struct _PPM_CONCURRENCY_ACCOUNTING * ClassConcurrency;// Offset=0x188 Size=0x8
    struct _PROC_PERF_LOAD * Load;// Offset=0x190 Size=0x8
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x198 Size=0x8
    unsigned char GuaranteedPerformancePercent;// Offset=0x1a0 Size=0x1
    unsigned char HvTargetState;// Offset=0x1a1 Size=0x1
    unsigned char Parked;// Offset=0x1a2 Size=0x1
    unsigned long LatestPerformancePercent;// Offset=0x1a4 Size=0x4
    unsigned long AveragePerformancePercent;// Offset=0x1a8 Size=0x4
    unsigned long LatestAffinitizedPercent;// Offset=0x1ac Size=0x4
    unsigned long RelativePerformance;// Offset=0x1b0 Size=0x4
    unsigned long Utility;// Offset=0x1b4 Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x1b8 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long SnapTimeLast;// Offset=0x1c0 Size=0x8
        unsigned long long EnergyConsumed;// Offset=0x1c0 Size=0x8
    };
    unsigned long long ActiveTime;// Offset=0x1c8 Size=0x8
    unsigned long long TotalTime;// Offset=0x1d0 Size=0x8
};
