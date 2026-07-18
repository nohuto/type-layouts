struct _anonymous_52// Size=0x20 (Id=52)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _anonymous_53// Size=0x20 (Id=53)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _anonymous_54// Size=0x20 (Id=54)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
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

struct _anonymous_55// Size=0x18 (Id=55)
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
    FileMaximumInformation=76
};

struct _anonymous_57// Size=0x20 (Id=57)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
    unsigned long FileIndex;// Offset=0x18 Size=0x4
};

struct _anonymous_58// Size=0x10 (Id=58)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
};

enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
    DirectoryNotifyInformation=1,
    DirectoryNotifyExtendedInformation=2
};

struct _anonymous_60// Size=0x18 (Id=60)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
    enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;// Offset=0x10 Size=0x4
};

struct _anonymous_61// Size=0x10 (Id=61)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
};

struct _anonymous_62// Size=0x20 (Id=62)
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

struct _anonymous_63// Size=0x20 (Id=63)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    void * EaList;// Offset=0x8 Size=0x8
    unsigned long EaListLength;// Offset=0x10 Size=0x4
    unsigned long EaIndex;// Offset=0x18 Size=0x4
};

struct _anonymous_64// Size=0x4 (Id=64)
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
    FileFsMaximumInformation=15
};

struct _anonymous_66// Size=0x10 (Id=66)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
};

struct _anonymous_67// Size=0x20 (Id=67)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long FsControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _anonymous_68// Size=0x18 (Id=68)
{
    union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
};

struct _anonymous_69// Size=0x20 (Id=69)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _anonymous_70// Size=0x10 (Id=70)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_71// Size=0x10 (Id=71)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    void * SecurityDescriptor;// Offset=0x8 Size=0x8
};

struct _anonymous_72// Size=0x10 (Id=72)
{
    struct _VPB * Vpb;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
};

struct _anonymous_74// Size=0x8 (Id=74)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
};

struct _anonymous_75// Size=0x20 (Id=75)
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

struct _anonymous_77// Size=0x4 (Id=77)
{
    enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
};

struct _anonymous_79// Size=0x20 (Id=79)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned short Size;// Offset=0x8 Size=0x2
    unsigned short Version;// Offset=0xa Size=0x2
    struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
    void * InterfaceSpecificData;// Offset=0x18 Size=0x8
};

struct _anonymous_80// Size=0x8 (Id=80)
{
    struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
};

struct _anonymous_81// Size=0x8 (Id=81)
{
    struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
};

struct _anonymous_82// Size=0x20 (Id=82)
{
    unsigned long WhichSpace;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long Offset;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x18 Size=0x4
};

struct _anonymous_83// Size=0x1 (Id=83)
{
    unsigned char Lock;// Offset=0x0 Size=0x1
};

struct _anonymous_85// Size=0x4 (Id=85)
{
    enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
};

struct _anonymous_87// Size=0x10 (Id=87)
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
    DeviceUsageTypeGuestAssigned=6
};

struct _anonymous_89// Size=0x10 (Id=89)
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

struct _anonymous_91// Size=0x4 (Id=91)
{
    enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
};

struct _anonymous_92// Size=0x8 (Id=92)
{
    struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
};

struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=112)
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

union _POWER_STATE// Size=0x4 (Id=123)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _anonymous_95// Size=0x20 (Id=95)
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

struct _anonymous_96// Size=0x10 (Id=96)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
};

struct _anonymous_97// Size=0x20 (Id=97)
{
    unsigned long long ProviderId;// Offset=0x0 Size=0x8
    void * DataPath;// Offset=0x8 Size=0x8
    unsigned long BufferSize;// Offset=0x10 Size=0x4
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _anonymous_98// Size=0x20 (Id=98)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
};

