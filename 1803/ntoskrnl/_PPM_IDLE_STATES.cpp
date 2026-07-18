struct _KAFFINITY_EX// Size=0xa8 (Id=59)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESSOR_IDLE_CONSTRAINTS// Size=0x30 (Id=679)
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

struct _PROCESSOR_IDLE_PREPARE_INFO// Size=0x58 (Id=1198)
{
    void * Context;// Offset=0x0 Size=0x8
    struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;// Offset=0x8 Size=0x30
    unsigned long DependencyCount;// Offset=0x38 Size=0x4
    unsigned long DependencyUsed;// Offset=0x3c Size=0x4
    struct _PROCESSOR_IDLE_DEPENDENCY * DependencyArray;// Offset=0x40 Size=0x8
    unsigned long PlatformIdleStateIndex;// Offset=0x48 Size=0x4
    unsigned long ProcessorIdleStateIndex;// Offset=0x4c Size=0x4
    unsigned long IdleSelectFailureMask;// Offset=0x50 Size=0x4
};

struct _PPM_SELECTION_MENU// Size=0x10 (Id=959)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU_ENTRY * Entries;// Offset=0x8 Size=0x8
};

struct _PPM_COORDINATED_SELECTION// Size=0x18 (Id=1331)
{
    unsigned long MaximumStates;// Offset=0x0 Size=0x4
    unsigned long SelectedStates;// Offset=0x4 Size=0x4
    unsigned long DefaultSelection;// Offset=0x8 Size=0x4
    unsigned long * Selection;// Offset=0x10 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ACCOUNTING// Size=0x28 (Id=1424)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x8 Size=0x10
    unsigned char CsAccountingBlocks;// Offset=0x18 Size=0x1
    unsigned char BlocksDrips;// Offset=0x19 Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x1c Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x20 Size=0x8
};

struct _PPM_IDLE_STATE// Size=0xf8 (Id=717)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0xa8
    struct _UNICODE_STRING Name;// Offset=0xa8 Size=0x10
    unsigned long Latency;// Offset=0xb8 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0xbc Size=0x4
    unsigned long Power;// Offset=0xc0 Size=0x4
    unsigned long StateFlags;// Offset=0xc4 Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0xc8 Size=0x28
    unsigned char StateType;// Offset=0xf0 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0xf1 Size=0x1
    unsigned char Interruptible;// Offset=0xf2 Size=0x1
    unsigned char ContextRetained;// Offset=0xf3 Size=0x1
    unsigned char CacheCoherent;// Offset=0xf4 Size=0x1
    unsigned char WakesSpuriously;// Offset=0xf5 Size=0x1
    unsigned char PlatformOnly;// Offset=0xf6 Size=0x1
    unsigned char NoCState;// Offset=0xf7 Size=0x1
};

struct _PPM_IDLE_STATES// Size=0x428 (Id=603)
{
    unsigned char InterfaceVersion;// Offset=0x0 Size=0x1
    unsigned char IdleOverride;// Offset=0x1 Size=0x1
    unsigned char EstimateIdleDuration;// Offset=0x2 Size=0x1
    unsigned char ExitLatencyTraceEnabled;// Offset=0x3 Size=0x1
    unsigned char NonInterruptibleTransition;// Offset=0x4 Size=0x1
    unsigned char UnaccountedTransition;// Offset=0x5 Size=0x1
    unsigned char IdleDurationLimited;// Offset=0x6 Size=0x1
    unsigned char IdleCheckLimited;// Offset=0x7 Size=0x1
    unsigned char StrictVetoBias;// Offset=0x8 Size=0x1
    unsigned long ExitLatencyCountdown;// Offset=0xc Size=0x4
    unsigned long TargetState;// Offset=0x10 Size=0x4
    unsigned long ActualState;// Offset=0x14 Size=0x4
    unsigned long OldState;// Offset=0x18 Size=0x4
    unsigned long OverrideIndex;// Offset=0x1c Size=0x4
    unsigned long ProcessorIdleCount;// Offset=0x20 Size=0x4
    unsigned long Type;// Offset=0x24 Size=0x4
    unsigned long long LevelId;// Offset=0x28 Size=0x8
    unsigned short ReasonFlags;// Offset=0x30 Size=0x2
    unsigned long long InitiateWakeStamp;// Offset=0x38 Size=0x8
    long PreviousStatus;// Offset=0x40 Size=0x4
    unsigned long PreviousCancelReason;// Offset=0x44 Size=0x4
    struct _KAFFINITY_EX PrimaryProcessorMask;// Offset=0x48 Size=0xa8
    struct _KAFFINITY_EX SecondaryProcessorMask;// Offset=0xf0 Size=0xa8
    void  ( * IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO * );// Offset=0x198 Size=0x8
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x1a0 Size=0x8
    long  ( * IdleExecute)(void * ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x1a8 Size=0x8
    unsigned long  ( * IdlePreselect)(void * ,struct _PROCESSOR_IDLE_CONSTRAINTS * );// Offset=0x1b0 Size=0x8
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x1b8 Size=0x8
    unsigned long  ( * IdleAvailabilityCheck)(void * ,unsigned long );// Offset=0x1c0 Size=0x8
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x1c8 Size=0x8
    void  ( * IdleCancel)(void * ,unsigned long );// Offset=0x1d0 Size=0x8
    unsigned char  ( * IdleIsHalted)(void * );// Offset=0x1d8 Size=0x8
    unsigned char  ( * IdleInitiateWake)(void * );// Offset=0x1e0 Size=0x8
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;// Offset=0x1e8 Size=0x58
    struct _KAFFINITY_EX DeepIdleSnapshot;// Offset=0x240 Size=0xa8
    struct _PERFINFO_PPM_STATE_SELECTION * Tracing;// Offset=0x2e8 Size=0x8
    struct _PERFINFO_PPM_STATE_SELECTION * CoordinatedTracing;// Offset=0x2f0 Size=0x8
    struct _PPM_SELECTION_MENU ProcessorMenu;// Offset=0x2f8 Size=0x10
    struct _PPM_SELECTION_MENU CoordinatedMenu;// Offset=0x308 Size=0x10
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;// Offset=0x318 Size=0x18
    struct _PPM_IDLE_STATE State[1];// Offset=0x330 Size=0xf8
};
