enum _EXECUTION_CONTEXT_FLAGS
{
    ExecutionContextFlagNone=0,
    ExecutionContextFlagRunDpcForFirstLoop=1,
    ExecutionContextFlagRunWorkerThreadAtDispatch=2,
    ExecutionContextFlagTryExtendMaxTimeAtDispatch=4
};

struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS// Size=0x8 (Id=1214)
{
    unsigned int AtPassive;// Offset=0x0 Size=0x4
    unsigned int AtDispatch;// Offset=0x4 Size=0x4
};

struct _EXECUTION_CONTEXT_RUNTIME_KNOBS// Size=0x3c (Id=468)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _EXECUTION_CONTEXT_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned int MaxTimeAtDispatch;// Offset=0x8 Size=0x4
    unsigned int DispatchTimeWarning;// Offset=0xc Size=0x4
    unsigned int DispatchTimeWarningInterval;// Offset=0x10 Size=0x4
    unsigned int DpcWatchdogTimerThreshold;// Offset=0x14 Size=0x4
    unsigned int WorkerThreadPriority;// Offset=0x18 Size=0x4
    struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsSend;// Offset=0x1c Size=0x8
    struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsSendComplete;// Offset=0x24 Size=0x8
    struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsReceive;// Offset=0x2c Size=0x8
    struct _EXECUTION_CONTEXT_WORK_UNIT_KNOBS MaxPacketsReceiveComplete;// Offset=0x34 Size=0x8
};
