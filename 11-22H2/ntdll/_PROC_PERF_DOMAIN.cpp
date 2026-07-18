struct _LIST_ENTRY// Size=0x10 (Id=34)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=85)
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

enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PROC_PERF_QOS_CLASS_POLICY// Size=0x1c (Id=718)
{
    unsigned long MaxPolicyPercent;// Offset=0x0 Size=0x4
    unsigned long MaxEquivalentFrequencyPercent;// Offset=0x4 Size=0x4
    unsigned long MinPolicyPercent;// Offset=0x8 Size=0x4
    unsigned long AutonomousActivityWindow;// Offset=0xc Size=0x4
    unsigned long EnergyPerfPreference;// Offset=0x10 Size=0x4
    unsigned char ProvideGuidance;// Offset=0x14 Size=0x1
    unsigned char AllowThrottling;// Offset=0x15 Size=0x1
    unsigned char PerfBoostMode;// Offset=0x16 Size=0x1
    unsigned char LatencyHintPerf;// Offset=0x17 Size=0x1
    unsigned char TrackDesiredCrossClass;// Offset=0x18 Size=0x1
};

struct _PERF_CONTROL_STATE_SELECTION// Size=0x28 (Id=719)
{
    unsigned long long SelectedState;// Offset=0x0 Size=0x8
    unsigned long SelectedPercent;// Offset=0x8 Size=0x4
    unsigned long SelectedFrequency;// Offset=0xc Size=0x4
    unsigned long MinPercent;// Offset=0x10 Size=0x4
    unsigned long MaxPercent;// Offset=0x14 Size=0x4
    unsigned long TolerancePercent;// Offset=0x18 Size=0x4
    unsigned long EppPercent;// Offset=0x1c Size=0x4
    unsigned long AutonomousActivityWindow;// Offset=0x20 Size=0x4
    unsigned char Autonomous;// Offset=0x24 Size=0x1
    unsigned char InheritFromDomain;// Offset=0x25 Size=0x1
};

struct _PROC_PERF_DOMAIN// Size=0x428 (Id=685)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _PROC_PERF_CHECK_CONTEXT * Master;// Offset=0x10 Size=0x8
    struct _KAFFINITY_EX Members;// Offset=0x18 Size=0x108
    unsigned long long DomainContext;// Offset=0x120 Size=0x8
    unsigned long ProcessorCount;// Offset=0x128 Size=0x4
    unsigned char EfficiencyClass;// Offset=0x12c Size=0x1
    unsigned char NominalPerformanceClass;// Offset=0x12d Size=0x1
    unsigned char HighestPerformanceClass;// Offset=0x12e Size=0x1
    enum _PROCESSOR_PRESENCE Presence;// Offset=0x130 Size=0x4
    struct _PROC_PERF_CONSTRAINT * Processors;// Offset=0x138 Size=0x8
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x140 Size=0x8
    void  ( * TimeWindowHandler)(unsigned long long ,unsigned long );// Offset=0x148 Size=0x8
    void  ( * BoostPolicyHandler)(unsigned long long ,unsigned long );// Offset=0x150 Size=0x8
    void  ( * BoostModeHandler)(unsigned long long ,unsigned long );// Offset=0x158 Size=0x8
    void  ( * AutonomousActivityWindowHandler)(unsigned long long ,unsigned long );// Offset=0x160 Size=0x8
    void  ( * AutonomousModeHandler)(unsigned long long ,unsigned long );// Offset=0x168 Size=0x8
    void  ( * ReinitializeHandler)(unsigned long long );// Offset=0x170 Size=0x8
    unsigned long  ( * PerfSelectionHandler)(unsigned long long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long long * );// Offset=0x178 Size=0x8
    void  ( * PerfControlHandler)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x180 Size=0x8
    void  ( * PerfControlHandlerHidden)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x188 Size=0x8
    void  ( * DomainPerfControlHandler)(unsigned long long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x190 Size=0x8
    void  ( * PerfUpdateHwDebugData)(unsigned long long ,unsigned long long ,unsigned char );// Offset=0x198 Size=0x8
    unsigned long  ( * PerfQueryProcMeasurementCapabilities)();// Offset=0x1a0 Size=0x8
    long  ( * PerfQueryProcMeasurementValues)(unsigned long ,unsigned long * ,void * ,unsigned long );// Offset=0x1a8 Size=0x8
    unsigned long Id;// Offset=0x1b0 Size=0x4
    unsigned long MaxFrequency;// Offset=0x1b4 Size=0x4
    unsigned long NominalFrequency;// Offset=0x1b8 Size=0x4
    unsigned long MaxPercent;// Offset=0x1bc Size=0x4
    unsigned long MinPerfPercent;// Offset=0x1c0 Size=0x4
    unsigned long MinThrottlePercent;// Offset=0x1c4 Size=0x4
    unsigned long AdvertizedMaximumFrequency;// Offset=0x1c8 Size=0x4
    unsigned long long MinimumRelativePerformance;// Offset=0x1d0 Size=0x8
    unsigned long long NominalRelativePerformance;// Offset=0x1d8 Size=0x8
    unsigned char NominalRelativePerformancePercent;// Offset=0x1e0 Size=0x1
    unsigned char Coordination;// Offset=0x1e1 Size=0x1
    unsigned char HardPlatformCap;// Offset=0x1e2 Size=0x1
    unsigned char AffinitizeControl;// Offset=0x1e3 Size=0x1
    unsigned char EfficientThrottle;// Offset=0x1e4 Size=0x1
    unsigned char AllowSchedulerDirectedPerfStates;// Offset=0x1e5 Size=0x1
    unsigned char InitiateAllProcessors;// Offset=0x1e6 Size=0x1
    unsigned char AllowVmPerfSelection;// Offset=0x1e7 Size=0x1
    unsigned long VmFrequencyStepMhz;// Offset=0x1e8 Size=0x4
    unsigned long VmHighestFrequencyMhz;// Offset=0x1ec Size=0x4
    unsigned long VmNominalFrequencyMhz;// Offset=0x1f0 Size=0x4
    unsigned long VmLowestFrequencyMhz;// Offset=0x1f4 Size=0x4
    unsigned char AutonomousMode;// Offset=0x1f8 Size=0x1
    unsigned char AutonomousCapability;// Offset=0x1f9 Size=0x1
    unsigned char ProvideGuidance;// Offset=0x1fa Size=0x1
    unsigned long DesiredPercent;// Offset=0x1fc Size=0x4
    unsigned long GuaranteedPercent;// Offset=0x200 Size=0x4
    unsigned char EngageResponsivenessOverrides;// Offset=0x204 Size=0x1
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[7];// Offset=0x208 Size=0xc4
    unsigned long QosDisableReasons[7];// Offset=0x2cc Size=0x1c
    unsigned short QosEquivalencyMasks[7];// Offset=0x2e8 Size=0xe
    unsigned char QosSupported;// Offset=0x2f6 Size=0x1
    unsigned long SelectionGeneration;// Offset=0x2f8 Size=0x4
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[7];// Offset=0x300 Size=0x118
    unsigned long long PerfChangeTime;// Offset=0x418 Size=0x8
    unsigned long PerfChangeIntervalCount;// Offset=0x420 Size=0x4
    unsigned char Force;// Offset=0x424 Size=0x1
    unsigned char Update;// Offset=0x425 Size=0x1
    unsigned char Apply;// Offset=0x426 Size=0x1
};
