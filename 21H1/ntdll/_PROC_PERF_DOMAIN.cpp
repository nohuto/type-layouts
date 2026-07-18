struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _PROC_PERF_QOS_CLASS_POLICY// Size=0x1c (Id=649)
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

struct _PERF_CONTROL_STATE_SELECTION// Size=0x28 (Id=650)
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

struct _PROC_PERF_DOMAIN// Size=0x268 (Id=624)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x8
    struct _PROC_PERF_CHECK_CONTEXT * Master;// Offset=0x8 Size=0x4
    struct _KAFFINITY_EX Members;// Offset=0xc Size=0x58
    unsigned long DomainContext;// Offset=0x64 Size=0x4
    unsigned long ProcessorCount;// Offset=0x68 Size=0x4
    unsigned char EfficiencyClass;// Offset=0x6c Size=0x1
    unsigned char NominalPerformanceClass;// Offset=0x6d Size=0x1
    unsigned char HighestPerformanceClass;// Offset=0x6e Size=0x1
    struct _PROC_PERF_CONSTRAINT * Processors;// Offset=0x70 Size=0x4
    void  ( * GetFFHThrottleState)(unsigned long long * );// Offset=0x74 Size=0x4
    void  ( * TimeWindowHandler)(unsigned long ,unsigned long );// Offset=0x78 Size=0x4
    void  ( * BoostPolicyHandler)(unsigned long ,unsigned long );// Offset=0x7c Size=0x4
    void  ( * BoostModeHandler)(unsigned long ,unsigned long );// Offset=0x80 Size=0x4
    void  ( * AutonomousActivityWindowHandler)(unsigned long ,unsigned long );// Offset=0x84 Size=0x4
    void  ( * AutonomousModeHandler)(unsigned long ,unsigned long );// Offset=0x88 Size=0x4
    void  ( * ReinitializeHandler)(unsigned long );// Offset=0x8c Size=0x4
    unsigned long  ( * PerfSelectionHandler)(unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long long * );// Offset=0x90 Size=0x4
    void  ( * PerfControlHandler)(unsigned long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x94 Size=0x4
    void  ( * DomainPerfControlHandler)(unsigned long ,struct _PERF_CONTROL_STATE_SELECTION * ,unsigned char ,unsigned char );// Offset=0x98 Size=0x4
    unsigned long MaxFrequency;// Offset=0x9c Size=0x4
    unsigned long NominalFrequency;// Offset=0xa0 Size=0x4
    unsigned long MaxPercent;// Offset=0xa4 Size=0x4
    unsigned long MinPerfPercent;// Offset=0xa8 Size=0x4
    unsigned long MinThrottlePercent;// Offset=0xac Size=0x4
    unsigned long AdvertizedMaximumFrequency;// Offset=0xb0 Size=0x4
    unsigned long long MinimumRelativePerformance;// Offset=0xb8 Size=0x8
    unsigned long long NominalRelativePerformance;// Offset=0xc0 Size=0x8
    unsigned char NominalRelativePerformancePercent;// Offset=0xc8 Size=0x1
    unsigned char Coordination;// Offset=0xc9 Size=0x1
    unsigned char HardPlatformCap;// Offset=0xca Size=0x1
    unsigned char AffinitizeControl;// Offset=0xcb Size=0x1
    unsigned char EfficientThrottle;// Offset=0xcc Size=0x1
    unsigned char AllowSchedulerDirectedPerfStates;// Offset=0xcd Size=0x1
    unsigned char InitiateAllProcessors;// Offset=0xce Size=0x1
    unsigned char AutonomousMode;// Offset=0xcf Size=0x1
    unsigned char ProvideGuidance;// Offset=0xd0 Size=0x1
    unsigned long DesiredPercent;// Offset=0xd4 Size=0x4
    unsigned long GuaranteedPercent;// Offset=0xd8 Size=0x4
    unsigned char EngageResponsivenessOverrides;// Offset=0xdc Size=0x1
    struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[5];// Offset=0xe0 Size=0x8c
    unsigned long QosDisableReasons[5];// Offset=0x16c Size=0x14
    unsigned short QosEquivalencyMasks[5];// Offset=0x180 Size=0xa
    unsigned char QosSupported;// Offset=0x18a Size=0x1
    unsigned long SelectionGeneration;// Offset=0x18c Size=0x4
    struct _PERF_CONTROL_STATE_SELECTION QosSelection[5];// Offset=0x190 Size=0xc8
    unsigned long long PerfChangeTime;// Offset=0x258 Size=0x8
    unsigned long PerfChangeIntervalCount;// Offset=0x260 Size=0x4
    unsigned char Force;// Offset=0x264 Size=0x1
    unsigned char Update;// Offset=0x265 Size=0x1
    unsigned char Apply;// Offset=0x266 Size=0x1
};
