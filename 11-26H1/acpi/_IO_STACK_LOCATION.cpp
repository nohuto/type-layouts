struct _unnamed_154// Size=0x20 (Id=154)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_155// Size=0x20 (Id=155)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_156// Size=0x20 (Id=156)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_46// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=299)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_46 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_157// Size=0x18 (Id=157)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Key;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
};

enum _FILE_INFORMATION_CLASS
{
    FileDirectoryInformation=1,
    FileFullDirectoryInformation=2,
    FileBothDirectoryInformation=3,
    FileBasicInformation=4,
    FileStandardInformation=5,
    FileInternalInformation=6,
    FileEaInformation=7,
    FileAccessInformation=8,
    FileNameInformation=9,
    FileRenameInformation=10,
    FileLinkInformation=11,
    FileNamesInformation=12,
    FileDispositionInformation=13,
    FilePositionInformation=14,
    FileFullEaInformation=15,
    FileModeInformation=16,
    FileAlignmentInformation=17,
    FileAllInformation=18,
    FileAllocationInformation=19,
    FileEndOfFileInformation=20,
    FileAlternateNameInformation=21,
    FileStreamInformation=22,
    FilePipeInformation=23,
    FilePipeLocalInformation=24,
    FilePipeRemoteInformation=25,
    FileMailslotQueryInformation=26,
    FileMailslotSetInformation=27,
    FileCompressionInformation=28,
    FileObjectIdInformation=29,
    FileCompletionInformation=30,
    FileMoveClusterInformation=31,
    FileQuotaInformation=32,
    FileReparsePointInformation=33,
    FileNetworkOpenInformation=34,
    FileAttributeTagInformation=35,
    FileTrackingInformation=36,
    FileIdBothDirectoryInformation=37,
    FileIdFullDirectoryInformation=38,
    FileValidDataLengthInformation=39,
    FileShortNameInformation=40,
    FileIoCompletionNotificationInformation=41,
    FileIoStatusBlockRangeInformation=42,
    FileIoPriorityHintInformation=43,
    FileSfioReserveInformation=44,
    FileSfioVolumeInformation=45,
    FileHardLinkInformation=46,
    FileProcessIdsUsingFileInformation=47,
    FileNormalizedNameInformation=48,
    FileNetworkPhysicalNameInformation=49,
    FileIdGlobalTxDirectoryInformation=50,
    FileIsRemoteDeviceInformation=51,
    FileUnusedInformation=52,
    FileNumaNodeInformation=53,
    FileStandardLinkInformation=54,
    FileRemoteProtocolInformation=55,
    FileRenameInformationBypassAccessCheck=56,
    FileLinkInformationBypassAccessCheck=57,
    FileVolumeNameInformation=58,
    FileIdInformation=59,
    FileIdExtdDirectoryInformation=60,
    FileReplaceCompletionInformation=61,
    FileHardLinkFullIdInformation=62,
    FileIdExtdBothDirectoryInformation=63,
    FileDispositionInformationEx=64,
    FileRenameInformationEx=65,
    FileRenameInformationExBypassAccessCheck=66,
    FileDesiredStorageClassInformation=67,
    FileStatInformation=68,
    FileMemoryPartitionInformation=69,
    FileStatLxInformation=70,
    FileCaseSensitiveInformation=71,
    FileLinkInformationEx=72,
    FileLinkInformationExBypassAccessCheck=73,
    FileStorageReserveIdInformation=74,
    FileCaseSensitiveInformationForceAccessCheck=75,
    FileKnownFolderInformation=76,
    FileStatBasicInformation=77,
    FileId64ExtdDirectoryInformation=78,
    FileId64ExtdBothDirectoryInformation=79,
    FileIdAllExtdDirectoryInformation=80,
    FileIdAllExtdBothDirectoryInformation=81,
    FileStreamReservationInformation=82,
    FileMupProviderInfo=83,
    FileMaximumInformation=84
};

struct _unnamed_159// Size=0x20 (Id=159)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
    unsigned long FileIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_160// Size=0x10 (Id=160)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
};

enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
    DirectoryNotifyInformation=1,
    DirectoryNotifyExtendedInformation=2,
    DirectoryNotifyFullInformation=3,
    DirectoryNotifyMaximumInformation=4
};

struct _unnamed_162// Size=0x18 (Id=162)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
    enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;// Offset=0x10 Size=0x4
};

struct _unnamed_163// Size=0x10 (Id=163)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_164// Size=0x20 (Id=164)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    union // Size=0x1c (Id=0)
    {
        unsigned char ReplaceIfExists;// Offset=0x18 Size=0x1
        unsigned char AdvanceOnly;// Offset=0x19 Size=0x1
        unsigned long ClusterCount;// Offset=0x18 Size=0x4
        void * DeleteHandle;// Offset=0x18 Size=0x8
    };
};

