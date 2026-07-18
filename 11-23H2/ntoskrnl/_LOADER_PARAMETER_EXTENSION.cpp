struct _PROFILE_PARAMETER_BLOCK// Size=0x10 (Id=2264)
{
    unsigned short Status;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned short DockingState;// Offset=0x4 Size=0x2
    unsigned short Capabilities;// Offset=0x6 Size=0x2
    unsigned long DockID;// Offset=0x8 Size=0x4
    unsigned long SerialNumber;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LOADER_PERFORMANCE_DATA// Size=0x60 (Id=2242)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long EndTime;// Offset=0x8 Size=0x8
    unsigned long long PreloadEndTime;// Offset=0x10 Size=0x8
    unsigned long long TcbLoaderStartTime;// Offset=0x18 Size=0x8
    unsigned long long LoadHypervisorTime;// Offset=0x20 Size=0x8
    unsigned long long LaunchHypervisorTime;// Offset=0x28 Size=0x8
    unsigned long long LoadVsmTime;// Offset=0x30 Size=0x8
    unsigned long long LaunchVsmTime;// Offset=0x38 Size=0x8
    unsigned long long ExecuteTransitionStartTime;// Offset=0x40 Size=0x8
    unsigned long long ExecuteTransitionEndTime;// Offset=0x48 Size=0x8
    unsigned long long LoadDriversTime;// Offset=0x50 Size=0x8
    unsigned long long CleanupVsmTime;// Offset=0x58 Size=0x8
};

struct _GUID// Size=0x10 (Id=112)
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

struct _BOOT_ENTROPY_SOURCE_LDR_RESULT// Size=0x68 (Id=2298)
{
    enum _BOOT_ENTROPY_SOURCE_ID SourceId;// Offset=0x0 Size=0x4
    unsigned long long Policy;// Offset=0x8 Size=0x8
    enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;// Offset=0x10 Size=0x4
    long ResultStatus;// Offset=0x14 Size=0x4
    unsigned long long Time;// Offset=0x18 Size=0x8
    unsigned long EntropyLength;// Offset=0x20 Size=0x4
    unsigned char EntropyData[64];// Offset=0x24 Size=0x40
};

struct _BOOT_ENTROPY_LDR_RESULT// Size=0x868 (Id=2273)
{
    unsigned long maxEntropySources;// Offset=0x0 Size=0x4
    struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[10];// Offset=0x8 Size=0x410
    unsigned char SeedBytesForCng[48];// Offset=0x418 Size=0x30
    unsigned char RngBytesForNtoskrnl[1024];// Offset=0x448 Size=0x400
    unsigned char KdEntropy[32];// Offset=0x848 Size=0x20
};

struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION// Size=0x40 (Id=2261)
{
    unsigned long InitialHypervisorCrashdumpAreaPageCount;// Offset=0x0 Size=0x4
    unsigned long HypervisorCrashdumpAreaPageCount;// Offset=0x4 Size=0x4
    unsigned long long InitialHypervisorCrashdumpAreaSpa;// Offset=0x8 Size=0x8
    unsigned long long HypervisorCrashdumpAreaSpa;// Offset=0x10 Size=0x8
    unsigned long long HypervisorLaunchStatus;// Offset=0x18 Size=0x8
    unsigned long long HypervisorLaunchStatusArg1;// Offset=0x20 Size=0x8
    union // Size=0x40 (Id=0)
    {
        unsigned long long HypervisorLaunchStatusArg2;// Offset=0x28 Size=0x8
        unsigned long long HypervisorLaunchStatusArg3;// Offset=0x30 Size=0x8
        unsigned long long HypervisorLaunchStatusArg4;// Offset=0x38 Size=0x8
        void * RangeArray;// Offset=0x28 Size=0x8
        unsigned long RangeCount;// Offset=0x30 Size=0x4
    };
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=1101)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LOADER_BUGCHECK_PARAMETERS// Size=0x28 (Id=2125)
{
    unsigned long BugcheckCode;// Offset=0x0 Size=0x4
    unsigned long long BugcheckParameter1;// Offset=0x8 Size=0x8
    unsigned long long BugcheckParameter2;// Offset=0x10 Size=0x8
    unsigned long long BugcheckParameter3;// Offset=0x18 Size=0x8
    unsigned long long BugcheckParameter4;// Offset=0x20 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=510)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2// Size=0x20 (Id=2205)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long AbnormalResetOccurred;// Offset=0x4 Size=0x4
    unsigned long OfflineMemoryDumpCapable;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ResetDataAddress;// Offset=0x10 Size=0x8
    unsigned long ResetDataSize;// Offset=0x18 Size=0x4
};

