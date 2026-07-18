struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=76)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _CREATE_FILE_TYPE
{
    CreateFileTypeNone=0,
    CreateFileTypeNamedPipe=1,
    CreateFileTypeMailslot=2
};

struct _IO_DRIVER_CREATE_CONTEXT// Size=0x28 (Id=169)
{
    short Size;// Offset=0x0 Size=0x2
    struct _ECP_LIST * ExtraCreateParameter;// Offset=0x8 Size=0x8
    void * DeviceObjectHint;// Offset=0x10 Size=0x8
    struct _TXN_PARAMETER_BLOCK * TxnParameters;// Offset=0x18 Size=0x8
    struct _EJOB * SiloContext;// Offset=0x20 Size=0x8
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
    FileMaximumInformation=70
};

struct _OPEN_PACKET// Size=0xd8 (Id=484)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _FILE_OBJECT * FileObject;// Offset=0x8 Size=0x8
    long FinalStatus;// Offset=0x10 Size=0x4
    unsigned long long Information;// Offset=0x18 Size=0x8
    unsigned long ParseCheck;// Offset=0x20 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _FILE_OBJECT * RelatedFileObject;// Offset=0x28 Size=0x8
        struct _DEVICE_OBJECT * ReferencedDeviceObject;// Offset=0x28 Size=0x8
    };
    struct _OBJECT_ATTRIBUTES * OriginalAttributes;// Offset=0x30 Size=0x8
    union _LARGE_INTEGER AllocationSize;// Offset=0x38 Size=0x8
    unsigned long CreateOptions;// Offset=0x40 Size=0x4
    unsigned short FileAttributes;// Offset=0x44 Size=0x2
    unsigned short ShareAccess;// Offset=0x46 Size=0x2
    void * EaBuffer;// Offset=0x48 Size=0x8
    unsigned long EaLength;// Offset=0x50 Size=0x4
    unsigned long Options;// Offset=0x54 Size=0x4
    unsigned long Disposition;// Offset=0x58 Size=0x4
    struct _FILE_BASIC_INFORMATION * BasicInformation;// Offset=0x60 Size=0x8
    struct _FILE_NETWORK_OPEN_INFORMATION * NetworkInformation;// Offset=0x68 Size=0x8
    void * FileInformation;// Offset=0x70 Size=0x8
    enum _CREATE_FILE_TYPE CreateFileType;// Offset=0x78 Size=0x4
    void * MailslotOrPipeParameters;// Offset=0x80 Size=0x8
    unsigned char Override;// Offset=0x88 Size=0x1
    unsigned char QueryOnly;// Offset=0x89 Size=0x1
    unsigned char DeleteOnly;// Offset=0x8a Size=0x1
    unsigned char FullAttributes;// Offset=0x8b Size=0x1
    struct _DUMMY_FILE_OBJECT * LocalFileObject;// Offset=0x90 Size=0x8
    unsigned long InternalFlags;// Offset=0x98 Size=0x4
    char AccessMode;// Offset=0x9c Size=0x1
    struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;// Offset=0xa0 Size=0x28
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0xc8 Size=0x4
    unsigned long FileInformationLength;// Offset=0xcc Size=0x4
    unsigned char FilterQuery;// Offset=0xd0 Size=0x1
};
