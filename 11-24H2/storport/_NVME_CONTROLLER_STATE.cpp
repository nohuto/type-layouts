union _NVME_CONTROLLER_STATE// Size=0x8 (Id=481)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Initialized:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Stopped:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PowerDown:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Removed:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long InReset:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long NeedUpdateIdentifyControllerData:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long UsageTypeHibernation:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long InWinPE:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long InNamespaceReenumeration:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved0:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long DisableActivateFirmwareWithoutReset:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long InFirmwareDownloadCommit:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long InLiveDumpCapture:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ZNSCommandSetSupport:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long RequiresIOCommandSetUpdate:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long SurpriseRemoved:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long FirmwareReplaceExistingImage:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ShutDownForPLDR:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long PanicRecoveryInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long ControllerResetInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long KSRInitiatedPowerDownSkipped:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long ControllerShutDownTimeout:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long ResetBusInProgress:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long AsyncResetInitiatedDueToFwActivate:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long IoQueuesDeleted:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long PoweringUp:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long PoweringDown:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long Reserved:37;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x25
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};
