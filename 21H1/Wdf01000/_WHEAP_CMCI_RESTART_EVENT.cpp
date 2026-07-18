enum _WHEA_EVENT_LOG_ENTRY_TYPE
{
    WheaEventLogEntryTypeInformational=0,
    WheaEventLogEntryTypeWarning=1,
    WheaEventLogEntryTypeError=2
};

enum _WHEA_EVENT_LOG_ENTRY_ID
{
    WheaEventLogEntryIdCmcPollingTimeout=-2147483647,
    WheaEventLogEntryIdWheaInit=-2147483646,
    WheaEventLogEntryIdCmcSwitchToPolling=-2147483645,
    WheaEventLogEntryIdDroppedCorrectedError=-2147483644,
    WheaEventLogEntryIdStartedReportHwError=-2147483643,
    WheaEventLogEntryIdPFAMemoryOfflined=-2147483642,
    WheaEventLogEntryIdPFAMemoryRemoveMonitor=-2147483641,
    WheaEventLogEntryIdPFAMemoryPolicy=-2147483640,
    WheaEventLogEntryIdPshedInjectError=-2147483639,
    WheaEventLogEntryIdOscCapabilities=-2147483638,
    WheaEventLogEntryIdPshedPluginRegister=-2147483637,
    WheaEventLogEntryIdAddRemoveErrorSource=-2147483636,
    WheaEventLogEntryIdWorkQueueItem=-2147483635,
    WheaEventLogEntryIdAttemptErrorRecovery=-2147483634,
    WheaEventLogEntryIdMcaFoundErrorInBank=-2147483633,
    WheaEventLogEntryIdMcaStuckErrorCheck=-2147483632,
    WheaEventLogEntryIdMcaErrorCleared=-2147483631,
    WheaEventLogEntryIdClearedPoison=-2147483630,
    WheaEventLogEntryIdProcessEINJ=-2147483629,
    WheaEventLogEntryIdProcessHEST=-2147483628,
    WheaEventLogEntryIdCreateGenericRecord=-2147483627,
    WheaEventLogEntryIdErrorRecord=-2147483626,
    WheaEventLogEntryIdErrorRecordLimit=-2147483625,
    WheaEventLogEntryIdErrSrcArrayInvalid=-2147483623,
    WheaEventLogEntryIdAcpiTimeOut=-2147483622,
    WheaEventLogCmciRestart=-2147483621,
    WheaEventLogCmciFinalRestart=-2147483620,
    WheaEventLogEntryEtwOverFlow=-2147483619,
    WheaEventLogAzccRootBusSearchErr=-2147483618,
    WheaEventLogAzccRootBusList=-2147483617,
    WheaEventLogEntryIdErrSrcInvalid=-2147483616,
    WheaEventLogEntryIdGenericErrMemMap=-2147483615,
    WheaEventLogEntryIdPshedCallbackCollision=-2147483614,
    WheaEventLogEntryIdSELBugCheckProgress=-2147483613,
    WheaEventLogEntryIdPshedPluginLoad=-2147483612,
    WheaEventLogEntryIdPshedPluginUnload=-2147483611,
    WheaEventLogEntryIdPshedPluginSupported=-2147483610,
    WheaEventLogEntryIdDeviceDriver=-2147483609,
    WheaEventLogEntryIdCmciImplPresent=-2147483608,
    WheaEventLogEntryIdCmciInitError=-2147483607,
    WheaEventLogEntryIdSELBugCheckRecovery=-2147483606,
    WheaEventLogEntryIdDrvErrSrcInvalid=-2147483605,
    WheaEventLogEntryIdDrvHandleBusy=-2147483604,
    WheaEventLogEntryIdWheaHeartbeat=-2147483603,
    WheaEventLogAzccRootBusPoisonSet=-2147483602,
    WheaEventLogEntryIdSELBugCheckInfo=-2147483601,
    WheaEventLogEntryIdErrDimmInfoMismatch=-2147483600,
    WheaEventLogEntryIdeDpcEnabled=-2147483599
};

union _WHEA_EVENT_LOG_ENTRY_FLAGS// Size=0x4 (Id=698)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LogInternalEtw:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LogBlackbox:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LogSel:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RawSel:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long NoFormat:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Driver:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved2:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_EVENT_LOG_ENTRY_HEADER// Size=0x20 (Id=808)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;// Offset=0xc Size=0x4
    unsigned long OwnerTag;// Offset=0x10 Size=0x4
    enum _WHEA_EVENT_LOG_ENTRY_ID Id;// Offset=0x14 Size=0x4
    union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;// Offset=0x18 Size=0x4
    unsigned long PayloadLength;// Offset=0x1c Size=0x4
};

struct _WHEA_EVENT_LOG_ENTRY// Size=0x20 (Id=1054)
{
    struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;// Offset=0x0 Size=0x20
};

struct _WHEAP_CMCI_RESTART_EVENT// Size=0x30 (Id=2245)
{
    struct _WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;// Offset=0x0 Size=0x20
    unsigned long CmciRestoreAttempts;// Offset=0x20 Size=0x4
    unsigned long MaxCmciRestoreLimit;// Offset=0x24 Size=0x4
    unsigned long MaxCorrectedErrorsFound;// Offset=0x28 Size=0x4
    unsigned long MaxCorrectedErrorLimit;// Offset=0x2c Size=0x4
};