union _anonymous_99// Size=0x20 (Id=99)
{
    struct _anonymous_52 Create;// Offset=0x0 Size=0x20
    struct _anonymous_53 CreatePipe;// Offset=0x0 Size=0x20
    struct _anonymous_54 CreateMailslot;// Offset=0x0 Size=0x20
    struct _anonymous_55 Read;// Offset=0x0 Size=0x18
    struct _anonymous_55 Write;// Offset=0x0 Size=0x18
    struct _anonymous_57 QueryDirectory;// Offset=0x0 Size=0x20
    struct _anonymous_58 NotifyDirectory;// Offset=0x0 Size=0x10
    struct _anonymous_60 NotifyDirectoryEx;// Offset=0x0 Size=0x18
    struct _anonymous_61 QueryFile;// Offset=0x0 Size=0x10
    struct _anonymous_62 SetFile;// Offset=0x0 Size=0x20
    struct _anonymous_63 QueryEa;// Offset=0x0 Size=0x20
    struct _anonymous_64 SetEa;// Offset=0x0 Size=0x4
    struct _anonymous_66 QueryVolume;// Offset=0x0 Size=0x10
    struct _anonymous_66 SetVolume;// Offset=0x0 Size=0x10
    struct _anonymous_67 FileSystemControl;// Offset=0x0 Size=0x20
    struct _anonymous_68 LockControl;// Offset=0x0 Size=0x18
    struct _anonymous_69 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _anonymous_70 QuerySecurity;// Offset=0x0 Size=0x10
    struct _anonymous_71 SetSecurity;// Offset=0x0 Size=0x10
    struct _anonymous_72 MountVolume;// Offset=0x0 Size=0x10
    struct _anonymous_72 VerifyVolume;// Offset=0x0 Size=0x10
    struct _anonymous_74 Scsi;// Offset=0x0 Size=0x8
    struct _anonymous_75 QueryQuota;// Offset=0x0 Size=0x20
    struct _anonymous_64 SetQuota;// Offset=0x0 Size=0x4
    struct _anonymous_77 QueryDeviceRelations;// Offset=0x0 Size=0x4
    struct _anonymous_79 QueryInterface;// Offset=0x0 Size=0x20
    struct _anonymous_80 DeviceCapabilities;// Offset=0x0 Size=0x8
    struct _anonymous_81 FilterResourceRequirements;// Offset=0x0 Size=0x8
    struct _anonymous_82 ReadWriteConfig;// Offset=0x0 Size=0x20
    struct _anonymous_83 SetLock;// Offset=0x0 Size=0x1
    struct _anonymous_85 QueryId;// Offset=0x0 Size=0x4
    struct _anonymous_87 QueryDeviceText;// Offset=0x0 Size=0x10
    struct _anonymous_89 UsageNotification;// Offset=0x0 Size=0x10
    struct _anonymous_91 WaitWake;// Offset=0x0 Size=0x4
    struct _anonymous_92 PowerSequence;// Offset=0x0 Size=0x8
    struct _anonymous_95 Power;// Offset=0x0 Size=0x20
    struct _anonymous_96 StartDevice;// Offset=0x0 Size=0x10
    struct _anonymous_97 WMI;// Offset=0x0 Size=0x20
    struct _anonymous_98 Others;// Offset=0x0 Size=0x20
};

