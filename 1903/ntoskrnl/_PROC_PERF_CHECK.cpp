struct _PROC_PERF_CHECK_SNAP// Size=0x58 (Id=1857)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Active;// Offset=0x8 Size=0x8
    unsigned long long Stall;// Offset=0x10 Size=0x8
    unsigned long long FrequencyScaledActive;// Offset=0x18 Size=0x8
    unsigned long long PerformanceScaledActive;// Offset=0x20 Size=0x8
    unsigned long long PerformanceScaledKernelActive;// Offset=0x28 Size=0x8
    unsigned long long CyclesActive;// Offset=0x30 Size=0x8
    unsigned long long CyclesAffinitized;// Offset=0x38 Size=0x8
    unsigned long long TaggedThreadCycles[2];// Offset=0x40 Size=0x10
    unsigned long ResponsivenessEvents;// Offset=0x50 Size=0x4
};

struct _PROC_PERF_CHECK// Size=0x138 (Id=1682)
{
    unsigned long long LastActive;// Offset=0x0 Size=0x8
    unsigned long long LastTime;// Offset=0x8 Size=0x8
    unsigned long long LastStall;// Offset=0x10 Size=0x8
    unsigned long LastResponsivenessEvents;// Offset=0x18 Size=0x4
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;// Offset=0x20 Size=0x58
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;// Offset=0x78 Size=0x58
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;// Offset=0xd0 Size=0x58
    unsigned long LastDeliveredPerformance;// Offset=0x128 Size=0x4
    unsigned long LastDeliveredFrequency;// Offset=0x12c Size=0x4
    unsigned char TaggedThreadPercent[2];// Offset=0x130 Size=0x2
    unsigned char Class0FloorPerfSelection;// Offset=0x132 Size=0x1
    unsigned char Class1MinimumPerfSelection;// Offset=0x133 Size=0x1
    unsigned long CurrentResponsivenessEvents;// Offset=0x134 Size=0x4
};
