struct _PROC_HW_DEBUG_REGISTER_LIST// Size=0x10 (Id=594)
{
    struct _PROC_HW_DEBUG_REGISTER_GROUP * RegisterGroups[2];// Offset=0x0 Size=0x10
};

struct _DIFFERENTIAL_FEEDBACK_HISTORY// Size=0x38 (Id=675)
{
    unsigned long long HwActualCount;// Offset=0x0 Size=0x8
    unsigned long long HwReferenceCount;// Offset=0x8 Size=0x8
    unsigned long long CurrentCumulativeActualCount;// Offset=0x10 Size=0x8
    unsigned long long CurrentCumulativeReferenceCount;// Offset=0x18 Size=0x8
    unsigned long long NewCumulativeActualCount;// Offset=0x20 Size=0x8
    unsigned long long NewCumulativeReferenceCount;// Offset=0x28 Size=0x8
    unsigned char Reset;// Offset=0x30 Size=0x1
};

struct _DIFFERENTIAL_FEEDBACK_STATE// Size=0x210 (Id=603)
{
    unsigned long long LastActualCount;// Offset=0x0 Size=0x8
    unsigned long long LastReferenceCount;// Offset=0x8 Size=0x8
    unsigned long long CumulativeActualCount;// Offset=0x10 Size=0x8
    unsigned long long CumulativeReferenceCount;// Offset=0x18 Size=0x8
    unsigned long long ActualMask;// Offset=0x20 Size=0x8
    unsigned long long ReferenceMask;// Offset=0x28 Size=0x8
    void  ( * FeedbackRoutine)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x30 Size=0x8
    void * Context;// Offset=0x38 Size=0x8
    unsigned long ProcessorId;// Offset=0x40 Size=0x4
    struct _DIFFERENTIAL_FEEDBACK_HISTORY History[8];// Offset=0x48 Size=0x1c0
    unsigned long CurrentIndex;// Offset=0x208 Size=0x4
};

struct _PTSTATES_RUNTIME_STATE// Size=0x250 (Id=524)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _PROC_HW_DEBUG_REGISTER_LIST HwDebugRegisters[2];// Offset=0x8 Size=0x20
    unsigned long CurrentType;// Offset=0x28 Size=0x4
    unsigned long CurrentPercentFrequency;// Offset=0x2c Size=0x4
    unsigned long TargetState;// Offset=0x30 Size=0x4
    struct _RUNTIME_PERF_STATES * PerfStates;// Offset=0x38 Size=0x8
    struct _DIFFERENTIAL_FEEDBACK_STATE HardwareFeedback;// Offset=0x40 Size=0x210
};