struct _IO_STACK_LOCATION// Size=0x48 (Id=376)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char MajorFunction;// Offset=0x0 Size=0x1
        unsigned char MinorFunction;// Offset=0x1 Size=0x1
        unsigned char Flags;// Offset=0x2 Size=0x1
        unsigned char Control;// Offset=0x3 Size=0x1
        union <unnamed-type-Parameters>// Size=0x20 (Id=8963)
        {
            struct <unnamed-type-Create>// Size=0x20 (Id=8964)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short FileAttributes;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                unsigned long EaLength;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Create> Create;// Offset=0x0 Size=0x20
            struct <unnamed-type-CreatePipe>// Size=0x20 (Id=8971)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short Reserved;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-CreatePipe> CreatePipe;// Offset=0x0 Size=0x20
            struct <unnamed-type-CreateMailslot>// Size=0x20 (Id=8978)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short Reserved;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-CreateMailslot> CreateMailslot;// Offset=0x0 Size=0x20
            struct <unnamed-type-Read>// Size=0x18 (Id=8985)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Key;// Offset=0x8 Size=0x4
                unsigned long Flags;// Offset=0xc Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
            struct <unnamed-type-Write>// Size=0x18 (Id=8991)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Key;// Offset=0x8 Size=0x4
                unsigned long Flags;// Offset=0xc Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
            struct <unnamed-type-QueryDirectory>// Size=0x20 (Id=8997)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
                enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
                unsigned long FileIndex;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDirectory> QueryDirectory;// Offset=0x0 Size=0x20
            struct <unnamed-type-NotifyDirectory>// Size=0x10 (Id=9003)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long CompletionFilter;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-NotifyDirectory> NotifyDirectory;// Offset=0x0 Size=0x10
            struct <unnamed-type-NotifyDirectoryEx>// Size=0x18 (Id=9007)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long CompletionFilter;// Offset=0x8 Size=0x4
                enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;// Offset=0x10 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-NotifyDirectoryEx> NotifyDirectoryEx;// Offset=0x0 Size=0x18
            struct <unnamed-type-QueryFile>// Size=0x10 (Id=9012)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryFile> QueryFile;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetFile>// Size=0x20 (Id=9016)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
                struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
                unsigned char ReplaceIfExists;// Offset=0x18 Size=0x1
                unsigned char AdvanceOnly;// Offset=0x19 Size=0x1
                unsigned long ClusterCount;// Offset=0x18 Size=0x4
                void * DeleteHandle;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetFile> SetFile;// Offset=0x0 Size=0x20
            struct <unnamed-type-QueryEa>// Size=0x20 (Id=9025)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                void * EaList;// Offset=0x8 Size=0x8
                unsigned long EaListLength;// Offset=0x10 Size=0x4
                unsigned long EaIndex;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryEa> QueryEa;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetEa>// Size=0x4 (Id=9031)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetEa> SetEa;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryVolume>// Size=0x10 (Id=9034)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryVolume> QueryVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetVolume>// Size=0x10 (Id=9038)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetVolume> SetVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-FileSystemControl>// Size=0x20 (Id=9042)
            {
                unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
                unsigned long InputBufferLength;// Offset=0x8 Size=0x4
                unsigned long FsControlCode;// Offset=0x10 Size=0x4
                void * Type3InputBuffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-FileSystemControl> FileSystemControl;// Offset=0x0 Size=0x20
            struct <unnamed-type-LockControl>// Size=0x18 (Id=9048)
            {
                union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
                unsigned long Key;// Offset=0x8 Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-LockControl> LockControl;// Offset=0x0 Size=0x18
            struct <unnamed-type-DeviceIoControl>// Size=0x20 (Id=9053)
            {
                unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
                unsigned long InputBufferLength;// Offset=0x8 Size=0x4
                unsigned long IoControlCode;// Offset=0x10 Size=0x4
                void * Type3InputBuffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-DeviceIoControl> DeviceIoControl;// Offset=0x0 Size=0x20
            struct <unnamed-type-QuerySecurity>// Size=0x10 (Id=9059)
            {
                unsigned long SecurityInformation;// Offset=0x0 Size=0x4
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QuerySecurity> QuerySecurity;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetSecurity>// Size=0x10 (Id=9063)
            {
                unsigned long SecurityInformation;// Offset=0x0 Size=0x4
                void * SecurityDescriptor;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetSecurity> SetSecurity;// Offset=0x0 Size=0x10
            struct <unnamed-type-MountVolume>// Size=0x10 (Id=9067)
            {
                struct _VPB * Vpb;// Offset=0x0 Size=0x8
                struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-MountVolume> MountVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-VerifyVolume>// Size=0x10 (Id=9071)
            {
                struct _VPB * Vpb;// Offset=0x0 Size=0x8
                struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-VerifyVolume> VerifyVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-Scsi>// Size=0x8 (Id=9075)
            {
                struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Scsi> Scsi;// Offset=0x0 Size=0x8
            struct <unnamed-type-QueryQuota>// Size=0x20 (Id=9078)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                void * StartSid;// Offset=0x8 Size=0x8
                struct _FILE_GET_QUOTA_INFORMATION * SidList;// Offset=0x10 Size=0x8
                unsigned long SidListLength;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryQuota> QueryQuota;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetQuota>// Size=0x4 (Id=9084)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetQuota> SetQuota;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryDeviceRelations>// Size=0x4 (Id=9087)
            {
                enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDeviceRelations> QueryDeviceRelations;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryInterface>// Size=0x20 (Id=9090)
            {
                struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
                unsigned short Size;// Offset=0x8 Size=0x2
                unsigned short Version;// Offset=0xa Size=0x2
                struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
                void * InterfaceSpecificData;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryInterface> QueryInterface;// Offset=0x0 Size=0x20
            struct <unnamed-type-DeviceCapabilities>// Size=0x8 (Id=9097)
            {
                struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-DeviceCapabilities> DeviceCapabilities;// Offset=0x0 Size=0x8
            struct <unnamed-type-FilterResourceRequirements>// Size=0x8 (Id=9100)
            {
                struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-FilterResourceRequirements> FilterResourceRequirements;// Offset=0x0 Size=0x8
            struct <unnamed-type-ReadWriteConfig>// Size=0x20 (Id=9103)
            {
                unsigned long WhichSpace;// Offset=0x0 Size=0x4
                void * Buffer;// Offset=0x8 Size=0x8
                unsigned long Offset;// Offset=0x10 Size=0x4
                unsigned long Length;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-ReadWriteConfig> ReadWriteConfig;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetLock>// Size=0x1 (Id=9109)
            {
                unsigned char Lock;// Offset=0x0 Size=0x1
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetLock> SetLock;// Offset=0x0 Size=0x1
            struct <unnamed-type-QueryId>// Size=0x4 (Id=9112)
            {
                enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryId> QueryId;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryDeviceText>// Size=0x10 (Id=9115)
            {
                enum DEVICE_TEXT_TYPE DeviceTextType;// Offset=0x0 Size=0x4
                unsigned long LocaleId;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDeviceText> QueryDeviceText;// Offset=0x0 Size=0x10
            struct <unnamed-type-UsageNotification>// Size=0x10 (Id=9119)
            {
                unsigned char InPath;// Offset=0x0 Size=0x1
                unsigned char Reserved[3];// Offset=0x1 Size=0x3
                enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-UsageNotification> UsageNotification;// Offset=0x0 Size=0x10
            struct <unnamed-type-WaitWake>// Size=0x4 (Id=9124)
            {
                enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-WaitWake> WaitWake;// Offset=0x0 Size=0x4
            struct <unnamed-type-PowerSequence>// Size=0x8 (Id=9127)
            {
                struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-PowerSequence> PowerSequence;// Offset=0x0 Size=0x8
            struct <unnamed-type-Power>// Size=0x20 (Id=9130)
            {
                unsigned long SystemContext;// Offset=0x0 Size=0x4
                struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;// Offset=0x0 Size=0x4
                enum _POWER_STATE_TYPE Type;// Offset=0x8 Size=0x4
                union _POWER_STATE State;// Offset=0x10 Size=0x4
                enum POWER_ACTION ShutdownType;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Power> Power;// Offset=0x0 Size=0x20
            struct <unnamed-type-StartDevice>// Size=0x10 (Id=9137)
            {
                struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
                struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-StartDevice> StartDevice;// Offset=0x0 Size=0x10
            struct <unnamed-type-WMI>// Size=0x20 (Id=9141)
            {
                unsigned long long ProviderId;// Offset=0x0 Size=0x8
                void * DataPath;// Offset=0x8 Size=0x8
                unsigned long BufferSize;// Offset=0x10 Size=0x4
                void * Buffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-WMI> WMI;// Offset=0x0 Size=0x20
            struct <unnamed-type-Others>// Size=0x20 (Id=9147)
            {
                void * Argument1;// Offset=0x0 Size=0x8
                void * Argument2;// Offset=0x8 Size=0x8
                void * Argument3;// Offset=0x10 Size=0x8
                void * Argument4;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
        };
    };
    union _IO_STACK_LOCATION::<unnamed-type-Parameters> Parameters;// Offset=0x8 Size=0x20
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x28 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x30 Size=0x8
    long  ( * CompletionRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x38 Size=0x8
    void * Context;// Offset=0x40 Size=0x8
};
