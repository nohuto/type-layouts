struct _PROFILE_PARAMETER_BLOCK// Size=0x10 (Id=1716)
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

struct _GUID// Size=0x10 (Id=41)
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
    BootMaxEntropySources=8
};

enum _BOOT_ENTROPY_SOURCE_RESULT_CODE
{
    BootEntropySourceStructureUninitialized=0,
    BootEntropySourceDisabledByPolicy=1,
    BootEntropySourceNotPresent=2,
    BootEntropySourceError=3,
    BootEntropySourceSuccess=4
};

struct _BOOT_ENTROPY_SOURCE_LDR_RESULT// Size=0x68 (Id=1742)
{
    enum _BOOT_ENTROPY_SOURCE_ID SourceId;// Offset=0x0 Size=0x4
    unsigned long long Policy;// Offset=0x8 Size=0x8
    enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;// Offset=0x10 Size=0x4
    long ResultStatus;// Offset=0x14 Size=0x4
    unsigned long long Time;// Offset=0x18 Size=0x8
    unsigned long EntropyLength;// Offset=0x20 Size=0x4
    unsigned char EntropyData[64];// Offset=0x24 Size=0x40
};

struct _BOOT_ENTROPY_LDR_RESULT// Size=0x798 (Id=1723)
{
    unsigned long maxEntropySources;// Offset=0x0 Size=0x4
    struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[8];// Offset=0x8 Size=0x340
    unsigned char SeedBytesForCng[48];// Offset=0x348 Size=0x30
    unsigned char RngBytesForNtoskrnl[1024];// Offset=0x378 Size=0x400
    unsigned char KdEntropy[32];// Offset=0x778 Size=0x20
};

struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION// Size=0x38 (Id=1713)
{
    unsigned long HypervisorCrashdumpAreaPageCount;// Offset=0x0 Size=0x4
    unsigned long long HypervisorCrashdumpAreaSpa;// Offset=0x8 Size=0x8
    unsigned long long HypervisorLaunchStatus;// Offset=0x10 Size=0x8
    unsigned long long HypervisorLaunchStatusArg1;// Offset=0x18 Size=0x8
    unsigned long long HypervisorLaunchStatusArg2;// Offset=0x20 Size=0x8
    unsigned long long HypervisorLaunchStatusArg3;// Offset=0x28 Size=0x8
    unsigned long long HypervisorLaunchStatusArg4;// Offset=0x30 Size=0x8
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=638)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LOADER_BUGCHECK_PARAMETERS// Size=0x28 (Id=1591)
{
    unsigned long BugcheckCode;// Offset=0x0 Size=0x4
    unsigned long long BugcheckParameter1;// Offset=0x8 Size=0x8
    unsigned long long BugcheckParameter2;// Offset=0x10 Size=0x8
    unsigned long long BugcheckParameter3;// Offset=0x18 Size=0x8
    unsigned long long BugcheckParameter4;// Offset=0x20 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=29)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2// Size=0x20 (Id=1674)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long AbnormalResetOccurred;// Offset=0x4 Size=0x4
    unsigned long OfflineMemoryDumpCapable;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ResetDataAddress;// Offset=0x10 Size=0x8
    unsigned long ResetDataSize;// Offset=0x18 Size=0x4
};

struct _LOADER_HIVE_RECOVERY_INFO// Size=0x14 (Id=1634)
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

struct _unnamed_1629// Size=0x8 (Id=1629)
{
    unsigned char Pch;// Offset=0x0 Size=0x1
    unsigned char EmbeddedController;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
};

union _unnamed_1630// Size=0x8 (Id=1630)
{
    struct _unnamed_1629 Component;// Offset=0x0 Size=0x8
    unsigned long long AsULONG64;// Offset=0x0 Size=0x8
    unsigned char AsBytes[8];// Offset=0x0 Size=0x8
};

struct _LOADER_RESET_REASON// Size=0x30 (Id=1631)
{
    unsigned char Supplied;// Offset=0x0 Size=0x1
    union _unnamed_1630 Basic;// Offset=0x8 Size=0x8
    unsigned long AdditionalInfo[8];// Offset=0x10 Size=0x20
};

struct _unnamed_1570// Size=0x10 (Id=1570)
{
    void * CodeBase;// Offset=0x0 Size=0x8
    unsigned long long CodeSize;// Offset=0x8 Size=0x8
};

