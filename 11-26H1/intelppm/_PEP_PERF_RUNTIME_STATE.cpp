struct _PROC_HW_DEBUG_REGISTER_LIST// Size=0x10 (Id=594)
{
    struct _PROC_HW_DEBUG_REGISTER_GROUP * RegisterGroups[2];// Offset=0x0 Size=0x10
};

struct _PEP_PERF_GUARANTEED_PERFORMANCE_SNAPSHOT// Size=0x8 (Id=559)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long Performance;// Offset=0x0 Size=0x4
        unsigned long Percent;// Offset=0x4 Size=0x4
        long long AsLong64;// Offset=0x0 Size=0x8
    };
};

struct _PEP_PERF_RUNTIME_STATE// Size=0x48 (Id=499)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _PROC_HW_DEBUG_REGISTER_LIST HwDebugRegisters[2];// Offset=0x8 Size=0x20
    struct _PEP_PERFORMANCE_STATE * PepState;// Offset=0x28 Size=0x8
    struct POHANDLE__ * FxHandle;// Offset=0x30 Size=0x8
    unsigned long LimitReasons;// Offset=0x38 Size=0x4
    unsigned long TimeWindow;// Offset=0x3c Size=0x4
    struct _PEP_PERF_GUARANTEED_PERFORMANCE_SNAPSHOT GuaranteedPerformance;// Offset=0x40 Size=0x8
};
