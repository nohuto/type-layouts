struct _unnamed_1345// Size=0x10 (Id=1345)
{
    union _LARGE_INTEGER * EndingOffset;// Offset=0x0 Size=0x8
    struct _ERESOURCE ** ResourceToRelease;// Offset=0x8 Size=0x8
};

struct _unnamed_1346// Size=0x8 (Id=1346)
{
    struct _ERESOURCE * ResourceToRelease;// Offset=0x0 Size=0x8
};

enum _FS_FILTER_SECTION_SYNC_TYPE
{
    SyncTypeOther=0,
    SyncTypeCreateSection=1
};

struct _unnamed_1348// Size=0x10 (Id=1348)
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

struct _unnamed_1350// Size=0x10 (Id=1350)
{
    enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;// Offset=0x0 Size=0x4
    unsigned char SafeToRecurse;// Offset=0x8 Size=0x1
};

struct _unnamed_1351// Size=0x28 (Id=1351)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
    void * Argument5;// Offset=0x20 Size=0x8
};

union _FS_FILTER_PARAMETERS// Size=0x28 (Id=1352)
{
    struct _unnamed_1345 AcquireForModifiedPageWriter;// Offset=0x0 Size=0x10
    struct _unnamed_1346 ReleaseForModifiedPageWriter;// Offset=0x0 Size=0x8
    struct _unnamed_1348 AcquireForSectionSynchronization;// Offset=0x0 Size=0x10
    struct _unnamed_1350 NotifyStreamFileObject;// Offset=0x0 Size=0x10
    struct _unnamed_1351 Others;// Offset=0x0 Size=0x28
};
