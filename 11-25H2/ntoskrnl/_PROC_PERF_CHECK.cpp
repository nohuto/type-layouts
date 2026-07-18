struct _PROC_PERF_CHECK_SNAP// Size=0x38 (Id=2421)
{
    unsigned long long Time;// Offset=0x0 Size=0x8
    unsigned long long Active;// Offset=0x8 Size=0x8
    unsigned long long Stall;// Offset=0x10 Size=0x8
    unsigned long long FrequencyScaledActive;// Offset=0x18 Size=0x8
    unsigned long long PerformanceScaledActive;// Offset=0x20 Size=0x8
    unsigned long long PerformanceScaledKernelActive;// Offset=0x28 Size=0x8
    unsigned long ResponsivenessEvents;// Offset=0x30 Size=0x4
};

struct _PROC_PERF_CHECK// Size=0x578 (Id=2217)
{
    unsigned long long LastActive;// Offset=0x0 Size=0x8
    unsigned long long LastTime;// Offset=0x8 Size=0x8
    unsigned long long LastStall;// Offset=0x10 Size=0x8
    unsigned long LastResponsivenessEvents;// Offset=0x18 Size=0x4
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;// Offset=0x20 Size=0x38
    struct _PROC_PERF_CHECK_CYCLE_SNAP * LastPerfCheckCycleSnap;// Offset=0x58 Size=0x8
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;// Offset=0x60 Size=0x38
    struct _PROC_PERF_CHECK_CYCLE_SNAP * CurrentCycleSnap;// Offset=0x98 Size=0x8
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;// Offset=0xa0 Size=0x38
    struct _PROC_PERF_CHECK_CYCLE_SNAP * LastDeliveredCycleSnap;// Offset=0xd8 Size=0x8
    unsigned long LastDeliveredPerformance;// Offset=0xe0 Size=0x4
    unsigned long LastDeliveredFrequency;// Offset=0xe4 Size=0x4
    unsigned char TaggedThreadPercent[4];// Offset=0xe8 Size=0x4
    unsigned char ImportantPercent;// Offset=0xec Size=0x1
    unsigned char IdealPercent;// Offset=0xed Size=0x1
    unsigned char Class0FloorPerfSelection;// Offset=0xee Size=0x1
    unsigned char Class1MinimumPerfSelection;// Offset=0xef Size=0x1
    unsigned long CurrentResponsivenessEvents;// Offset=0xf0 Size=0x4
    unsigned long long CyclesByFreqBand[3][48];// Offset=0xf8 Size=0x480
};
