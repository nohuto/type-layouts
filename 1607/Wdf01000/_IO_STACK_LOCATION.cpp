union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10208)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
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

enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
    DeviceUsageTypeUndefined=0,
    DeviceUsageTypePaging=1,
    DeviceUsageTypeHibernation=2,
    DeviceUsageTypeDumpFile=3,
    DeviceUsageTypeBoot=4,
    DeviceUsageTypePostDisplay=5
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

struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=127)
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

union _POWER_STATE// Size=0x4 (Id=145)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _IO_STACK_LOCATION// Size=0x48 (Id=482)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char MajorFunction;// Offset=0x0 Size=0x1
        unsigned char MinorFunction;// Offset=0x1 Size=0x1
        unsigned char Flags;// Offset=0x2 Size=0x1
        unsigned char Control;// Offset=0x3 Size=0x1
        union <unnamed-type-Parameters>// Size=0x20 (Id=9083)
        {
            struct <unnamed-type-Create>// Size=0x20 (Id=9084)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short FileAttributes;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                unsigned long EaLength;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Create> Create;// Offset=0x0 Size=0x20
            struct <unnamed-type-CreatePipe>// Size=0x20 (Id=9092)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short Reserved;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                struct _NAMED_PIPE_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-CreatePipe> CreatePipe;// Offset=0x0 Size=0x20
            struct <unnamed-type-CreateMailslot>// Size=0x20 (Id=9100)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short Reserved;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                struct _MAILSLOT_CREATE_PARAMETERS * Parameters;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-CreateMailslot> CreateMailslot;// Offset=0x0 Size=0x20
            struct <unnamed-type-Read>// Size=0x18 (Id=9108)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Key;// Offset=0x8 Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
            struct <unnamed-type-Write>// Size=0x18 (Id=9113)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long Key;// Offset=0x8 Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
            struct <unnamed-type-QueryDirectory>// Size=0x20 (Id=9118)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                struct _UNICODE_STRING * FileName;// Offset=0x8 Size=0x8
                enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x10 Size=0x4
                unsigned long FileIndex;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDirectory> QueryDirectory;// Offset=0x0 Size=0x20
            struct <unnamed-type-NotifyDirectory>// Size=0x10 (Id=9124)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                unsigned long CompletionFilter;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-NotifyDirectory> NotifyDirectory;// Offset=0x0 Size=0x10
            struct <unnamed-type-QueryFile>// Size=0x10 (Id=9128)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryFile> QueryFile;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetFile>// Size=0x20 (Id=9132)
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
            struct <unnamed-type-QueryEa>// Size=0x20 (Id=9141)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                void * EaList;// Offset=0x8 Size=0x8
                unsigned long EaListLength;// Offset=0x10 Size=0x4
                unsigned long EaIndex;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryEa> QueryEa;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetEa>// Size=0x4 (Id=9147)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetEa> SetEa;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryVolume>// Size=0x10 (Id=9150)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryVolume> QueryVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetVolume>// Size=0x10 (Id=9154)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                enum _FSINFOCLASS FsInformationClass;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetVolume> SetVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-FileSystemControl>// Size=0x20 (Id=9158)
            {
                unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
                unsigned long InputBufferLength;// Offset=0x8 Size=0x4
                unsigned long FsControlCode;// Offset=0x10 Size=0x4
                void * Type3InputBuffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-FileSystemControl> FileSystemControl;// Offset=0x0 Size=0x20
            struct <unnamed-type-LockControl>// Size=0x18 (Id=9164)
            {
                union _LARGE_INTEGER * Length;// Offset=0x0 Size=0x8
                unsigned long Key;// Offset=0x8 Size=0x4
                union _LARGE_INTEGER ByteOffset;// Offset=0x10 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-LockControl> LockControl;// Offset=0x0 Size=0x18
            struct <unnamed-type-DeviceIoControl>// Size=0x20 (Id=9169)
            {
                unsigned long OutputBufferLength;// Offset=0x0 Size=0x4
                unsigned long InputBufferLength;// Offset=0x8 Size=0x4
                unsigned long IoControlCode;// Offset=0x10 Size=0x4
                void * Type3InputBuffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-DeviceIoControl> DeviceIoControl;// Offset=0x0 Size=0x20
            struct <unnamed-type-QuerySecurity>// Size=0x10 (Id=9175)
            {
                unsigned long SecurityInformation;// Offset=0x0 Size=0x4
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QuerySecurity> QuerySecurity;// Offset=0x0 Size=0x10
            struct <unnamed-type-SetSecurity>// Size=0x10 (Id=9179)
            {
                unsigned long SecurityInformation;// Offset=0x0 Size=0x4
                void * SecurityDescriptor;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetSecurity> SetSecurity;// Offset=0x0 Size=0x10
            struct <unnamed-type-MountVolume>// Size=0x10 (Id=9183)
            {
                struct _VPB * Vpb;// Offset=0x0 Size=0x8
                struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-MountVolume> MountVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-VerifyVolume>// Size=0x10 (Id=9187)
            {
                struct _VPB * Vpb;// Offset=0x0 Size=0x8
                struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-VerifyVolume> VerifyVolume;// Offset=0x0 Size=0x10
            struct <unnamed-type-Scsi>// Size=0x8 (Id=9191)
            {
                struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Scsi> Scsi;// Offset=0x0 Size=0x8
            struct <unnamed-type-QueryQuota>// Size=0x20 (Id=9195)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
                void * StartSid;// Offset=0x8 Size=0x8
                struct _FILE_GET_QUOTA_INFORMATION * SidList;// Offset=0x10 Size=0x8
                unsigned long SidListLength;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryQuota> QueryQuota;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetQuota>// Size=0x4 (Id=9202)
            {
                unsigned long Length;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetQuota> SetQuota;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryDeviceRelations>// Size=0x4 (Id=9205)
            {
                enum _DEVICE_RELATION_TYPE Type;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDeviceRelations> QueryDeviceRelations;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryInterface>// Size=0x20 (Id=9208)
            {
                struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
                unsigned short Size;// Offset=0x8 Size=0x2
                unsigned short Version;// Offset=0xa Size=0x2
                struct _INTERFACE * Interface;// Offset=0x10 Size=0x8
                void * InterfaceSpecificData;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryInterface> QueryInterface;// Offset=0x0 Size=0x20
            struct <unnamed-type-DeviceCapabilities>// Size=0x8 (Id=9217)
            {
                struct _DEVICE_CAPABILITIES * Capabilities;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-DeviceCapabilities> DeviceCapabilities;// Offset=0x0 Size=0x8
            struct <unnamed-type-FilterResourceRequirements>// Size=0x8 (Id=9221)
            {
                struct _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-FilterResourceRequirements> FilterResourceRequirements;// Offset=0x0 Size=0x8
            struct <unnamed-type-ReadWriteConfig>// Size=0x20 (Id=9225)
            {
                unsigned long WhichSpace;// Offset=0x0 Size=0x4
                void * Buffer;// Offset=0x8 Size=0x8
                unsigned long Offset;// Offset=0x10 Size=0x4
                unsigned long Length;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-ReadWriteConfig> ReadWriteConfig;// Offset=0x0 Size=0x20
            struct <unnamed-type-SetLock>// Size=0x1 (Id=9231)
            {
                unsigned char Lock;// Offset=0x0 Size=0x1
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-SetLock> SetLock;// Offset=0x0 Size=0x1
            struct <unnamed-type-QueryId>// Size=0x4 (Id=9234)
            {
                enum BUS_QUERY_ID_TYPE IdType;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryId> QueryId;// Offset=0x0 Size=0x4
            struct <unnamed-type-QueryDeviceText>// Size=0x10 (Id=9237)
            {
                enum DEVICE_TEXT_TYPE DeviceTextType;// Offset=0x0 Size=0x4
                unsigned long LocaleId;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-QueryDeviceText> QueryDeviceText;// Offset=0x0 Size=0x10
            struct <unnamed-type-UsageNotification>// Size=0x10 (Id=9241)
            {
                unsigned char InPath;// Offset=0x0 Size=0x1
                unsigned char Reserved[3];// Offset=0x1 Size=0x3
                enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;// Offset=0x8 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-UsageNotification> UsageNotification;// Offset=0x0 Size=0x10
            struct <unnamed-type-WaitWake>// Size=0x4 (Id=9246)
            {
                enum _SYSTEM_POWER_STATE PowerState;// Offset=0x0 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-WaitWake> WaitWake;// Offset=0x0 Size=0x4
            struct <unnamed-type-PowerSequence>// Size=0x8 (Id=9249)
            {
                struct _POWER_SEQUENCE * PowerSequence;// Offset=0x0 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-PowerSequence> PowerSequence;// Offset=0x0 Size=0x8
            struct <unnamed-type-Power>// Size=0x20 (Id=9253)
            {
                unsigned long SystemContext;// Offset=0x0 Size=0x4
                struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;// Offset=0x0 Size=0x4
                enum _POWER_STATE_TYPE Type;// Offset=0x8 Size=0x4
                union _POWER_STATE State;// Offset=0x10 Size=0x4
                enum POWER_ACTION ShutdownType;// Offset=0x18 Size=0x4
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-Power> Power;// Offset=0x0 Size=0x20
            struct <unnamed-type-StartDevice>// Size=0x10 (Id=9260)
            {
                struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
                struct _CM_RESOURCE_LIST * AllocatedResourcesTranslated;// Offset=0x8 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-StartDevice> StartDevice;// Offset=0x0 Size=0x10
            struct <unnamed-type-WMI>// Size=0x20 (Id=9265)
            {
                unsigned long long ProviderId;// Offset=0x0 Size=0x8
                void * DataPath;// Offset=0x8 Size=0x8
                unsigned long BufferSize;// Offset=0x10 Size=0x4
                void * Buffer;// Offset=0x18 Size=0x8
            };
            struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-WMI> WMI;// Offset=0x0 Size=0x20
            struct <unnamed-type-Others>// Size=0x20 (Id=9271)
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
