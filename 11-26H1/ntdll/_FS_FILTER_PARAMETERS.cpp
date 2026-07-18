struct _unnamed_913// Size=0x10 (Id=913)
{
    union _LARGE_INTEGER * EndingOffset;// Offset=0x0 Size=0x8
    struct _ERESOURCE ** ResourceToRelease;// Offset=0x8 Size=0x8
};

struct _unnamed_914// Size=0x8 (Id=914)
{
    struct _ERESOURCE * ResourceToRelease;// Offset=0x0 Size=0x8
};

enum _FS_FILTER_SECTION_SYNC_TYPE
{
    SyncTypeOther=0,
    SyncTypeCreateSection=1
};

struct _unnamed_916// Size=0x18 (Id=916)
{
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;// Offset=0x0 Size=0x4
    unsigned long PageProtection;// Offset=0x4 Size=0x4
    struct _FS_FILTER_SECTION_SYNC_OUTPUT * OutputInformation;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long AllocationAttributes;// Offset=0x14 Size=0x4
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

struct _unnamed_917// Size=0x20 (Id=917)
{
    struct _IRP * Irp;// Offset=0x0 Size=0x8
    void * FileInformation;// Offset=0x8 Size=0x8
    unsigned long * Length;// Offset=0x10 Size=0x8
    enum _FILE_INFORMATION_CLASS FileInformationClass;// Offset=0x18 Size=0x4
    long CompletionStatus;// Offset=0x1c Size=0x4
};

struct _unnamed_918// Size=0x28 (Id=918)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
    void * Argument5;// Offset=0x20 Size=0x8
};

union _FS_FILTER_PARAMETERS// Size=0x28 (Id=919)
{
    struct _unnamed_913 AcquireForModifiedPageWriter;// Offset=0x0 Size=0x10
    struct _unnamed_914 ReleaseForModifiedPageWriter;// Offset=0x0 Size=0x8
    struct _unnamed_916 AcquireForSectionSynchronization;// Offset=0x0 Size=0x18
    struct _unnamed_917 QueryOpen;// Offset=0x0 Size=0x20
    struct _unnamed_918 Others;// Offset=0x0 Size=0x28
};
