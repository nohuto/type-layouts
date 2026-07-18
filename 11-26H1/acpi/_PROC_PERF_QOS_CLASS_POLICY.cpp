struct _PROC_PERF_QOS_CLASS_POLICY// Size=0x28 (Id=704)
{
    unsigned long MaxPolicyPercent;// Offset=0x0 Size=0x4
    unsigned long MaxEquivalentFrequencyPercent;// Offset=0x4 Size=0x4
    unsigned long MinPolicyPercent;// Offset=0x8 Size=0x4
    unsigned long MinEquivalentFrequencyPercent;// Offset=0xc Size=0x4
    unsigned long AutonomousActivityWindow;// Offset=0x10 Size=0x4
    unsigned long EnergyPerfPreference;// Offset=0x14 Size=0x4
    unsigned char ProvideGuidance;// Offset=0x18 Size=0x1
    unsigned char AllowThrottling;// Offset=0x19 Size=0x1
    unsigned char PerfBoostMode;// Offset=0x1a Size=0x1
    unsigned char LatencyHintPerf;// Offset=0x1b Size=0x1
    unsigned long LatencyHintEquivalentFrequencyPercent;// Offset=0x1c Size=0x4
    unsigned char LatencyHintEpp;// Offset=0x20 Size=0x1
    unsigned char TrackDesiredCrossClass;// Offset=0x21 Size=0x1
    unsigned long ResourcePriority;// Offset=0x24 Size=0x4
};
