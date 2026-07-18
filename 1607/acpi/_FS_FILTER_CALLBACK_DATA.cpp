struct _unnamed_637// Size=0x10 (Id=637)
{
    union _LARGE_INTEGER * EndingOffset;// Offset=0x0 Size=0x8
    struct _ERESOURCE ** ResourceToRelease;// Offset=0x8 Size=0x8
};

struct _unnamed_638// Size=0x8 (Id=638)
{
    struct _ERESOURCE * ResourceToRelease;// Offset=0x0 Size=0x8
};

enum _FS_FILTER_SECTION_SYNC_TYPE
{
    SyncTypeOther=0,
    SyncTypeCreateSection=1
};

struct _unnamed_640// Size=0x10 (Id=640)
{
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;// Offset=0x0 Size=0x4
    unsigned long PageProtection;// Offset=0x4 Size=0x4
    struct _FS_FILTER_SECTION_SYNC_OUTPUT * OutputInformation;// Offset=0x8 Size=0x8
};

enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
{
    NotifyTypeCreate=0,
    NotifyTypeRetired=1
};

struct _unnamed_642// Size=0x10 (Id=642)
{
    enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;// Offset=0x0 Size=0x4
    unsigned char SafeToRecurse;// Offset=0x8 Size=0x1
};

struct _unnamed_643// Size=0x28 (Id=643)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
    void * Argument5;// Offset=0x20 Size=0x8
};

union _FS_FILTER_PARAMETERS// Size=0x28 (Id=644)
{
    struct _unnamed_637 AcquireForModifiedPageWriter;// Offset=0x0 Size=0x10
    struct _unnamed_638 ReleaseForModifiedPageWriter;// Offset=0x0 Size=0x8
    struct _unnamed_640 AcquireForSectionSynchronization;// Offset=0x0 Size=0x10
    struct _unnamed_642 NotifyStreamFileObject;// Offset=0x0 Size=0x10
    struct _unnamed_643 Others;// Offset=0x0 Size=0x28
};

struct _FS_FILTER_CALLBACK_DATA// Size=0x40 (Id=615)
{
    unsigned long SizeOfFsFilterCallbackData;// Offset=0x0 Size=0x4
    unsigned char Operation;// Offset=0x4 Size=0x1
    unsigned char Reserved;// Offset=0x5 Size=0x1
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    union _FS_FILTER_PARAMETERS Parameters;// Offset=0x18 Size=0x28
};
