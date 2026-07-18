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
    WheaEventLogEntryIdAerNotGrantedToOs=-2147483624,
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
    WheaEventLogEntryIdeDpcEnabled=-2147483599,
    WheaEventLogEntryPageOfflineDone=-2147483598,
    WheaEventLogEntryPageOfflinePendMax=-2147483597,
    WheaEventLogEntryIdBadPageLimitReached=-2147483596,
    WheaEventLogEntrySrarDetail=-2147483595,
    WheaEventLogEntryEarlyError=-2147483594,
    WheaEventLogEntryIdPcieOverrideInfo=-2147483593,
    WheaEventLogEntryIdReadPcieOverridesErr=-2147483592,
    WheaEventLogEntryIdPcieConfigInfo=-2147483591,
    WheaEventLogEntryIdPcieSummaryFailed=-2147483584,
    WheaEventLogEntryIdThrottleRegCorrupt=-2147483583,
    WheaEventLogEntryIdThrottleAddErrSrcFailed=-2147483582,
    WheaEventLogEntryIdThrottleRegDataIgnored=-2147483581,
    WheaEventLogEntryIdEnableKeyNotifFailed=-2147483580,
    WheaEventLogEntryIdKeyNotificationFailed=-2147483579,
    WheaEventLogEntryIdPcieRemoveDevice=-2147483578,
    WheaEventLogEntryIdPcieAddDevice=-2147483577,
    WheaEventLogEntryIdPcieSpuriousErrSource=-2147483576,
    WheaEventLogEntryIdMemoryAddDevice=-2147483575,
    WheaEventLogEntryIdMemoryRemoveDevice=-2147483574,
    WheaEventLogEntryIdMemorySummaryFailed=-2147483573,
    WheaEventLogEntryIdPcieDpcError=-2147483572,
    WheaEventLogEntryIdCpuBusesInitFailed=-2147483571,
    WheaEventLogEntryIdPshedPluginInitFailed=-2147483570,
    WheaEventLogEntryIdFailedAddToDefectList=-2147483569,
    WheaEventLogEntryIdDefectListFull=-2147483568,
    WheaEventLogEntryIdDefectListUEFIVarFailed=-2147483567,
    WheaEventLogEntryIdDefectListCorrupt=-2147483566,
    WheaEventLogEntryIdBadHestNotifyData=-2147483565,
    WheaEventLogEntryIdRowFailure=-2147483564,
    WheaEventLogEntryIdSrasTableNotFound=-2147483563,
    WheaEventLogEntryIdSrasTableError=-2147483562,
    WheaEventLogEntryIdSrasTableEntries=-2147483561,
    WheaEventLogEntryIdPFANotifyCallbackAction=-2147483560,
    WheaEventLogEntryIdSELBugCheckCpusQuiesced=-2147483559,
    WheaEventLogEntryIdPshedPiCpuid=-2147483558,
    WheaEventLogEntryIdSrasTableBadData=-2147483557,
    WheaEventLogEntryIdDriFsStatus=-2147483556,
    WheaEventLogEntryIdCpusFrozen=-2147483552,
    WheaEventLogEntryIdCpusFrozenNoCrashDump=-2147483551,
    WheaEventLogEntryIdRegNotifyPolicyChange=-2147483550,
    WheaEventLogEntryIdRegError=-2147483549,
    WheaEventLogEntryIdRowOfflineEvent=-2147483548,
    WheaEventLogEntryIdBitOfflineEvent=-2147483547,
    WheaEventLogEntryIdBadGasFields=-2147483546,
    WheaEventLogEntryIdCrashDumpError=-2147483545,
    WheaEventLogEntryIdCrashDumpCheckpoint=-2147483544,
    WheaEventLogEntryIdCrashDumpProgressPercent=-2147483543,
    WheaEventLogEntryIdPreviousCrashBugCheckProgress=-2147483542,
    WheaEventLogEntryIdSELBugCheckStackDump=-2147483541,
    WheaEventLogEntryIdPciePromotedAerErr=-2147483540,
    WheaEventLogEntryIdPshedPiTraceLog=-2147221488
};

union _WHEA_EVENT_LOG_ENTRY_FLAGS// Size=0x4 (Id=1810)
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

struct _WHEA_EVENT_LOG_ENTRY_HEADER// Size=0x20 (Id=1967)
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

struct _WHEA_EVENT_LOG_ENTRY// Size=0x20 (Id=2308)
{
    struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;// Offset=0x0 Size=0x20
};

union _WHEA_REVISION// Size=0x2 (Id=2120)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

union _WHEA_ERROR_RECORD_HEADER_VALIDBITS// Size=0x4 (Id=2106)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PlatformId:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Timestamp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PartitionId:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _WHEA_TIMESTAMP// Size=0x8 (Id=2013)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Seconds:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long Minutes:8;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x8
        unsigned long long Hours:8;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x8
        unsigned long long Precise:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x7
        unsigned long long Day:8;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x8
        unsigned long long Month:8;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x8
        unsigned long long Year:8;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x8
        unsigned long long Century:8;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x8
    };
    union _LARGE_INTEGER AsLARGE_INTEGER;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=86)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _WHEA_ERROR_RECORD_HEADER_FLAGS// Size=0x4 (Id=2434)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PreviousError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Simulated:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DeviceDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CriticalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PersistPfn:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SectionsTruncated:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RecoveryInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Throttle:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _WHEA_PERSISTENCE_INFO// Size=0x8 (Id=1922)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Signature:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Length:24;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x18
        unsigned long long Identifier:16;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x10
        unsigned long long Attributes:2;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x2
        unsigned long long DoNotLog:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long Reserved:5;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x5
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

struct _WHEA_ERROR_RECORD_HEADER// Size=0x80 (Id=1838)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    union _WHEA_REVISION Revision;// Offset=0x4 Size=0x2
    unsigned long SignatureEnd;// Offset=0x6 Size=0x4
    unsigned short SectionCount;// Offset=0xa Size=0x2
    enum _WHEA_ERROR_SEVERITY Severity;// Offset=0xc Size=0x4
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x14 Size=0x4
    union _WHEA_TIMESTAMP Timestamp;// Offset=0x18 Size=0x8
    struct _GUID PlatformId;// Offset=0x20 Size=0x10
    struct _GUID PartitionId;// Offset=0x30 Size=0x10
    struct _GUID CreatorId;// Offset=0x40 Size=0x10
    struct _GUID NotifyType;// Offset=0x50 Size=0x10
    unsigned long long RecordId;// Offset=0x60 Size=0x8
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;// Offset=0x68 Size=0x4
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;// Offset=0x6c Size=0x8
    union // Size=0x80 (Id=0)
    {
        unsigned long OsBuildNumber;// Offset=0x74 Size=0x4
        unsigned char Reserved2[8];// Offset=0x78 Size=0x8
        unsigned char Reserved[12];// Offset=0x74 Size=0xc
    };
};

struct _WHEAP_ATTEMPT_RECOVERY_EVENT// Size=0xa6 (Id=3905)
{
    struct _WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;// Offset=0x0 Size=0x20
    struct _WHEA_ERROR_RECORD_HEADER ErrorHeader;// Offset=0x20 Size=0x80
    unsigned char ArchitecturalRecovery;// Offset=0xa0 Size=0x1
    unsigned char PshedRecovery;// Offset=0xa1 Size=0x1
    long Status;// Offset=0xa2 Size=0x4
};
