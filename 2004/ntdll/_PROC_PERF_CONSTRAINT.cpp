enum _PROCESSOR_PRESENCE
{
    ProcessorPresenceNt=0,
    ProcessorPresenceHv=1,
    ProcessorPresenceHidden=2
};

struct _PERF_CONTROL_STATE_SELECTION// Size=0x28 (Id=677)
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

struct _PROC_PERF_CONSTRAINT// Size=0x88 (Id=710)
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
    struct _PERF_CONTROL_STATE_SELECTION Selection;// Offset=0x40 Size=0x28
    unsigned long DomainSelectionGeneration;// Offset=0x68 Size=0x4
    unsigned long PreviousFrequency;// Offset=0x6c Size=0x4
    unsigned long PreviousPercent;// Offset=0x70 Size=0x4
    unsigned long LatestFrequencyPercent;// Offset=0x74 Size=0x4
    unsigned long LatestPerformancePercent;// Offset=0x78 Size=0x4
    unsigned char Force;// Offset=0x7c Size=0x1
    unsigned char UseQosUpdateLock;// Offset=0x7d Size=0x1
    unsigned long long QosUpdateLock;// Offset=0x80 Size=0x8
};
