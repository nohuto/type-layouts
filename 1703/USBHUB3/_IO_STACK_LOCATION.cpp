struct _unnamed_38// Size=0x20 (Id=38)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_39// Size=0x20 (Id=39)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_40// Size=0x20 (Id=40)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_41// Size=0x18 (Id=41)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Key;// Offset=0x8 Size=0x4
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
    FileMaximumInformation=69
};

struct _unnamed_43// Size=0x20 (Id=43)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
    unsigned long FileIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_44// Size=0x10 (Id=44)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
};

struct _unnamed_45// Size=0x10 (Id=45)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_46// Size=0x20 (Id=46)
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

struct _unnamed_47// Size=0x20 (Id=47)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    void * EaList;// Offset=0x8 Size=0x8
    unsigned long EaListLength;// Offset=0x10 Size=0x4
    unsigned long EaIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_48// Size=0x4 (Id=48)
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
    FileFsMaximumInformation=14
};

struct _unnamed_50// Size=0x10 (Id=50)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_51// Size=0x20 (Id=51)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long FsControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_52// Size=0x18 (Id=52)
{
    union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_53// Size=0x20 (Id=53)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_54// Size=0x10 (Id=54)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_55// Size=0x10 (Id=55)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    void * SecurityDescriptor;// Offset=0x8 Size=0x8
};

struct _unnamed_56// Size=0x10 (Id=56)
{
    struct _VPB * Vpb;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
};

struct _unnamed_58// Size=0x8 (Id=58)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
};

struct _unnamed_59// Size=0x20 (Id=59)
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

struct _unnamed_61// Size=0x4 (Id=61)
{
    enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
};

struct _unnamed_63// Size=0x20 (Id=63)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned short Size;// Offset=0x8 Size=0x2
    unsigned short Version;// Offset=0xa Size=0x2
    struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
    void * InterfaceSpecificData;// Offset=0x18 Size=0x8
};

struct _unnamed_64// Size=0x8 (Id=64)
{
    struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
};

struct _unnamed_65// Size=0x8 (Id=65)
{
    struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
};

struct _unnamed_66// Size=0x20 (Id=66)
{
    unsigned long WhichSpace;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long Offset;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x18 Size=0x4
};

struct _unnamed_67// Size=0x1 (Id=67)
{
    unsigned char Lock;// Offset=0x0 Size=0x1
};

struct _unnamed_69// Size=0x4 (Id=69)
{
    enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
};

struct _unnamed_71// Size=0x10 (Id=71)
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
    DeviceUsageTypePostDisplay=5
};

struct _unnamed_73// Size=0x10 (Id=73)
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

struct _unnamed_75// Size=0x4 (Id=75)
{
    enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
};

struct _unnamed_76// Size=0x8 (Id=76)
{
    struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
};

struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=527)
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
            unsigned long Reserved2:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
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

union _POWER_STATE// Size=0x4 (Id=501)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _unnamed_79// Size=0x20 (Id=79)
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

struct _unnamed_80// Size=0x10 (Id=80)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
};

struct _unnamed_81// Size=0x20 (Id=81)
{
    unsigned long long ProviderId;// Offset=0x0 Size=0x8
    void * DataPath;// Offset=0x8 Size=0x8
    unsigned long BufferSize;// Offset=0x10 Size=0x4
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _unnamed_82// Size=0x20 (Id=82)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
};

union _unnamed_83// Size=0x20 (Id=83)
{
    struct _unnamed_38 Create;// Offset=0x0 Size=0x20
    struct _unnamed_39 CreatePipe;// Offset=0x0 Size=0x20
    struct _unnamed_40 CreateMailslot;// Offset=0x0 Size=0x20
    struct _unnamed_41 Read;// Offset=0x0 Size=0x18
    struct _unnamed_41 Write;// Offset=0x0 Size=0x18
    struct _unnamed_43 QueryDirectory;// Offset=0x0 Size=0x20
    struct _unnamed_44 NotifyDirectory;// Offset=0x0 Size=0x10
    struct _unnamed_45 QueryFile;// Offset=0x0 Size=0x10
    struct _unnamed_46 SetFile;// Offset=0x0 Size=0x20
    struct _unnamed_47 QueryEa;// Offset=0x0 Size=0x20
    struct _unnamed_48 SetEa;// Offset=0x0 Size=0x4
    struct _unnamed_50 QueryVolume;// Offset=0x0 Size=0x10
    struct _unnamed_50 SetVolume;// Offset=0x0 Size=0x10
    struct _unnamed_51 FileSystemControl;// Offset=0x0 Size=0x20
    struct _unnamed_52 LockControl;// Offset=0x0 Size=0x18
    struct _unnamed_53 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_54 QuerySecurity;// Offset=0x0 Size=0x10
    struct _unnamed_55 SetSecurity;// Offset=0x0 Size=0x10
    struct _unnamed_56 MountVolume;// Offset=0x0 Size=0x10
    struct _unnamed_56 VerifyVolume;// Offset=0x0 Size=0x10
    struct _unnamed_58 Scsi;// Offset=0x0 Size=0x8
    struct _unnamed_59 QueryQuota;// Offset=0x0 Size=0x20
    struct _unnamed_48 SetQuota;// Offset=0x0 Size=0x4
    struct _unnamed_61 QueryDeviceRelations;// Offset=0x0 Size=0x4
    struct _unnamed_63 QueryInterface;// Offset=0x0 Size=0x20
    struct _unnamed_64 DeviceCapabilities;// Offset=0x0 Size=0x8
    struct _unnamed_65 FilterResourceRequirements;// Offset=0x0 Size=0x8
    struct _unnamed_66 ReadWriteConfig;// Offset=0x0 Size=0x20
    struct _unnamed_67 SetLock;// Offset=0x0 Size=0x1
    struct _unnamed_69 QueryId;// Offset=0x0 Size=0x4
    struct _unnamed_71 QueryDeviceText;// Offset=0x0 Size=0x10
    struct _unnamed_73 UsageNotification;// Offset=0x0 Size=0x10
    struct _unnamed_75 WaitWake;// Offset=0x0 Size=0x4
    struct _unnamed_76 PowerSequence;// Offset=0x0 Size=0x8
    struct _unnamed_79 Power;// Offset=0x0 Size=0x20
    struct _unnamed_80 StartDevice;// Offset=0x0 Size=0x10
    struct _unnamed_81 WMI;// Offset=0x0 Size=0x20
    struct _unnamed_82 Others;// Offset=0x0 Size=0x20
};

struct _IO_STACK_LOCATION// Size=0x48 (Id=84)
{
    unsigned char MajorFunction;// Offset=0x0 Size=0x1
    unsigned char MinorFunction;// Offset=0x1 Size=0x1
    unsigned char Flags;// Offset=0x2 Size=0x1
    unsigned char Control;// Offset=0x3 Size=0x1
    union _unnamed_83 Parameters;// Offset=0x8 Size=0x20
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x28 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x30 Size=0x8
    long  ( * CompletionRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x38 Size=0x8
    void * Context;// Offset=0x40 Size=0x8
};
