struct _PROC_PERF_CHECK_SNAP// Size=0x60 (Id=719)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Active;// Offset=0x8 Size=0x8
    unsigned long long Stall;// Offset=0x10 Size=0x8
    unsigned long long FrequencyScaledActive;// Offset=0x18 Size=0x8
    unsigned long long PerformanceScaledActive;// Offset=0x20 Size=0x8
    unsigned long long PerformanceScaledKernelActive;// Offset=0x28 Size=0x8
    unsigned long long CyclesActive;// Offset=0x30 Size=0x8
    unsigned long long CyclesAffinitized;// Offset=0x38 Size=0x8
    unsigned long long TaggedThreadCycles[3];// Offset=0x40 Size=0x18
    unsigned long ResponsivenessEvents;// Offset=0x58 Size=0x4
};

struct _PROC_PERF_CHECK// Size=0x158 (Id=662)
{
    unsigned long long LastActive;// Offset=0x0 Size=0x8
    unsigned long long LastTime;// Offset=0x8 Size=0x8
    unsigned long long LastStall;// Offset=0x10 Size=0x8
    unsigned long LastResponsivenessEvents;// Offset=0x18 Size=0x4
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;// Offset=0x20 Size=0x60
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;// Offset=0x80 Size=0x60
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;// Offset=0xe0 Size=0x60
    unsigned long LastDeliveredPerformance;// Offset=0x140 Size=0x4
    unsigned long LastDeliveredFrequency;// Offset=0x144 Size=0x4
    unsigned char TaggedThreadPercent[3];// Offset=0x148 Size=0x3
    unsigned char Class0FloorPerfSelection;// Offset=0x14b Size=0x1
    unsigned char Class1MinimumPerfSelection;// Offset=0x14c Size=0x1
    unsigned long CurrentResponsivenessEvents;// Offset=0x150 Size=0x4
};
