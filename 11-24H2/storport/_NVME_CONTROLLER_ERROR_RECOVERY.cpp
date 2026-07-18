struct _unnamed_492// Size=0x4 (Id=492)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespaceWaitForAllIOCompleteTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SubmissionQueueQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CompletionDpcQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CompletionQueuePollingQuiesceTimedOut:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AttemptToSendZombieCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved0:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};

struct _NVME_CONTROLLER_ERROR_RECOVERY// Size=0x40 (Id=493)
{
    unsigned long ResetRecoveryState;// Offset=0x0 Size=0x4
    unsigned long ReinitializeInProgress;// Offset=0x4 Size=0x4
    unsigned long ControllerInitPhase1SuccessCount;// Offset=0x8 Size=0x4
    unsigned long ControllerInitPhase1FailureCount;// Offset=0xc Size=0x4
    unsigned long ControllerInitPhase2SuccessCount;// Offset=0x10 Size=0x4
    unsigned long ControllerInitPhase2FailureCount;// Offset=0x14 Size=0x4
    unsigned long ControllerInitPhase3SuccessCount;// Offset=0x18 Size=0x4
    unsigned long ControllerInitPhase3FailureCount;// Offset=0x1c Size=0x4
    struct _NVME_CONTROLLER_RESET_CONTEXT * ControllerResetContext;// Offset=0x20 Size=0x8
    struct _NVME_COMMAND_TIMEOUT_CONTEXT * CommandTimeoutContext;// Offset=0x28 Size=0x8
    struct _unnamed_492 Flags;// Offset=0x30 Size=0x4
    unsigned long AdminCmdTimeoutCount;// Offset=0x34 Size=0x4
    unsigned long NVMCmdTimeoutCount;// Offset=0x38 Size=0x4
    unsigned long InvalidExtendedCommandCount;// Offset=0x3c Size=0x4
};
