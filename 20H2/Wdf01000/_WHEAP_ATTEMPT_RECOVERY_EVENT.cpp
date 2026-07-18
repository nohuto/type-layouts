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

union _WHEA_EVENT_LOG_ENTRY_FLAGS// Size=0x4 (Id=669)
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

struct _WHEA_EVENT_LOG_ENTRY_HEADER// Size=0x20 (Id=776)
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

struct _WHEA_EVENT_LOG_ENTRY// Size=0x20 (Id=1008)
{
    struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;// Offset=0x0 Size=0x20
};

union _WHEA_REVISION// Size=0x2 (Id=886)
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

union _WHEA_ERROR_RECORD_HEADER_VALIDBITS// Size=0x4 (Id=872)
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

struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _WHEA_TIMESTAMP// Size=0x8 (Id=807)
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

struct _GUID// Size=0x10 (Id=78)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _WHEA_ERROR_RECORD_HEADER_FLAGS// Size=0x4 (Id=1077)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PreviousError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Simulated:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DeviceDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CriticalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PersistPfn:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _WHEA_PERSISTENCE_INFO// Size=0x8 (Id=746)
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

struct _WHEA_ERROR_RECORD_HEADER// Size=0x80 (Id=685)
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
    unsigned char Reserved[12];// Offset=0x74 Size=0xc
};

struct _WHEAP_ATTEMPT_RECOVERY_EVENT// Size=0xa6 (Id=2915)
{
    struct _WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;// Offset=0x0 Size=0x20
    struct _WHEA_ERROR_RECORD_HEADER ErrorHeader;// Offset=0x20 Size=0x80
    unsigned char ArchitecturalRecovery;// Offset=0xa0 Size=0x1
    unsigned char PshedRecovery;// Offset=0xa1 Size=0x1
    long Status;// Offset=0xa2 Size=0x4
};
