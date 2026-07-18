struct _unnamed_551// Size=0x10 (Id=551)
{
    union _LARGE_INTEGER * EndingOffset;// Offset=0x0 Size=0x8
    struct _ERESOURCE ** ResourceToRelease;// Offset=0x8 Size=0x8
};

struct _unnamed_552// Size=0x8 (Id=552)
{
    struct _ERESOURCE * ResourceToRelease;// Offset=0x0 Size=0x8
};

enum _FS_FILTER_SECTION_SYNC_TYPE
{
    SyncTypeOther=0,
    SyncTypeCreateSection=1
};

struct _unnamed_554// Size=0x10 (Id=554)
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

struct _unnamed_556// Size=0x10 (Id=556)
{
    enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;// Offset=0x0 Size=0x4
    unsigned char SafeToRecurse;// Offset=0x8 Size=0x1
};

struct _unnamed_557// Size=0x28 (Id=557)
{
    void * Argument1;// Offset=0x0 Size=0x8
    void * Argument2;// Offset=0x8 Size=0x8
    void * Argument3;// Offset=0x10 Size=0x8
    void * Argument4;// Offset=0x18 Size=0x8
    void * Argument5;// Offset=0x20 Size=0x8
};

union _FS_FILTER_PARAMETERS// Size=0x28 (Id=558)
{
    struct _unnamed_551 AcquireForModifiedPageWriter;// Offset=0x0 Size=0x10
    struct _unnamed_552 ReleaseForModifiedPageWriter;// Offset=0x0 Size=0x8
    struct _unnamed_554 AcquireForSectionSynchronization;// Offset=0x0 Size=0x10
    struct _unnamed_556 NotifyStreamFileObject;// Offset=0x0 Size=0x10
    struct _unnamed_557 Others;// Offset=0x0 Size=0x28
};
