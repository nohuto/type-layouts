enum _CLFS_MGMT_NOTIFICATION_TYPE
{
    ClfsMgmtAdvanceTailNotification=0,
    ClfsMgmtLogFullHandlerNotification=1,
    ClfsMgmtLogUnpinnedNotification=2,
    ClfsMgmtLogWriteNotification=3
};

struct _CLS_LSN// Size=0x8 (Id=2405)
{
    unsigned long long Internal;// Offset=0x0 Size=0x8
};

struct _CLFS_MGMT_NOTIFICATION// Size=0x18 (Id=2723)
{
    enum _CLFS_MGMT_NOTIFICATION_TYPE Notification;// Offset=0x0 Size=0x4
    struct _CLS_LSN Lsn;// Offset=0x8 Size=0x8
    unsigned short LogIsPinned;// Offset=0x10 Size=0x2
};
