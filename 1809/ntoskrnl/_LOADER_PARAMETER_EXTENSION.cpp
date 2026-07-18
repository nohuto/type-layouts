struct _PROFILE_PARAMETER_BLOCK// Size=0x10 (Id=1792)
{
    unsigned short Status;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned short DockingState;// Offset=0x4 Size=0x2
    unsigned short Capabilities;// Offset=0x6 Size=0x2
    unsigned long DockID;// Offset=0x8 Size=0x4
    unsigned long SerialNumber;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LOADER_PERFORMANCE_DATA// Size=0x48 (Id=1773)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long EndTime;// Offset=0x8 Size=0x8
    unsigned long long PreloadEndTime;// Offset=0x10 Size=0x8
    unsigned long long TcbLoaderStartTime;// Offset=0x18 Size=0x8
    unsigned long long LoadHypervisorTime;// Offset=0x20 Size=0x8
    unsigned long long LaunchHypervisorTime;// Offset=0x28 Size=0x8
    unsigned long long LoadVsmTime;// Offset=0x30 Size=0x8
    unsigned long long LaunchVsmTime;// Offset=0x38 Size=0x8
    unsigned long long LoadDriversTime;// Offset=0x40 Size=0x8
};

struct _GUID// Size=0x10 (Id=223)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _BOOT_ENTROPY_SOURCE_ID
{
    BootEntropySourceNone=0,
    BootEntropySourceSeedfile=1,
    BootEntropySourceExternal=2,
    BootEntropySourceTpm=3,
    BootEntropySourceRdrand=4,
    BootEntropySourceTime=5,
    BootEntropySourceAcpiOem0=6,
    BootEntropySourceUefi=7,
    BootEntropySourceCng=8,
    BootEntropySourceTcbTpm=9,
    BootEntropySourceTcbRdrand=10,
    BootMaxEntropySources=10
};

enum _BOOT_ENTROPY_SOURCE_RESULT_CODE
{
    BootEntropySourceStructureUninitialized=0,
    BootEntropySourceDisabledByPolicy=1,
    BootEntropySourceNotPresent=2,
    BootEntropySourceError=3,
    BootEntropySourceSuccess=4
};

struct _BOOT_ENTROPY_SOURCE_LDR_RESULT// Size=0x68 (Id=1820)
{
    enum _BOOT_ENTROPY_SOURCE_ID SourceId;// Offset=0x0 Size=0x4
    unsigned long long Policy;// Offset=0x8 Size=0x8
    enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;// Offset=0x10 Size=0x4
    long ResultStatus;// Offset=0x14 Size=0x4
    unsigned long long Time;// Offset=0x18 Size=0x8
    unsigned long EntropyLength;// Offset=0x20 Size=0x4
    unsigned char EntropyData[64];// Offset=0x24 Size=0x40
};

struct _BOOT_ENTROPY_LDR_RESULT// Size=0x868 (Id=1799)
{
    unsigned long maxEntropySources;// Offset=0x0 Size=0x4
    struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[10];// Offset=0x8 Size=0x410
    unsigned char SeedBytesForCng[48];// Offset=0x418 Size=0x30
    unsigned char RngBytesForNtoskrnl[1024];// Offset=0x448 Size=0x400
    unsigned char KdEntropy[32];// Offset=0x848 Size=0x20
};

struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION// Size=0x40 (Id=1789)
{
    unsigned long InitialHypervisorCrashdumpAreaPageCount;// Offset=0x0 Size=0x4
    unsigned long HypervisorCrashdumpAreaPageCount;// Offset=0x4 Size=0x4
    unsigned long long InitialHypervisorCrashdumpAreaSpa;// Offset=0x8 Size=0x8
    unsigned long long HypervisorCrashdumpAreaSpa;// Offset=0x10 Size=0x8
    unsigned long long HypervisorLaunchStatus;// Offset=0x18 Size=0x8
    unsigned long long HypervisorLaunchStatusArg1;// Offset=0x20 Size=0x8
    unsigned long long HypervisorLaunchStatusArg2;// Offset=0x28 Size=0x8
    unsigned long long HypervisorLaunchStatusArg3;// Offset=0x30 Size=0x8
    unsigned long long HypervisorLaunchStatusArg4;// Offset=0x38 Size=0x8
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LOADER_BUGCHECK_PARAMETERS// Size=0x28 (Id=1667)
{
    unsigned long BugcheckCode;// Offset=0x0 Size=0x4
    unsigned long long BugcheckParameter1;// Offset=0x8 Size=0x8
    unsigned long long BugcheckParameter2;// Offset=0x10 Size=0x8
    unsigned long long BugcheckParameter3;// Offset=0x18 Size=0x8
    unsigned long long BugcheckParameter4;// Offset=0x20 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=217)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2// Size=0x20 (Id=1749)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long AbnormalResetOccurred;// Offset=0x4 Size=0x4
    unsigned long OfflineMemoryDumpCapable;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ResetDataAddress;// Offset=0x10 Size=0x8
    unsigned long ResetDataSize;// Offset=0x18 Size=0x4
};

struct _LOADER_HIVE_RECOVERY_INFO// Size=0x14 (Id=1711)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LegacyRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SoftRebootConflict:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MostRecentLog:3;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long Spare:27;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1b
    };
    unsigned long LogNextSequence;// Offset=0x8 Size=0x4
    unsigned long LogMinimumSequence;// Offset=0xc Size=0x4
    unsigned long LogCurrentOffset;// Offset=0x10 Size=0x4
};

