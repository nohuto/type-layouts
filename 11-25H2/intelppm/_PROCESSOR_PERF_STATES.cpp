struct _KAFFINITY_EX// Size=0x108 (Id=65)
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

struct _PROCESSOR_PERF_STATES// Size=0x248 (Id=596)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned short Type;// Offset=0x4 Size=0x2
    unsigned char HardPlatformCap;// Offset=0x6 Size=0x1
    unsigned char AffinitizeControl;// Offset=0x7 Size=0x1
    unsigned char EfficientThrottle;// Offset=0x8 Size=0x1
    unsigned char EppViaPerfControl;// Offset=0x9 Size=0x1
    unsigned char AutonomousActivityWindowViaPerfControl;// Offset=0xa Size=0x1
    unsigned char AllowSchedulerDirectedPerfStates;// Offset=0xb Size=0x1
    unsigned char IdleProcessorVotesCount;// Offset=0xc Size=0x1
    unsigned char AllowVmPerfSelection;// Offset=0xd Size=0x1
    unsigned char CounterReadOptimize;// Offset=0xe Size=0x1
    unsigned char TurboRangeKnown;// Offset=0xf Size=0x1
    unsigned long ProcessorCount;// Offset=0x10 Size=0x4
    unsigned long NominalFrequency;// Offset=0x14 Size=0x4
    unsigned long MaxPerfPercent;// Offset=0x18 Size=0x4
    unsigned long MinPerfPercent;// Offset=0x1c Size=0x4
    unsigned long MinThrottlePercent;// Offset=0x20 Size=0x4
    unsigned long FeedbackCounterCount;// Offset=0x24 Size=0x4
    unsigned long MinimumPerfCheckPeriod;// Offset=0x28 Size=0x4
    unsigned long AdvertizedMaximumFrequency;// Offset=0x2c Size=0x4
    unsigned long QosHysteresis;// Offset=0x30 Size=0x4
    unsigned char AutonomousCapability;// Offset=0x34 Size=0x1
    unsigned long long MinimumRelativePerformance;// Offset=0x38 Size=0x8
    unsigned long long NominalRelativePerformance;// Offset=0x40 Size=0x8
    unsigned long VmFrequencyStepMhz;// Offset=0x48 Size=0x4
    unsigned long VmHighestFrequencyMhz;// Offset=0x4c Size=0x4
    unsigned long VmNominalFrequencyMhz;// Offset=0x50 Size=0x4
    unsigned long VmLowestFrequencyMhz;// Offset=0x54 Size=0x4
    unsigned long VmThrottlePriorityCount;// Offset=0x58 Size=0x4
    unsigned long long GlobalContext;// Offset=0x60 Size=0x8
    unsigned long long DomainContext;// Offset=0x68 Size=0x8
    struct _KAFFINITY_EX TargetProcessors;// Offset=0x70 Size=0x108
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x178 Size=0x8
    void  ( * TimeWindowHandler)(unsigned long long ,unsigned long );// Offset=0x180 Size=0x8
    void  ( * BoostPolicyHandler)(unsigned long long ,unsigned long );// Offset=0x188 Size=0x8
    void  ( * BoostModeHandler)(unsigned long long ,unsigned long );// Offset=0x190 Size=0x8
    void  ( * AutonomousActivityWindowHandler)(unsigned long long ,unsigned long );// Offset=0x198 Size=0x8
    void  ( * AutonomousModeHandler)(unsigned long long ,unsigned long );// Offset=0x1a0 Size=0x8
    long  ( * StartPolicyUpdate)();// Offset=0x1a8 Size=0x8
    long  ( * CompletePolicyUpdate)();// Offset=0x1b0 Size=0x8
    void  ( * ReinitializeHandler)(unsigned long long );// Offset=0x1b8 Size=0x8
    unsigned long  ( * PerfSelectionHandler)(unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long long * ,unsigned long long * );// Offset=0x1c0 Size=0x8
    long  ( * PerfPriorityHandler)(unsigned long long ,unsigned long ,unsigned long long * );// Offset=0x1c8 Size=0x8
    void  ( * PerfControlHandler)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x1d0 Size=0x8
    void  ( * PerfControlHandlerHidden)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x1d8 Size=0x8
    void  ( * DomainPerfControlHandler)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x1e0 Size=0x8
    void  ( * PerfControlReadFeedback)(void  ( * )());// Offset=0x1e8 Size=0x8
    void  ( * PerfControlAcquirePerformance)(void  ( * )());// Offset=0x1f0 Size=0x8
    void  ( * PerfControlCommitPerformance)(void  ( * )());// Offset=0x1f8 Size=0x8
    void  ( * PerfUpdateHwDebugData)(unsigned long long ,unsigned long long ,unsigned char );// Offset=0x200 Size=0x8
    unsigned long  ( * PerfQueryProcMeasurementCapabilities)();// Offset=0x208 Size=0x8
    long  ( * PerfQueryProcMeasurementValues)(unsigned long ,unsigned long * ,void * ,unsigned long );// Offset=0x210 Size=0x8
    void  ( * ParkPreference)(unsigned char ,unsigned long long ,unsigned long ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * ,struct _KAFFINITY_EX * );// Offset=0x218 Size=0x8
    void  ( * ParkMask)(unsigned long long ,struct _KAFFINITY_EX * );// Offset=0x220 Size=0x8
    void  ( * PerfCheckComplete)(unsigned long long ,unsigned long long );// Offset=0x228 Size=0x8
    struct _PROCESSOR_FEEDBACK_COUNTER * FeedbackCounters;// Offset=0x230 Size=0x8
    struct _PROCESSOR_PERF_INFO * Processors;// Offset=0x238 Size=0x8
    unsigned long long * CounterContexts;// Offset=0x240 Size=0x8
};
