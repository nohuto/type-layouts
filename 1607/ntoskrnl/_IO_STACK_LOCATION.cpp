struct _unnamed_109// Size=0x20 (Id=109)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_110// Size=0x20 (Id=110)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_111// Size=0x20 (Id=111)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short Reserved;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_112// Size=0x18 (Id=112)
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
    FileMaximumInformation=67
};

struct _unnamed_114// Size=0x20 (Id=114)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
    unsigned long FileIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_115// Size=0x10 (Id=115)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
};

struct _unnamed_116// Size=0x10 (Id=116)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_117// Size=0x20 (Id=117)
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

struct _unnamed_118// Size=0x20 (Id=118)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    void * EaList;// Offset=0x8 Size=0x8
    unsigned long EaListLength;// Offset=0x10 Size=0x4
    unsigned long EaIndex;// Offset=0x18 Size=0x4
};

struct _unnamed_119// Size=0x4 (Id=119)
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

struct _unnamed_121// Size=0x10 (Id=121)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
};

struct _unnamed_122// Size=0x20 (Id=122)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long FsControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_123// Size=0x18 (Id=123)
{
    union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_124// Size=0x20 (Id=124)
{
    unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
    unsigned long InputBufferLength;// Offset=0x8 Size=0x4
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_125// Size=0x10 (Id=125)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_126// Size=0x10 (Id=126)
{
    unsigned long SecurityInformation;// Offset=0x0 Size=0x4
    void * SecurityDescriptor;// Offset=0x8 Size=0x8
};

struct _unnamed_127// Size=0x10 (Id=127)
{
    struct _VPB * Vpb;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
};

struct _unnamed_129// Size=0x8 (Id=129)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
};

struct _unnamed_130// Size=0x20 (Id=130)
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

struct _unnamed_132// Size=0x4 (Id=132)
{
    enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
};

struct _unnamed_133// Size=0x20 (Id=133)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned short Size;// Offset=0x8 Size=0x2
    unsigned short Version;// Offset=0xa Size=0x2
    struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
    void * InterfaceSpecificData;// Offset=0x18 Size=0x8
};

struct _unnamed_134// Size=0x8 (Id=134)
{
    struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
};

struct _unnamed_135// Size=0x8 (Id=135)
{
    struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
};

struct _unnamed_136// Size=0x20 (Id=136)
{
    unsigned long WhichSpace;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long Offset;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x18 Size=0x4
};

struct _unnamed_137// Size=0x1 (Id=137)
{
    unsigned char Lock;// Offset=0x0 Size=0x1
};

struct _unnamed_139// Size=0x4 (Id=139)
{
    enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
};

struct _unnamed_141// Size=0x10 (Id=141)
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

struct _unnamed_143// Size=0x10 (Id=143)
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

struct _unnamed_145// Size=0x4 (Id=145)
{
    enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
};

struct _unnamed_146// Size=0x8 (Id=146)
{
    struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
};

struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=874)
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

union _POWER_STATE// Size=0x4 (Id=800)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _unnamed_149// Size=0x20 (Id=149)
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

struct _unnamed_150// Size=0x10 (Id=150)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
};

struct _unnamed_151// Size=0x20 (Id=151)
{
    unsigned long long ProviderId;// Offset=0x0 Size=0x8
    void * DataPath;// Offset=0x8 Size=0x8
    unsigned long BufferSize;// Offset=0x10 Size=0x4
    void * Buffer;// Offset=0x18 Size=0x8
};

struct _unnamed_152// Size=0x20 (Id=152)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
};

union _unnamed_153// Size=0x20 (Id=153)
{
    struct _unnamed_109 Create;// Offset=0x0 Size=0x20
    struct _unnamed_110 CreatePipe;// Offset=0x0 Size=0x20
    struct _unnamed_111 CreateMailslot;// Offset=0x0 Size=0x20
    struct _unnamed_112 Read;// Offset=0x0 Size=0x18
    struct _unnamed_112 Write;// Offset=0x0 Size=0x18
    struct _unnamed_114 QueryDirectory;// Offset=0x0 Size=0x20
    struct _unnamed_115 NotifyDirectory;// Offset=0x0 Size=0x10
    struct _unnamed_116 QueryFile;// Offset=0x0 Size=0x10
    struct _unnamed_117 SetFile;// Offset=0x0 Size=0x20
    struct _unnamed_118 QueryEa;// Offset=0x0 Size=0x20
    struct _unnamed_119 SetEa;// Offset=0x0 Size=0x4
    struct _unnamed_121 QueryVolume;// Offset=0x0 Size=0x10
    struct _unnamed_121 SetVolume;// Offset=0x0 Size=0x10
    struct _unnamed_122 FileSystemControl;// Offset=0x0 Size=0x20
    struct _unnamed_123 LockControl;// Offset=0x0 Size=0x18
    struct _unnamed_124 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_125 QuerySecurity;// Offset=0x0 Size=0x10
    struct _unnamed_126 SetSecurity;// Offset=0x0 Size=0x10
    struct _unnamed_127 MountVolume;// Offset=0x0 Size=0x10
    struct _unnamed_127 VerifyVolume;// Offset=0x0 Size=0x10
    struct _unnamed_129 Scsi;// Offset=0x0 Size=0x8
    struct _unnamed_130 QueryQuota;// Offset=0x0 Size=0x20
    struct _unnamed_119 SetQuota;// Offset=0x0 Size=0x4
    struct _unnamed_132 QueryDeviceRelations;// Offset=0x0 Size=0x4
    struct _unnamed_133 QueryInterface;// Offset=0x0 Size=0x20
    struct _unnamed_134 DeviceCapabilities;// Offset=0x0 Size=0x8
    struct _unnamed_135 FilterResourceRequirements;// Offset=0x0 Size=0x8
    struct _unnamed_136 ReadWriteConfig;// Offset=0x0 Size=0x20
    struct _unnamed_137 SetLock;// Offset=0x0 Size=0x1
    struct _unnamed_139 QueryId;// Offset=0x0 Size=0x4
    struct _unnamed_141 QueryDeviceText;// Offset=0x0 Size=0x10
    struct _unnamed_143 UsageNotification;// Offset=0x0 Size=0x10
    struct _unnamed_145 WaitWake;// Offset=0x0 Size=0x4
    struct _unnamed_146 PowerSequence;// Offset=0x0 Size=0x8
    struct _unnamed_149 Power;// Offset=0x0 Size=0x20
    struct _unnamed_150 StartDevice;// Offset=0x0 Size=0x10
    struct _unnamed_151 WMI;// Offset=0x0 Size=0x20
    struct _unnamed_152 Others;// Offset=0x0 Size=0x20
};

struct _IO_STACK_LOCATION// Size=0x48 (Id=154)
{
    unsigned char MajorFunction;// Offset=0x0 Size=0x1
    unsigned char MinorFunction;// Offset=0x1 Size=0x1
    unsigned char Flags;// Offset=0x2 Size=0x1
    unsigned char Control;// Offset=0x3 Size=0x1
    union _unnamed_153 Parameters;// Offset=0x8 Size=0x20
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x28 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x30 Size=0x8
    long  ( * CompletionRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x38 Size=0x8
    void * Context;// Offset=0x40 Size=0x8
};
