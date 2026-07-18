struct _CONTROLLER_COUNTER// Size=0x2c (Id=652)
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
};
