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

struct _PROCESSOR_IDLE_CONSTRAINTS// Size=0x30 (Id=814)
{
    unsigned long long TotalTime;// Offset=0x0 Size=0x8
    unsigned long long IdleTime;// Offset=0x8 Size=0x8
    unsigned long long ExpectedIdleDuration;// Offset=0x10 Size=0x8
    unsigned long long MaxIdleDuration;// Offset=0x18 Size=0x8
    unsigned long OverrideState;// Offset=0x20 Size=0x4
    unsigned long TimeCheck;// Offset=0x24 Size=0x4
    unsigned char PromotePercent;// Offset=0x28 Size=0x1
    unsigned char DemotePercent;// Offset=0x29 Size=0x1
    unsigned char Parked;// Offset=0x2a Size=0x1
    unsigned char Interruptible;// Offset=0x2b Size=0x1
    unsigned char PlatformIdle;// Offset=0x2c Size=0x1
    unsigned char ExpectedWakeReason;// Offset=0x2d Size=0x1
    unsigned char IdleStateMax;// Offset=0x2e Size=0x1
};

struct _PPM_SELECTION_MENU// Size=0x10 (Id=858)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU_ENTRY * Entries;// Offset=0x8 Size=0x8
};

struct _PPM_COORDINATED_SELECTION// Size=0x18 (Id=875)
{
    unsigned long MaximumStates;// Offset=0x0 Size=0x4
    unsigned long SelectedStates;// Offset=0x4 Size=0x4
    unsigned long DefaultSelection;// Offset=0x8 Size=0x4
    unsigned long * Selection;// Offset=0x10 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=249)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ACCOUNTING// Size=0x28 (Id=880)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x8 Size=0x10
    unsigned char CsAccountingBlocks;// Offset=0x18 Size=0x1
    unsigned char BlocksDrips;// Offset=0x19 Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x1c Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x20 Size=0x8
};

struct _PPM_IDLE_STATE// Size=0x158 (Id=844)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0x108
    struct _UNICODE_STRING Name;// Offset=0x108 Size=0x10
    unsigned long Latency;// Offset=0x118 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x11c Size=0x4
    unsigned long Power;// Offset=0x120 Size=0x4
    unsigned long StateFlags;// Offset=0x124 Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0x128 Size=0x28
    unsigned char StateType;// Offset=0x150 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x151 Size=0x1
    unsigned char Interruptible;// Offset=0x152 Size=0x1
    unsigned char ContextRetained;// Offset=0x153 Size=0x1
    unsigned char CacheCoherent;// Offset=0x154 Size=0x1
    unsigned char WakesSpuriously;// Offset=0x155 Size=0x1
    unsigned char PlatformOnly;// Offset=0x156 Size=0x1
    unsigned char NoCState;// Offset=0x157 Size=0x1
};

struct _PPM_IDLE_STATES// Size=0x578 (Id=791)
{
    unsigned char EnforceStateConstraints;// Offset=0x0 Size=0x1
    unsigned char IdleOverride;// Offset=0x1 Size=0x1
    unsigned char EstimateIdleDuration;// Offset=0x2 Size=0x1
    unsigned char ExitLatencyTraceEnabled;// Offset=0x3 Size=0x1
    unsigned char NonInterruptibleTransition;// Offset=0x4 Size=0x1
    unsigned char UnaccountedTransition;// Offset=0x5 Size=0x1
    unsigned char IdleDurationLimited;// Offset=0x6 Size=0x1
    unsigned char IdleCheckLimited;// Offset=0x7 Size=0x1
    unsigned long long IdleReevaluationDuration;// Offset=0x8 Size=0x8
    unsigned char StrictVetoBias;// Offset=0x10 Size=0x1
    unsigned long ExitLatencyCountdown;// Offset=0x14 Size=0x4
    unsigned long TargetState;// Offset=0x18 Size=0x4
    unsigned long ActualState;// Offset=0x1c Size=0x4
    unsigned long OldState;// Offset=0x20 Size=0x4
    unsigned long OverrideIndex;// Offset=0x24 Size=0x4
    unsigned long ProcessorIdleCount;// Offset=0x28 Size=0x4
    unsigned long Type;// Offset=0x2c Size=0x4
    unsigned long long LevelId;// Offset=0x30 Size=0x8
    unsigned short ReasonFlags;// Offset=0x38 Size=0x2
    long PreviousStatus;// Offset=0x3c Size=0x4
    unsigned char PreviouslyCancelled;// Offset=0x40 Size=0x1
    unsigned char PreviouslyDeniedCount;// Offset=0x41 Size=0x1
    struct _KAFFINITY_EX PrimaryProcessorMask;// Offset=0x48 Size=0x108
    struct _KAFFINITY_EX SecondaryProcessorMask;// Offset=0x150 Size=0x108
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x258 Size=0x8
    long  ( * IdleExecute)(void * ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x260 Size=0x8
    unsigned long  ( * IdlePreselect)(void * ,struct _PROCESSOR_IDLE_CONSTRAINTS * );// Offset=0x268 Size=0x8
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x270 Size=0x8
    unsigned long  ( * IdleAvailabilityCheck)(void * ,unsigned long );// Offset=0x278 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x280 Size=0x8
    unsigned char  ( * IdleIsHalted)(void * );// Offset=0x288 Size=0x8
    unsigned char  ( * IdleInitiateWake)(void * );// Offset=0x290 Size=0x8
    void * Context;// Offset=0x298 Size=0x8
    struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;// Offset=0x2a0 Size=0x30
    struct _KAFFINITY_EX DeepIdleSnapshot;// Offset=0x2d0 Size=0x108
    struct _PERFINFO_PPM_STATE_SELECTION * Tracing;// Offset=0x3d8 Size=0x8
    struct _PERFINFO_PPM_STATE_SELECTION * CoordinatedTracing;// Offset=0x3e0 Size=0x8
    struct _PPM_SELECTION_MENU ProcessorMenu;// Offset=0x3e8 Size=0x10
    struct _PPM_SELECTION_MENU CoordinatedMenu;// Offset=0x3f8 Size=0x10
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;// Offset=0x408 Size=0x18
    struct _PPM_IDLE_STATE State[1];// Offset=0x420 Size=0x158
};
