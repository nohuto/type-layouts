struct _PROC_PERF_CHECK_CONTEXT// Size=0x28 (Id=580)
{
    struct _PROC_PERF_DOMAIN * Domain;// Offset=0x0 Size=0x4
    struct _PROC_PERF_CONSTRAINT * Constraint;// Offset=0x4 Size=0x4
    struct _PROC_PERF_CHECK * PerfCheck;// Offset=0x8 Size=0x4
    struct _PROC_PERF_LOAD * Load;// Offset=0xc Size=0x4
    struct _PROC_PERF_HISTORY * PerfHistory;// Offset=0x10 Size=0x4
    unsigned long Utility;// Offset=0x14 Size=0x4
    unsigned long AffinitizedUtility;// Offset=0x18 Size=0x4
    unsigned long MediaUtility;// Offset=0x1c Size=0x4
    unsigned short LatestAffinitizedPercent;// Offset=0x20 Size=0x2
    unsigned short AveragePerformancePercent;// Offset=0x22 Size=0x2
    unsigned long RelativePerformance;// Offset=0x24 Size=0x4
};
