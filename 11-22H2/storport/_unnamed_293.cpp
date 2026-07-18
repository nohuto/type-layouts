struct _SLIST_ENTRY// Size=0x10 (Id=218)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=683)
{
    struct _SLIST_ENTRY Link;// Offset=0x0 Size=0x10
    long Pool;// Offset=0x10 Size=0x4
};

enum _RAID_DEFERRED_TYPE
{
    RaidDeferredTimerRequest=1,
    RaidDeferredError=2,
    RaidDeferredPause=3,
    RaidDeferredResume=4,
    RaidDeferredPauseDevice=5,
    RaidDeferredResumeDevice=6,
    RaidDeferredBusy=7,
    RaidDeferredReady=8,
    RaidDeferredDeviceBusy=9,
    RaidDeferredDeviceReady=10,
    RaidDeferredAdditionalTimerRequest=11,
    RaidDeferredAsyncNotification=12
};

union _RAID_ADDRESS// Size=0x4 (Id=228)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespaceId:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _unnamed_571// Size=0x10 (Id=571)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_572// Size=0x20 (Id=572)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_573// Size=0x4 (Id=573)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_574// Size=0x4 (Id=574)
{
    unsigned long RequestsToComplete;// Offset=0x0 Size=0x4
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

struct _unnamed_575// Size=0x18 (Id=575)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_576// Size=0x8 (Id=576)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=577)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    union _RAID_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_571 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_572 Error;// Offset=0x28 Size=0x20
        struct _unnamed_573 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_574 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_574 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_575 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_576 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_293// Size=0x190 (Id=293)
{
    struct _RAID_DEFERRED_ELEMENT PauseDevice;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT ResumeDevice;// Offset=0x50 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceBusy;// Offset=0xa0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT DeviceReady;// Offset=0xf0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AsyncNotification;// Offset=0x140 Size=0x50
};
