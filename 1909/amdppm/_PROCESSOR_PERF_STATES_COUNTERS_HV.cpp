struct _PROCESSOR_PERF_STATES_COUNTERS_HV// Size=0x18 (Id=670)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    void * HypervisorStates;// Offset=0x8 Size=0x8
    struct _PROCESSOR_PERF_STATES * KernelStates;// Offset=0x10 Size=0x8
};