struct _LOADER_HIVE_RECOVERY_INFO// Size=0x14 (Id=2169)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LegacyRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SoftRebootConflict:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MostRecentLog:3;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned long LoadedFromSnapshot:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Spare:27;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1b
    };
    unsigned long LogNextSequence;// Offset=0x8 Size=0x4
    unsigned long LogMinimumSequence;// Offset=0xc Size=0x4
    unsigned long LogCurrentOffset;// Offset=0x10 Size=0x4
};

struct _unnamed_2163// Size=0x8 (Id=2163)
{
    unsigned char Pch;// Offset=0x0 Size=0x1
    unsigned char EmbeddedController;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
};

union _unnamed_2164// Size=0x8 (Id=2164)
{
    struct _unnamed_2163 Component;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
    unsigned char AsBytes[8];// Offset=0x0 Size=0x8
};

struct _LOADER_RESET_REASON// Size=0x30 (Id=2165)
{
    unsigned char Supplied;// Offset=0x0 Size=0x1
    union _unnamed_2164 Basic;// Offset=0x8 Size=0x8
    unsigned long AdditionalInfo[8];// Offset=0x10 Size=0x20
};

struct _unnamed_2089// Size=0x10 (Id=2089)
{
    void * CodeBase;// Offset=0x0 Size=0x8
    unsigned long long CodeSize;// Offset=0x8 Size=0x8
};

struct _VSM_PERFORMANCE_DATA// Size=0x40 (Id=2157)
{
    unsigned long long LaunchVsmMark[8];// Offset=0x0 Size=0x40
};