struct _unnamed_165// Size=0x20 (Id=165)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    void * EaList;// Offset=0x8 Size=0x8
    unsigned long EaListLength;// Offset=0x10 Size=0x4
    unsigned long EaIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_166// Size=0x4 (Id=166)
{
    unsigned long Length;// Offset=0x0 Size=0x4
};

enum _FSINFOCLASS
{
    FileFsVolumeInformation=1,
    FileFsLabelInformation=2,
    FileFsSizeInformation=3,
    FileFsDeviceInformation=4,
    FileFsAttributeInformation=5,
    FileFsControlInformation=6,
    FileFsFullSizeInformation=7,
    FileFsObjectIdInformation=8,
    FileFsDriverPathInformation=9,
    FileFsVolumeFlagsInformation=10,
    FileFsSectorSizeInformation=11,
    FileFsDataCopyInformation=12,
    FileFsMetadataSizeInformation=13,
    FileFsFullSizeInformationEx=14,
    FileFsGuidInformation=15,
    FileFsMaximumInformation=16
};

struct _unnamed_168// Size=0x10 (Id=168)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_169// Size=0x20 (Id=169)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long FsControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_170// Size=0x18 (Id=170)
{
    union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_171// Size=0x20 (Id=171)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_172// Size=0x10 (Id=172)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_173// Size=0x10 (Id=173)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    void * SecurityDescriptor;// Offset=0x8 Size=0x8
};

struct _unnamed_174// Size=0x18 (Id=174)
{
    struct _VPB * Vpb;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    unsigned long OutputBufferLength;// Offset=0x10 Size=0x4
};

struct _unnamed_175// Size=0x10 (Id=175)
{
    struct _VPB * Vpb;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
};

struct _unnamed_177// Size=0x8 (Id=177)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
};

struct _unnamed_178// Size=0x20 (Id=178)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    void * StartSid;// Offset=0x8 Size=0x8
    struct _FILE_GET_QUOTA_INFORMATION * SidList;// Offset=0x10 Size=0x8
    unsigned long SidListLength;// Offset=0x18 Size=0x4
};

enum _DEVICE_RELATION_TYPE
{
    BusRelations=0,
    EjectionRelations=1,
    PowerRelations=2,
    RemovalRelations=3,
    TargetDeviceRelation=4,
    SingleBusRelations=5,
    TransportRelations=6
};

struct _unnamed_180// Size=0x4 (Id=180)
{
    enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
};

struct _unnamed_181// Size=0x20 (Id=181)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned short Size;// Offset=0x8 Size=0x2
    unsigned short Version;// Offset=0xa Size=0x2
    struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
    void * InterfaceSpecificData;// Offset=0x18 Size=0x8
};

struct _unnamed_182// Size=0x8 (Id=182)
{
    struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
};

struct _unnamed_183// Size=0x8 (Id=183)
{
    struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
};

struct _unnamed_184// Size=0x20 (Id=184)
{
    unsigned long WhichSpace;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long Offset;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x18 Size=0x4
};

struct _unnamed_185// Size=0x1 (Id=185)
{
    unsigned char Lock;// Offset=0x0 Size=0x1
};

struct _unnamed_187// Size=0x4 (Id=187)
{
    enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
};

struct _unnamed_189// Size=0x10 (Id=189)
{
    enum DEVICE_TEXT_TYPE DeviceTextType;// Offset=0x0 Size=0x4
    unsigned long LocaleId;// Offset=0x8 Size=0x4
};

enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
    DeviceUsageTypeUndefined=0,
    DeviceUsageTypePaging=1,
    DeviceUsageTypeHibernation=2,
    DeviceUsageTypeDumpFile=3,
    DeviceUsageTypeBoot=4,
    DeviceUsageTypePostDisplay=5,
    DeviceUsageTypeGuestAssigned=6,
    DeviceUsageTypeInlineCryptoEngine=7
};

struct _unnamed_191// Size=0x10 (Id=191)
{
    unsigned char InPath;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;// Offset=0x8 Size=0x4
};

enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _unnamed_193// Size=0x4 (Id=193)
{
    enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
};

struct _unnamed_194// Size=0x8 (Id=194)
{
    struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
};

struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=420)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Reserved1:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long TargetSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
            unsigned long EffectiveSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
            unsigned long CurrentSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
            unsigned long IgnoreHibernationPath:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long PseudoTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long KernelSoftReboot:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long DirectedDripsTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long Reserved2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        unsigned long ContextAsUlong;// Offset=0x0 Size=0x4
    };
};