struct _unnamed_1706// Size=0x8 (Id=1706)
{
    unsigned char Pch;// Offset=0x0 Size=0x1
    unsigned char EmbeddedController;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
};

union _unnamed_1707// Size=0x8 (Id=1707)
{
    struct _unnamed_1706 Component;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
    unsigned char AsBytes[8];// Offset=0x0 Size=0x8
};

struct _LOADER_RESET_REASON// Size=0x30 (Id=1708)
{
    unsigned char Supplied;// Offset=0x0 Size=0x1
    union _unnamed_1707 Basic;// Offset=0x8 Size=0x8
    unsigned long AdditionalInfo[8];// Offset=0x10 Size=0x20
};

struct _unnamed_1645// Size=0x10 (Id=1645)
{
    void * CodeBase;// Offset=0x0 Size=0x8
    unsigned long long CodeSize;// Offset=0x8 Size=0x8
};

struct _LOADER_PARAMETER_EXTENSION// Size=0xd78 (Id=1646)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _PROFILE_PARAMETER_BLOCK Profile;// Offset=0x4 Size=0x10
    void * EmInfFileImage;// Offset=0x18 Size=0x8
    unsigned long EmInfFileSize;// Offset=0x20 Size=0x4
    void * TriageDumpBlock;// Offset=0x28 Size=0x8
    struct _HEADLESS_LOADER_BLOCK * HeadlessLoaderBlock;// Offset=0x30 Size=0x8
    struct _SMBIOS3_TABLE_HEADER * SMBiosEPSHeader;// Offset=0x38 Size=0x8
    void * DrvDBImage;// Offset=0x40 Size=0x8
    unsigned long DrvDBSize;// Offset=0x48 Size=0x4
    struct _NETWORK_LOADER_BLOCK * NetworkLoaderBlock;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY FirmwareDescriptorListHead;// Offset=0x58 Size=0x10
    void * AcpiTable;// Offset=0x68 Size=0x8
    unsigned long AcpiTableSize;// Offset=0x70 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long LastBootSucceeded:1;// Offset=0x74 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LastBootShutdown:1;// Offset=0x74 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoPortAccessSupported:1;// Offset=0x74 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long BootDebuggerActive:1;// Offset=0x74 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long StrongCodeGuarantees:1;// Offset=0x74 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HardStrongCodeGuarantees:1;// Offset=0x74 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SidSharingDisabled:1;// Offset=0x74 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long TpmInitialized:1;// Offset=0x74 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long VsmConfigured:1;// Offset=0x74 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IumEnabled:1;// Offset=0x74 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IsSmbboot:1;// Offset=0x74 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long BootLogEnabled:1;// Offset=0x74 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DriverVerifierEnabled:1;// Offset=0x74 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Unused:8;// Offset=0x74 Size=0x4 BitOffset=0xd BitSize=0x8
        unsigned long FeatureSimulations:6;// Offset=0x74 Size=0x4 BitOffset=0x15 BitSize=0x6
        unsigned long MicrocodeSelfHosting:1;// Offset=0x74 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long XhciLegacyHandoffSkip:1;// Offset=0x74 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long DisableInsiderOptInHVCI:1;// Offset=0x74 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long MicrocodeMinVerSupported:1;// Offset=0x74 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long GpuIommuEnabled:1;// Offset=0x74 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;// Offset=0x78 Size=0x48
    struct _LIST_ENTRY BootApplicationPersistentData;// Offset=0xc0 Size=0x10
    void * WmdTestResult;// Offset=0xd0 Size=0x8
    struct _GUID BootIdentifier;// Offset=0xd8 Size=0x10
    unsigned long ResumePages;// Offset=0xe8 Size=0x4
    void * DumpHeader;// Offset=0xf0 Size=0x8
    void * BgContext;// Offset=0xf8 Size=0x8
    void * NumaLocalityInfo;// Offset=0x100 Size=0x8
    void * NumaGroupAssignment;// Offset=0x108 Size=0x8
    struct _LIST_ENTRY AttachedHives;// Offset=0x110 Size=0x10
    unsigned long MemoryCachingRequirementsCount;// Offset=0x120 Size=0x4
    void * MemoryCachingRequirements;// Offset=0x128 Size=0x8
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;// Offset=0x130 Size=0x868
    unsigned long long ProcessorCounterFrequency;// Offset=0x998 Size=0x8
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;// Offset=0x9a0 Size=0x40
    struct _GUID HardwareConfigurationId;// Offset=0x9e0 Size=0x10
    struct _LIST_ENTRY HalExtensionModuleList;// Offset=0x9f0 Size=0x10
    union _LARGE_INTEGER SystemTime;// Offset=0xa00 Size=0x8
    unsigned long long TimeStampAtSystemTimeRead;// Offset=0xa08 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long BootFlags;// Offset=0xa10 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgMenuOsSelection:1;// Offset=0xa10 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgHiberBoot:1;// Offset=0xa10 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgSoftRestart:1;// Offset=0xa10 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long DbgMeasuredLaunch:1;// Offset=0xa10 Size=0x8 BitOffset=0x3 BitSize=0x1
        };
    };
    union // Size=0x8 (Id=0)
    {
        unsigned long long InternalBootFlags;// Offset=0xa18 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgUtcBootTime:1;// Offset=0xa18 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgRtcBootTime:1;// Offset=0xa18 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgNoLegacyServices:1;// Offset=0xa18 Size=0x8 BitOffset=0x2 BitSize=0x1
        };
    };
    void * WfsFPData;// Offset=0xa20 Size=0x8
    unsigned long WfsFPDataSize;// Offset=0xa28 Size=0x4
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;// Offset=0xa30 Size=0x28
    void * ApiSetSchema;// Offset=0xa58 Size=0x8
    unsigned long ApiSetSchemaSize;// Offset=0xa60 Size=0x4
    struct _LIST_ENTRY ApiSetSchemaExtensions;// Offset=0xa68 Size=0x10
    struct _UNICODE_STRING AcpiBiosVersion;// Offset=0xa78 Size=0x10
    struct _UNICODE_STRING SmbiosVersion;// Offset=0xa88 Size=0x10
    struct _UNICODE_STRING EfiVersion;// Offset=0xa98 Size=0x10
    struct _DEBUG_DEVICE_DESCRIPTOR * KdDebugDevice;// Offset=0xaa8 Size=0x8
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable;// Offset=0xab0 Size=0x20
    struct _UNICODE_STRING ManufacturingProfile;// Offset=0xad0 Size=0x10
    void * BbtBuffer;// Offset=0xae0 Size=0x8
    unsigned long long XsaveAllowedFeatures;// Offset=0xae8 Size=0x8
    unsigned long XsaveFlags;// Offset=0xaf0 Size=0x4
    void * BootOptions;// Offset=0xaf8 Size=0x8
    unsigned long IumEnablement;// Offset=0xb00 Size=0x4
    unsigned long IumPolicy;// Offset=0xb04 Size=0x4
    long IumStatus;// Offset=0xb08 Size=0x4
    unsigned long BootId;// Offset=0xb0c Size=0x4
    struct _LOADER_PARAMETER_CI_EXTENSION * CodeIntegrityData;// Offset=0xb10 Size=0x8
    unsigned long CodeIntegrityDataSize;// Offset=0xb18 Size=0x4
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;// Offset=0xb1c Size=0x14
    unsigned long SoftRestartCount;// Offset=0xb30 Size=0x4
    long long SoftRestartTime;// Offset=0xb38 Size=0x8
    void * HypercallCodeVa;// Offset=0xb40 Size=0x8
    void * HalVirtualAddress;// Offset=0xb48 Size=0x8
    unsigned long long HalNumberOfBytes;// Offset=0xb50 Size=0x8
    struct _LEAP_SECOND_DATA * LeapSecondData;// Offset=0xb58 Size=0x8
    unsigned long MajorRelease;// Offset=0xb60 Size=0x4
    unsigned long Reserved1;// Offset=0xb64 Size=0x4
    char NtBuildLab[224];// Offset=0xb68 Size=0xe0
    char NtBuildLabEx[224];// Offset=0xc48 Size=0xe0
    struct _LOADER_RESET_REASON ResetReason;// Offset=0xd28 Size=0x30
    unsigned long MaxPciBusNumber;// Offset=0xd58 Size=0x4
    unsigned long FeatureSettings;// Offset=0xd5c Size=0x4
    unsigned long HotPatchReserveSize;// Offset=0xd60 Size=0x4
    unsigned long RetpolineReserveSize;// Offset=0xd64 Size=0x4
    struct _unnamed_1645 MiniExecutive;// Offset=0xd68 Size=0x10
};