union _unnamed_2230// Size=0x4 (Id=2230)
{
    unsigned long AllFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long LkgSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FinalBootBeforeRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ConfigurationComparisonAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CurrentConfigurationLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LkgConfigurationLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long UsageSubscriptionLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION// Size=0x18 (Id=2231)
{
    unsigned char OriginalBootStatus;// Offset=0x0 Size=0x1
    unsigned char NewBootStatus;// Offset=0x1 Size=0x1
    unsigned char ConfigurationLoaded;// Offset=0x2 Size=0x1
    unsigned char Spare;// Offset=0x3 Size=0x1
    union _unnamed_2230 Flags;// Offset=0x4 Size=0x4
    long ConfigurationComparisonStatus;// Offset=0x8 Size=0x4
    long CurrentConfigurationLoadStatus;// Offset=0xc Size=0x4
    long LkgConfigurationLoadStatus;// Offset=0x10 Size=0x4
    long UsageSubscriptionLoadStatus;// Offset=0x14 Size=0x4
};

struct _LOADER_FEATURE_CONFIGURATION_INFORMATION// Size=0x48 (Id=2112)
{
    void * FeatureConfigurationBuffer;// Offset=0x0 Size=0x8
    unsigned long long FeatureConfigurationBufferSize;// Offset=0x8 Size=0x8
    void * UsageSubscriptionBuffer;// Offset=0x10 Size=0x8
    unsigned long long UsageSubscriptionBufferSize;// Offset=0x18 Size=0x8
    void * DelayedUsageReportBuffer;// Offset=0x20 Size=0x8
    unsigned long long DelayedUsageReportBufferSize;// Offset=0x28 Size=0x8
    struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation;// Offset=0x30 Size=0x18
};

struct _ETW_BOOT_CONFIG// Size=0x18 (Id=2277)
{
    unsigned long MaxLoggers;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY BootLoggersList;// Offset=0x8 Size=0x10
};

struct _unnamed_2090// Size=0x10 (Id=2090)
{
    struct _INSTALLED_MEMORY_RANGE * Ranges;// Offset=0x0 Size=0x8
    unsigned long RangeCount;// Offset=0x8 Size=0x4
};

struct _unnamed_2091// Size=0x20 (Id=2091)
{
    struct _GUID TargetVolume;// Offset=0x0 Size=0x10
    struct _UNICODE_STRING * CimFiles;// Offset=0x10 Size=0x8
    unsigned long CimFilesCount;// Offset=0x18 Size=0x4
};

struct _LOADER_PARAMETER_EXTENSION// Size=0xf28 (Id=2092)
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
    void * DrvDBPatchImage;// Offset=0x50 Size=0x8
    unsigned long DrvDBPatchSize;// Offset=0x58 Size=0x4
    struct _NETWORK_LOADER_BLOCK * NetworkLoaderBlock;// Offset=0x60 Size=0x8
    struct _LIST_ENTRY FirmwareDescriptorListHead;// Offset=0x68 Size=0x10
    void * AcpiTable;// Offset=0x78 Size=0x8
    unsigned long AcpiTableSize;// Offset=0x80 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long LastBootSucceeded:1;// Offset=0x84 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LastBootShutdown:1;// Offset=0x84 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoPortAccessSupported:1;// Offset=0x84 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long BootDebuggerActive:1;// Offset=0x84 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long StrongCodeGuarantees:1;// Offset=0x84 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HardStrongCodeGuarantees:1;// Offset=0x84 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SidSharingDisabled:1;// Offset=0x84 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long TpmInitialized:1;// Offset=0x84 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long VsmConfigured:1;// Offset=0x84 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IumEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IsSmbboot:1;// Offset=0x84 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long BootLogEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DriverVerifierEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SuppressMonitorX:1;// Offset=0x84 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long KernelCetEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SuppressSmap:1;// Offset=0x84 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long PointerAuthKernelIpEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SplitLargeNumaNodes:1;// Offset=0x84 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long KernelCetAuditModeEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long VerboseSELEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long EarlyCrashDumpEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long FeatureSimulations:6;// Offset=0x84 Size=0x4 BitOffset=0x15 BitSize=0x6
        unsigned long MicrocodeSelfHosting:1;// Offset=0x84 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long XhciLegacyHandoffSkip:1;// Offset=0x84 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long DisableInsiderOptInHVCI:1;// Offset=0x84 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long MicrocodeMinVerSupported:1;// Offset=0x84 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long GpuIommuEnabled:1;// Offset=0x84 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _LOADER_PERFORMANCE_DATA LoaderPerformanceData;// Offset=0x88 Size=0x60
    struct _LIST_ENTRY BootApplicationPersistentData;// Offset=0xe8 Size=0x10
    void * WmdTestResult;// Offset=0xf8 Size=0x8
    struct _GUID BootIdentifier;// Offset=0x100 Size=0x10
    unsigned long ResumePages;// Offset=0x110 Size=0x4
    void * DumpHeader;// Offset=0x118 Size=0x8
    void * BgContext;// Offset=0x120 Size=0x8
    void * NumaLocalityInfo;// Offset=0x128 Size=0x8
    void * NumaGroupAssignment;// Offset=0x130 Size=0x8
    struct _LIST_ENTRY AttachedHives;// Offset=0x138 Size=0x10
    unsigned long MemoryCachingRequirementsCount;// Offset=0x148 Size=0x4
    void * MemoryCachingRequirements;// Offset=0x150 Size=0x8
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;// Offset=0x158 Size=0x868
    unsigned long long ProcessorCounterFrequency;// Offset=0x9c0 Size=0x8
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;// Offset=0x9c8 Size=0x40
    struct _GUID HardwareConfigurationId;// Offset=0xa08 Size=0x10
    struct _LIST_ENTRY HalExtensionModuleList;// Offset=0xa18 Size=0x10
    struct _LIST_ENTRY PrmUpdateModuleList;// Offset=0xa28 Size=0x10
    struct _LIST_ENTRY PrmFirmwareModuleList;// Offset=0xa38 Size=0x10
    union _LARGE_INTEGER SystemTime;// Offset=0xa48 Size=0x8
    unsigned long long TimeStampAtSystemTimeRead;// Offset=0xa50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long BootFlags;// Offset=0xa58 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgMenuOsSelection:1;// Offset=0xa58 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgHiberBoot:1;// Offset=0xa58 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgSoftRestart:1;// Offset=0xa58 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long DbgMeasuredLaunch:1;// Offset=0xa58 Size=0x8 BitOffset=0x3 BitSize=0x1
        };
    };
    union // Size=0x8 (Id=0)
    {
        unsigned long long InternalBootFlags;// Offset=0xa60 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgUtcBootTime:1;// Offset=0xa60 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgRtcBootTime:1;// Offset=0xa60 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgNoLegacyServices:1;// Offset=0xa60 Size=0x8 BitOffset=0x2 BitSize=0x1
        };
    };
    void * WfsFPData;// Offset=0xa68 Size=0x8
    unsigned long WfsFPDataSize;// Offset=0xa70 Size=0x4
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;// Offset=0xa78 Size=0x28
    void * ApiSetSchema;// Offset=0xaa0 Size=0x8
    unsigned long ApiSetSchemaSize;// Offset=0xaa8 Size=0x4
    struct _LIST_ENTRY ApiSetSchemaExtensions;// Offset=0xab0 Size=0x10
    struct _UNICODE_STRING AcpiBiosVersion;// Offset=0xac0 Size=0x10
    struct _UNICODE_STRING SmbiosVersion;// Offset=0xad0 Size=0x10
    struct _UNICODE_STRING EfiVersion;// Offset=0xae0 Size=0x10
    struct _DEBUG_DEVICE_DESCRIPTOR * KdDebugDevice;// Offset=0xaf0 Size=0x8
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable;// Offset=0xaf8 Size=0x20
    struct _UNICODE_STRING ManufacturingProfile;// Offset=0xb18 Size=0x10
    void * BbtBuffer;// Offset=0xb28 Size=0x8
    unsigned long long XsaveAllowedFeatures;// Offset=0xb30 Size=0x8
    unsigned long XsaveFlags;// Offset=0xb38 Size=0x4
    void * BootOptions;// Offset=0xb40 Size=0x8
    unsigned long IumEnablement;// Offset=0xb48 Size=0x4
    unsigned long IumPolicy;// Offset=0xb4c Size=0x4
    long IumStatus;// Offset=0xb50 Size=0x4
    unsigned long BootId;// Offset=0xb54 Size=0x4
    struct _LOADER_PARAMETER_CI_EXTENSION * CodeIntegrityData;// Offset=0xb58 Size=0x8
    unsigned long CodeIntegrityDataSize;// Offset=0xb60 Size=0x4
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;// Offset=0xb64 Size=0x14
    unsigned long SoftRestartCount;// Offset=0xb78 Size=0x4
    long long SoftRestartTime;// Offset=0xb80 Size=0x8
    void * HypercallCodeVa;// Offset=0xb88 Size=0x8
    void * HalVirtualAddress;// Offset=0xb90 Size=0x8
    unsigned long long HalNumberOfBytes;// Offset=0xb98 Size=0x8
    struct _LEAP_SECOND_DATA * LeapSecondData;// Offset=0xba0 Size=0x8
    unsigned long MajorRelease;// Offset=0xba8 Size=0x4
    unsigned long Reserved1;// Offset=0xbac Size=0x4
    char NtBuildLab[224];// Offset=0xbb0 Size=0xe0
    char NtBuildLabEx[224];// Offset=0xc90 Size=0xe0
    struct _LOADER_RESET_REASON ResetReason;// Offset=0xd70 Size=0x30
    unsigned long MaxPciBusNumber;// Offset=0xda0 Size=0x4
    unsigned long FeatureSettings;// Offset=0xda4 Size=0x4
    unsigned long HotPatchReserveSize;// Offset=0xda8 Size=0x4
    unsigned long RetpolineReserveSize;// Offset=0xdac Size=0x4
    struct _unnamed_2089 MiniExecutive;// Offset=0xdb0 Size=0x10
    struct _VSM_PERFORMANCE_DATA VsmPerformanceData;// Offset=0xdc0 Size=0x40
    struct _NUMA_MEMORY_RANGE * NumaMemoryRanges;// Offset=0xe00 Size=0x8
    unsigned long NumaMemoryRangeCount;// Offset=0xe08 Size=0x4
    unsigned long IommuFaultPolicy;// Offset=0xe0c Size=0x4
    struct _LOADER_FEATURE_CONFIGURATION_INFORMATION FeatureConfigurationInformation;// Offset=0xe10 Size=0x48
    struct _ETW_BOOT_CONFIG EtwBootConfig;// Offset=0xe58 Size=0x18
    struct _BOOT_FIRMWARE_RAMDISK_INFO * FwRamdiskInfo;// Offset=0xe70 Size=0x8
    void * IpmiHwContext;// Offset=0xe78 Size=0x8
    unsigned long long IdleThreadShadowStack;// Offset=0xe80 Size=0x8
    unsigned long long TransitionShadowStack;// Offset=0xe88 Size=0x8
    unsigned long long * IstShadowStacksTable;// Offset=0xe90 Size=0x8
    unsigned long long ReservedForKernelCet[2];// Offset=0xe98 Size=0x10
    struct _MEMORY_MIRRORING_DATA * MirroringData;// Offset=0xea8 Size=0x8
    union _LARGE_INTEGER Luid;// Offset=0xeb0 Size=0x8
    struct _unnamed_2090 InstalledMemory;// Offset=0xeb8 Size=0x10
    struct _LIST_ENTRY HotPatchList;// Offset=0xec8 Size=0x10
    void * BSPMicrocodeData;// Offset=0xed8 Size=0x8
    unsigned long BSPMicrocodeDataSize;// Offset=0xee0 Size=0x4
    struct _unnamed_2091 CimfsInformation;// Offset=0xee8 Size=0x20
    union _LARGE_INTEGER HalSoftRebootDatabase;// Offset=0xf08 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        unsigned long KasanEnabled:1;// Offset=0xf10 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Unused2:31;// Offset=0xf10 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long long PerformanceDataFrequency;// Offset=0xf18 Size=0x8
    struct _LOADER_FEATURE_CONFIGURATION_INFORMATION2 * FeatureConfigurationInformation2;// Offset=0xf20 Size=0x8
};
