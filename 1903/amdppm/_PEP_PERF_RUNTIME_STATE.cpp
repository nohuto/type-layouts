struct _PEP_PERF_RUNTIME_STATE// Size=0x28 (Id=456)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _PEP_PERFORMANCE_STATE * PepState;// Offset=0x8 Size=0x8
    struct POHANDLE__ * FxHandle;// Offset=0x10 Size=0x8
    unsigned long LimitReasons;// Offset=0x18 Size=0x4
    unsigned long GuaranteedPerformance;// Offset=0x1c Size=0x4
    unsigned long GuaranteedPercent;// Offset=0x20 Size=0x4
    unsigned long TimeWindow;// Offset=0x24 Size=0x4
};