struct _LOADER_PARAMETER_EXTENSION// Size=0xc50 (Id=1571)
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
        unsigned long FeatureSimulations:6;// Offset=0x74 Size=0x4 BitOffset=0xc BitSize=0x6
        unsigned long MicrocodeOptedOut:1;// Offset=0x74 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long XhciLegacyHandoffSkip:1;// Offset=0x74 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long Reserved:12;// Offset=0x74 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    struct _LOADER_PERFORMANCE_DATA * LoaderPerformanceData;// Offset=0x78 Size=0x8
    struct _LIST_ENTRY BootApplicationPersistentData;// Offset=0x80 Size=0x10
    void * WmdTestResult;// Offset=0x90 Size=0x8
    struct _GUID BootIdentifier;// Offset=0x98 Size=0x10
    unsigned long ResumePages;// Offset=0xa8 Size=0x4
    void * DumpHeader;// Offset=0xb0 Size=0x8
    void * BgContext;// Offset=0xb8 Size=0x8
    void * NumaLocalityInfo;// Offset=0xc0 Size=0x8
    void * NumaGroupAssignment;// Offset=0xc8 Size=0x8
    struct _LIST_ENTRY AttachedHives;// Offset=0xd0 Size=0x10
    unsigned long MemoryCachingRequirementsCount;// Offset=0xe0 Size=0x4
    void * MemoryCachingRequirements;// Offset=0xe8 Size=0x8
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;// Offset=0xf0 Size=0x798
    unsigned long long ProcessorCounterFrequency;// Offset=0x888 Size=0x8
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;// Offset=0x890 Size=0x38
    struct _GUID HardwareConfigurationId;// Offset=0x8c8 Size=0x10
    struct _LIST_ENTRY HalExtensionModuleList;// Offset=0x8d8 Size=0x10
    union _LARGE_INTEGER SystemTime;// Offset=0x8e8 Size=0x8
    unsigned long long TimeStampAtSystemTimeRead;// Offset=0x8f0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long BootFlags;// Offset=0x8f8 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgMenuOsSelection:1;// Offset=0x8f8 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgHiberBoot:1;// Offset=0x8f8 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgSoftRestart:1;// Offset=0x8f8 Size=0x8 BitOffset=0x2 BitSize=0x1
        };
    };
    union // Size=0x8 (Id=0)
    {
        unsigned long long InternalBootFlags;// Offset=0x900 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DbgUtcBootTime:1;// Offset=0x900 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long DbgRtcBootTime:1;// Offset=0x900 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long DbgNoLegacyServices:1;// Offset=0x900 Size=0x8 BitOffset=0x2 BitSize=0x1
        };
    };
    void * WfsFPData;// Offset=0x908 Size=0x8
    unsigned long WfsFPDataSize;// Offset=0x910 Size=0x4
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;// Offset=0x918 Size=0x28
    void * ApiSetSchema;// Offset=0x940 Size=0x8
    unsigned long ApiSetSchemaSize;// Offset=0x948 Size=0x4
    struct _LIST_ENTRY ApiSetSchemaExtensions;// Offset=0x950 Size=0x10
    struct _UNICODE_STRING AcpiBiosVersion;// Offset=0x960 Size=0x10
    struct _UNICODE_STRING SmbiosVersion;// Offset=0x970 Size=0x10
    struct _UNICODE_STRING EfiVersion;// Offset=0x980 Size=0x10
    struct _DEBUG_DEVICE_DESCRIPTOR * KdDebugDevice;// Offset=0x990 Size=0x8
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable;// Offset=0x998 Size=0x20
    struct _UNICODE_STRING ManufacturingProfile;// Offset=0x9b8 Size=0x10
    void * BbtBuffer;// Offset=0x9c8 Size=0x8
    unsigned long long XsaveAllowedFeatures;// Offset=0x9d0 Size=0x8
    unsigned long XsaveFlags;// Offset=0x9d8 Size=0x4
    void * BootOptions;// Offset=0x9e0 Size=0x8
    unsigned long IumEnablement;// Offset=0x9e8 Size=0x4
    unsigned long IumPolicy;// Offset=0x9ec Size=0x4
    long IumStatus;// Offset=0x9f0 Size=0x4
    unsigned long BootId;// Offset=0x9f4 Size=0x4
    struct _LOADER_PARAMETER_CI_EXTENSION * CodeIntegrityData;// Offset=0x9f8 Size=0x8
    unsigned long CodeIntegrityDataSize;// Offset=0xa00 Size=0x4
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;// Offset=0xa04 Size=0x14
    unsigned long SoftRestartCount;// Offset=0xa18 Size=0x4
    long long SoftRestartTime;// Offset=0xa20 Size=0x8
    void * HypercallCodeVa;// Offset=0xa28 Size=0x8
    void * HalVirtualAddress;// Offset=0xa30 Size=0x8
    unsigned long long HalNumberOfBytes;// Offset=0xa38 Size=0x8
    unsigned long MajorRelease;// Offset=0xa40 Size=0x4
    unsigned long Reserved1;// Offset=0xa44 Size=0x4
    char NtBuildLab[224];// Offset=0xa48 Size=0xe0
    char NtBuildLabEx[224];// Offset=0xb28 Size=0xe0
    struct _LOADER_RESET_REASON ResetReason;// Offset=0xc08 Size=0x30
    unsigned long MaxPciBusNumber;// Offset=0xc38 Size=0x4
    unsigned long FeatureSettings;// Offset=0xc3c Size=0x4
    struct _unnamed_1570 MiniExecutive;// Offset=0xc40 Size=0x10
};
