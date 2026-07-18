struct _PROC_PERF_CHECK_CYCLE_SNAP// Size=0x40 (Id=735)
{
    unsigned long long CyclesActive;// Offset=0x0 Size=0x8
    unsigned long long CyclesAffinitized;// Offset=0x8 Size=0x8
    unsigned long long TaggedThreadCycles[4];// Offset=0x10 Size=0x20
    unsigned long WorkloadClasses;// Offset=0x30 Size=0x4
    unsigned long long ThreadTypeCycles[1];// Offset=0x38 Size=0x8
};
