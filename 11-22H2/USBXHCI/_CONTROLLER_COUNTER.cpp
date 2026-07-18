struct _CONTROLLER_COUNTER// Size=0x60 (Id=662)
{
    unsigned char NeedsReporting;// Offset=0x0 Size=0x1
    unsigned long ResetCount;// Offset=0x4 Size=0x4
    unsigned long RestoreStateFailureCount;// Offset=0x8 Size=0x4
    unsigned long RHResumeTimeoutCount;// Offset=0xc Size=0x4
    unsigned long RHResumeNeededExtendedWaitCount;// Offset=0x10 Size=0x4
    unsigned long RHSuspendTimeoutCount;// Offset=0x14 Size=0x4
    unsigned long RHSuspendNeededExtendedWaitCount;// Offset=0x18 Size=0x4
    unsigned long RHPLCClearedOnU0PriorToU3Count;// Offset=0x1c Size=0x4
    unsigned long ContextStateErrorCount;// Offset=0x20 Size=0x4
    unsigned long StopEndpointSuccessRetryMaxCount;// Offset=0x24 Size=0x4
    unsigned long StopEndpointFailureAfterRetriesCount;// Offset=0x28 Size=0x4
    unsigned long SplitTransactionErrorsCount;// Offset=0x2c Size=0x4
    unsigned long ResetCountTotal;// Offset=0x30 Size=0x4
    unsigned long RestoreStateFailureCountTotal;// Offset=0x34 Size=0x4
    unsigned long RHResumeTimeoutCountTotal;// Offset=0x38 Size=0x4
    unsigned long RHResumeNeededExtendedWaitCountTotal;// Offset=0x3c Size=0x4
    unsigned long RHSuspendTimeoutCountTotal;// Offset=0x40 Size=0x4
    unsigned long RHSuspendNeededExtendedWaitCountTotal;// Offset=0x44 Size=0x4
    unsigned long RHPLCClearedOnU0PriorToU3CountTotal;// Offset=0x48 Size=0x4
    unsigned long ContextStateErrorCountTotal;// Offset=0x4c Size=0x4
    unsigned long StopEndpointSuccessRetryMaxCountTotal;// Offset=0x50 Size=0x4
    unsigned long StopEndpointFailureAfterRetriesCountTotal;// Offset=0x54 Size=0x4
    unsigned long SplitTransactionErrorsCountTotal;// Offset=0x58 Size=0x4
    unsigned long HealthCheckEventCountTotal;// Offset=0x5c Size=0x4
};
