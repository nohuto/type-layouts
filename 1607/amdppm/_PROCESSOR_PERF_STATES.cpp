struct _KAFFINITY_EX// Size=0xa8 (Id=444)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESSOR_PERF_STATES// Size=0x1a0 (Id=447)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned short Type;// Offset=0x4 Size=0x2
    unsigned char HardPlatformCap;// Offset=0x6 Size=0x1
    unsigned char AffinitizeControl;// Offset=0x7 Size=0x1
    unsigned char EfficientThrottle;// Offset=0x8 Size=0x1
    unsigned long ProcessorCount;// Offset=0xc Size=0x4
    unsigned long NominalFrequency;// Offset=0x10 Size=0x4
    unsigned long MaxPerfPercent;// Offset=0x14 Size=0x4
    unsigned long MinPerfPercent;// Offset=0x18 Size=0x4
    unsigned long MinThrottlePercent;// Offset=0x1c Size=0x4
    unsigned long FeedbackCounterCount;// Offset=0x20 Size=0x4
    unsigned long MinimumPerfCheckPeriod;// Offset=0x24 Size=0x4
    unsigned char AutonomousMode;// Offset=0x28 Size=0x1
    unsigned long long MinimumRelativePerformance;// Offset=0x30 Size=0x8
    unsigned long long NominalRelativePerformance;// Offset=0x38 Size=0x8
    unsigned long long GlobalContext;// Offset=0x40 Size=0x8
    struct _KAFFINITY_EX TargetProcessors;// Offset=0x48 Size=0xa8
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0xf0 Size=0x8
    void  ( * TimeWindowHandler)(unsigned long long ,unsigned long );// Offset=0xf8 Size=0x8
    void  ( * BoostPolicyHandler)(unsigned long long ,unsigned long );// Offset=0x100 Size=0x8
    void  ( * BoostModeHandler)(unsigned long long ,unsigned long );// Offset=0x108 Size=0x8
    void  ( * EnergyPerfPreferenceHandler)(unsigned long long ,unsigned long );// Offset=0x110 Size=0x8
    void  ( * AutonomousActivityWindowHandler)(unsigned long long ,unsigned long );// Offset=0x118 Size=0x8
    void  ( * AutonomousModeHandler)(unsigned long long ,unsigned long );// Offset=0x120 Size=0x8
    long  ( * StartPolicyUpdate)();// Offset=0x128 Size=0x8
    long  ( * CompletePolicyUpdate)();// Offset=0x130 Size=0x8
    void  ( * ReinitializeHandler)(unsigned long long );// Offset=0x138 Size=0x8
    unsigned long  ( * PerfSelectionHandler)(unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long long * );// Offset=0x140 Size=0x8
    void  ( * PerfControlHandler)(unsigned long long ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned char ,unsigned char ,unsigned char );// Offset=0x148 Size=0x8
    void  ( * PerfControlHandlerHidden)(unsigned long long ,unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned char ,unsigned char ,unsigned char );// Offset=0x150 Size=0x8
    void  ( * PerfControlReadFeedback)(void  ( * )());// Offset=0x158 Size=0x8
    void  ( * PerfControlAcquirePerformance)(void  ( * )());// Offset=0x160 Size=0x8
    void  ( * PerfControlCommitPerformance)(void  ( * )());// Offset=0x168 Size=0x8
    void  ( * ParkPreference)(unsigned char ,unsigned long long ,unsigned long ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * );// Offset=0x170 Size=0x8
    void  ( * ParkMask)(unsigned long long ,struct _KAFFINITY_EX * );// Offset=0x178 Size=0x8
    void  ( * PerfCheckComplete)(unsigned long long ,unsigned long long );// Offset=0x180 Size=0x8
    struct _PROCESSOR_FEEDBACK_COUNTER * FeedbackCounters;// Offset=0x188 Size=0x8
    struct _PROCESSOR_PERF_INFO * Processors;// Offset=0x190 Size=0x8
    unsigned long long * CounterContexts;// Offset=0x198 Size=0x8
};