enum _POWER_STATE_TYPE
{
    SystemPowerState=0,
    DevicePowerState=1
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

union _POWER_STATE// Size=0x4 (Id=391)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _unnamed_197// Size=0x20 (Id=197)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long SystemContext;// Offset=0x0 Size=0x4
        struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;// Offset=0x0 Size=0x4
    };
    enum _POWER_STATE_TYPE Type;// Offset=0x8 Size=0x4
    union _POWER_STATE State;// Offset=0x10 Size=0x4
    enum POWER_ACTION ShutdownType;// Offset=0x18 Size=0x4
};

struct _unnamed_198// Size=0x10 (Id=198)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
};

struct _unnamed_199// Size=0x20 (Id=199)
{
    unsigned long long ProviderId;// Offset=0x0 Size=0x8
    void * DataPath;// Offset=0x8 Size=0x8
    unsigned long BufferSize;// Offset=0x10 Size=0x4
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _unnamed_200// Size=0x20 (Id=200)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
};

union _unnamed_201// Size=0x20 (Id=201)
{
    struct _unnamed_154 Create;// Offset=0x0 Size=0x20
    struct _unnamed_155 CreatePipe;// Offset=0x0 Size=0x20
    struct _unnamed_156 CreateMailslot;// Offset=0x0 Size=0x20
    struct _unnamed_157 Read;// Offset=0x0 Size=0x18
    struct _unnamed_157 Write;// Offset=0x0 Size=0x18
    struct _unnamed_159 QueryDirectory;// Offset=0x0 Size=0x20
    struct _unnamed_160 NotifyDirectory;// Offset=0x0 Size=0x10
    struct _unnamed_162 NotifyDirectoryEx;// Offset=0x0 Size=0x18
    struct _unnamed_163 QueryFile;// Offset=0x0 Size=0x10
    struct _unnamed_164 SetFile;// Offset=0x0 Size=0x20
    struct _unnamed_165 QueryEa;// Offset=0x0 Size=0x20
    struct _unnamed_166 SetEa;// Offset=0x0 Size=0x4
    struct _unnamed_168 QueryVolume;// Offset=0x0 Size=0x10
    struct _unnamed_168 SetVolume;// Offset=0x0 Size=0x10
    struct _unnamed_169 FileSystemControl;// Offset=0x0 Size=0x20
    struct _unnamed_170 LockControl;// Offset=0x0 Size=0x18
    struct _unnamed_171 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_172 QuerySecurity;// Offset=0x0 Size=0x10
    struct _unnamed_173 SetSecurity;// Offset=0x0 Size=0x10
    struct _unnamed_174 MountVolume;// Offset=0x0 Size=0x18
    struct _unnamed_175 VerifyVolume;// Offset=0x0 Size=0x10
    struct _unnamed_177 Scsi;// Offset=0x0 Size=0x8
    struct _unnamed_178 QueryQuota;// Offset=0x0 Size=0x20
    struct _unnamed_166 SetQuota;// Offset=0x0 Size=0x4
    struct _unnamed_180 QueryDeviceRelations;// Offset=0x0 Size=0x4
    struct _unnamed_181 QueryInterface;// Offset=0x0 Size=0x20
    struct _unnamed_182 DeviceCapabilities;// Offset=0x0 Size=0x8
    struct _unnamed_183 FilterResourceRequirements;// Offset=0x0 Size=0x8
    struct _unnamed_184 ReadWriteConfig;// Offset=0x0 Size=0x20
    struct _unnamed_185 SetLock;// Offset=0x0 Size=0x1
    struct _unnamed_187 QueryId;// Offset=0x0 Size=0x4
    struct _unnamed_189 QueryDeviceText;// Offset=0x0 Size=0x10
    struct _unnamed_191 UsageNotification;// Offset=0x0 Size=0x10
    struct _unnamed_193 WaitWake;// Offset=0x0 Size=0x4
    struct _unnamed_194 PowerSequence;// Offset=0x0 Size=0x8
    struct _unnamed_197 Power;// Offset=0x0 Size=0x20
    struct _unnamed_198 StartDevice;// Offset=0x0 Size=0x10
    struct _unnamed_199 WMI;// Offset=0x0 Size=0x20
    struct _unnamed_200 Others;// Offset=0x0 Size=0x20
};

struct _IO_STACK_LOCATION// Size=0x48 (Id=202)
{
    unsigned char MajorFunction;// Offset=0x0 Size=0x1
    unsigned char MinorFunction;// Offset=0x1 Size=0x1
    unsigned char Flags;// Offset=0x2 Size=0x1
    unsigned char Control;// Offset=0x3 Size=0x1
    union _unnamed_201 Parameters;// Offset=0x8 Size=0x20
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x28 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x30 Size=0x8
    long  ( * CompletionRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x38 Size=0x8
    void * Context;// Offset=0x40 Size=0x8
};
