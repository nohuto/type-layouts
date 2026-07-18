struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _PROCESSOR_IDLE_CONSTRAINTS// Size=0x30 (Id=680)
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

struct _PROCESSOR_IDLE_PREPARE_INFO// Size=0x50 (Id=709)
{
    void * Context;// Offset=0x0 Size=0x4
    struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;// Offset=0x8 Size=0x30
    unsigned long DependencyCount;// Offset=0x38 Size=0x4
    unsigned long DependencyUsed;// Offset=0x3c Size=0x4
    struct _PROCESSOR_IDLE_DEPENDENCY * DependencyArray;// Offset=0x40 Size=0x4
    unsigned long PlatformIdleStateIndex;// Offset=0x44 Size=0x4
    unsigned long ProcessorIdleStateIndex;// Offset=0x48 Size=0x4
    unsigned long IdleSelectFailureMask;// Offset=0x4c Size=0x4
};

struct _PPM_SELECTION_MENU// Size=0x8 (Id=694)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PPM_SELECTION_MENU_ENTRY * Entries;// Offset=0x4 Size=0x4
};

struct _PPM_COORDINATED_SELECTION// Size=0x10 (Id=718)
{
    unsigned long MaximumStates;// Offset=0x0 Size=0x4
    unsigned long SelectedStates;// Offset=0x4 Size=0x4
    unsigned long DefaultSelection;// Offset=0x8 Size=0x4
    unsigned long * Selection;// Offset=0xc Size=0x4
};

struct _UNICODE_STRING// Size=0x8 (Id=306)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x4 Size=0x4
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _PPM_VETO_ACCOUNTING// Size=0x18 (Id=722)
{
    long VetoPresent;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY VetoListHead;// Offset=0x4 Size=0x8
    unsigned char CsAccountingBlocks;// Offset=0xc Size=0x1
    unsigned char BlocksDrips;// Offset=0xd Size=0x1
    unsigned long PreallocatedVetoCount;// Offset=0x10 Size=0x4
    struct _PPM_VETO_ENTRY * PreallocatedVetoList;// Offset=0x14 Size=0x4
};

struct _PPM_IDLE_STATE// Size=0x90 (Id=683)
{
    struct _KAFFINITY_EX DomainMembers;// Offset=0x0 Size=0x58
    struct _UNICODE_STRING Name;// Offset=0x58 Size=0x8
    unsigned long Latency;// Offset=0x60 Size=0x4
    unsigned long BreakEvenDuration;// Offset=0x64 Size=0x4
    unsigned long Power;// Offset=0x68 Size=0x4
    unsigned long StateFlags;// Offset=0x6c Size=0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;// Offset=0x70 Size=0x18
    unsigned char StateType;// Offset=0x88 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x89 Size=0x1
    unsigned char Interruptible;// Offset=0x8a Size=0x1
    unsigned char ContextRetained;// Offset=0x8b Size=0x1
    unsigned char CacheCoherent;// Offset=0x8c Size=0x1
    unsigned char WakesSpuriously;// Offset=0x8d Size=0x1
    unsigned char PlatformOnly;// Offset=0x8e Size=0x1
    unsigned char NoCState;// Offset=0x8f Size=0x1
};

struct _PPM_IDLE_STATES// Size=0x280 (Id=638)
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
    struct _KAFFINITY_EX PrimaryProcessorMask;// Offset=0x48 Size=0x58
    struct _KAFFINITY_EX SecondaryProcessorMask;// Offset=0xa0 Size=0x58
    void  ( * IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO * );// Offset=0xf8 Size=0x4
    long  ( * IdlePreExecute)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0xfc Size=0x4
    long  ( * IdleExecute)(void * ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x100 Size=0x4
    unsigned long  ( * IdlePreselect)(void * ,struct _PROCESSOR_IDLE_CONSTRAINTS * );// Offset=0x104 Size=0x4
    unsigned long  ( * IdleTest)(void * ,unsigned long ,unsigned long );// Offset=0x108 Size=0x4
    unsigned long  ( * IdleAvailabilityCheck)(void * ,unsigned long );// Offset=0x10c Size=0x4
    void  ( * IdleComplete)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x110 Size=0x4
    void  ( * IdleCancel)(void * ,unsigned long );// Offset=0x114 Size=0x4
    unsigned char  ( * IdleIsHalted)(void * );// Offset=0x118 Size=0x4
    unsigned char  ( * IdleInitiateWake)(void * );// Offset=0x11c Size=0x4
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;// Offset=0x120 Size=0x50
    struct _KAFFINITY_EX DeepIdleSnapshot;// Offset=0x170 Size=0x58
    struct _PERFINFO_PPM_STATE_SELECTION * Tracing;// Offset=0x1c8 Size=0x4
    struct _PERFINFO_PPM_STATE_SELECTION * CoordinatedTracing;// Offset=0x1cc Size=0x4
    struct _PPM_SELECTION_MENU ProcessorMenu;// Offset=0x1d0 Size=0x8
    struct _PPM_SELECTION_MENU CoordinatedMenu;// Offset=0x1d8 Size=0x8
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;// Offset=0x1e0 Size=0x10
    struct _PPM_IDLE_STATE State[1];// Offset=0x1f0 Size=0x90
};
