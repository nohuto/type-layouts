enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PERF_CONTROL_STATE_SELECTION// Size=0x50 (Id=2387)
{
    unsigned long long SelectedState;// Offset=0x0 Size=0x8
    unsigned long long SelectedResourcePriority;// Offset=0x8 Size=0x8
    unsigned long SelectedPercent;// Offset=0x10 Size=0x4
    unsigned long SelectedFrequency;// Offset=0x14 Size=0x4
    unsigned long MinPercent;// Offset=0x18 Size=0x4
    unsigned long MaxPercent;// Offset=0x1c Size=0x4
    unsigned long TolerancePercent;// Offset=0x20 Size=0x4
    unsigned long EppPercent;// Offset=0x24 Size=0x4
    unsigned long AutonomousActivityWindow;// Offset=0x28 Size=0x4
    unsigned long ResourcePriorityPercent;// Offset=0x2c Size=0x4
    unsigned long TranslatedDesired;// Offset=0x30 Size=0x4
    unsigned long TranslatedMinimum;// Offset=0x34 Size=0x4
    unsigned long TranslatedMaximum;// Offset=0x38 Size=0x4
    unsigned long TranslatedTolerance;// Offset=0x3c Size=0x4
    unsigned long TranslatedEpp;// Offset=0x40 Size=0x4
    unsigned long TranslatedActivityWindow;// Offset=0x44 Size=0x4
    unsigned char Autonomous;// Offset=0x48 Size=0x1
    unsigned char InheritFromDomain;// Offset=0x49 Size=0x1
    unsigned char BoostDisabled;// Offset=0x4a Size=0x1
};

struct _PPM_PERF_SNAPSHOT// Size=0x80 (Id=2587)
{
    unsigned long Initiator;// Offset=0x0 Size=0x4
    unsigned char LogType;// Offset=0x4 Size=0x1
    unsigned char Reset;// Offset=0x5 Size=0x1
    unsigned char Remote;// Offset=0x6 Size=0x1
    unsigned long long InterruptTime;// Offset=0x8 Size=0x8
    unsigned long long RawUnscaledTime;// Offset=0x10 Size=0x8
    unsigned long long TotalUnscaleTime;// Offset=0x18 Size=0x8
    unsigned long CachedScalingFactor[2];// Offset=0x20 Size=0x8
    unsigned long long RawReferenceCount[2];// Offset=0x28 Size=0x10
    unsigned long long RawActualCount[2];// Offset=0x38 Size=0x10
    unsigned long long RawScaledTime[2];// Offset=0x48 Size=0x10
    unsigned long long TotalScaleTime[2];// Offset=0x58 Size=0x10
    unsigned long long HvCurrentTime;// Offset=0x68 Size=0x8
    unsigned long long IdleAccumulation;// Offset=0x70 Size=0x8
    unsigned long Value[2];// Offset=0x78 Size=0x8
};

struct _PROC_PERF_CONSTRAINT// Size=0x4c8 (Id=2478)
{
    struct _PROC_PERF_CHECK_CONTEXT * CheckContext;// Offset=0x0 Size=0x8
    unsigned long long PerfContext;// Offset=0x8 Size=0x8
    enum _PROCESSOR_PRESENCE Presence;// Offset=0x10 Size=0x4
    unsigned long ProcessorId;// Offset=0x14 Size=0x4
    unsigned long PlatformCap;// Offset=0x18 Size=0x4
    unsigned long ThermalCap;// Offset=0x1c Size=0x4
    unsigned long LimitReasons;// Offset=0x20 Size=0x4
    unsigned long long PlatformCapStartTime;// Offset=0x28 Size=0x8
    unsigned long ProcCap;// Offset=0x30 Size=0x4
    unsigned long ProcFloor;// Offset=0x34 Size=0x4
    unsigned long TargetPercent;// Offset=0x38 Size=0x4
    unsigned char EngageResponsivenessOverrides;// Offset=0x3c Size=0x1
    unsigned char ResponsivenessChangeCount;// Offset=0x3d Size=0x1
    struct _PERF_CONTROL_STATE_SELECTION Selection;// Offset=0x40 Size=0x50
    unsigned long DomainSelectionGeneration;// Offset=0x90 Size=0x4
    unsigned long CurrentFrequencyPercent;// Offset=0x94 Size=0x4
    unsigned long PreviousFrequency;// Offset=0x98 Size=0x4
    unsigned long PreviousPercent;// Offset=0x9c Size=0x4
    unsigned long LatestFrequencyPercent;// Offset=0xa0 Size=0x4
    unsigned long LatestPerformancePercent;// Offset=0xa4 Size=0x4
    unsigned char Force;// Offset=0xa8 Size=0x1
    unsigned char UseQosUpdateLock;// Offset=0xa9 Size=0x1
    unsigned long long QosUpdateLock;// Offset=0xb0 Size=0x8
    unsigned long CurrentLogEntry;// Offset=0xb8 Size=0x4
    struct _PPM_PERF_SNAPSHOT SnapshotLog[8];// Offset=0xc0 Size=0x400
    unsigned long IncreasePerfCheckCount;// Offset=0x4c0 Size=0x4
    unsigned long DecreasePerfCheckCount;// Offset=0x4c4 Size=0x4
};
