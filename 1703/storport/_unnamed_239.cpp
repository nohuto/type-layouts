struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=413)
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

struct _STOR_SCSI_ADDRESS// Size=0x4 (Id=190)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_342// Size=0x10 (Id=342)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_343// Size=0x20 (Id=343)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_344// Size=0x4 (Id=344)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_345// Size=0x4 (Id=345)
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

struct _unnamed_346// Size=0x18 (Id=346)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_347// Size=0x8 (Id=347)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=348)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    struct _STOR_SCSI_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_342 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_343 Error;// Offset=0x28 Size=0x20
        struct _unnamed_344 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_345 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_345 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_346 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_347 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_239// Size=0xb0 (Id=239)
{
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayPause;// Offset=0x0 Size=0x50
    struct _RAID_DEFERRED_ELEMENT AdapterGatewayResume;// Offset=0x50 Size=0x50
    unsigned long LatestAdapterGatewayPauseTimeoutValue;// Offset=0xa0 Size=0x4
    long EndResultPauseDesired;// Offset=0xa4 Size=0x4
};
