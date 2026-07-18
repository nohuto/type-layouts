struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_HEADER// Size=0x20 (Id=400)
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

struct _STOR_SCSI_ADDRESS// Size=0x4 (Id=191)
{
    unsigned char PathId;// Offset=0x0 Size=0x1
    unsigned char TargetId;// Offset=0x1 Size=0x1
    unsigned char Lun;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_336// Size=0x10 (Id=336)
{
    void  ( * HwTimerRoutine)(void * );// Offset=0x0 Size=0x8
    unsigned long Timeout;// Offset=0x8 Size=0x4
};

struct _unnamed_337// Size=0x20 (Id=337)
{
    struct _SCSI_REQUEST_BLOCK * Srb;// Offset=0x0 Size=0x8
    unsigned long ErrorCode;// Offset=0x8 Size=0x4
    unsigned long UniqueId;// Offset=0xc Size=0x4
    unsigned char FreeErrorInfo[16];// Offset=0x10 Size=0x10
};

struct _unnamed_338// Size=0x4 (Id=338)
{
    unsigned long Timeout;// Offset=0x0 Size=0x4
};

struct _unnamed_339// Size=0x4 (Id=339)
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

struct _unnamed_340// Size=0x18 (Id=340)
{
    struct _STOR_TIMER_CONTEXT * StorTimer;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long TolerableDelay;// Offset=0x10 Size=0x4
};

struct _unnamed_341// Size=0x8 (Id=341)
{
    struct _STOR_ASYNC_NOTIFY_CONTEXT * StorAsyncNotify;// Offset=0x0 Size=0x8
};

struct _RAID_DEFERRED_ELEMENT// Size=0x50 (Id=342)
{
    struct _RAID_DEFERRED_HEADER Header;// Offset=0x0 Size=0x20
    enum _RAID_DEFERRED_TYPE Type;// Offset=0x20 Size=0x4
    struct _STOR_SCSI_ADDRESS Address;// Offset=0x24 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _unnamed_336 Timer;// Offset=0x28 Size=0x10
        struct _unnamed_337 Error;// Offset=0x28 Size=0x20
        struct _unnamed_338 PauseDevice;// Offset=0x28 Size=0x4
        struct _unnamed_339 Busy;// Offset=0x28 Size=0x4
        struct _unnamed_339 DeviceBusy;// Offset=0x28 Size=0x4
        struct _unnamed_340 AdditionalTimer;// Offset=0x28 Size=0x18
        struct _unnamed_341 AsyncNotification;// Offset=0x28 Size=0x8
    };
};

struct _unnamed_236// Size=0x50 (Id=236)
{
    struct _RAID_DEFERRED_ELEMENT Timer;// Offset=0x0 Size=0x50
};
