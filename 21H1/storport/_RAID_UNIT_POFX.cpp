struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _anonymous_327// Size=0x4 (Id=327)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ActiveForMaintenanceTime:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _RAID_UNIT_POFX// Size=0x90 (Id=328)
{
    struct POHANDLE__ * PoHandle;// Offset=0x0 Size=0x8
    void * PoFxDevice;// Offset=0x8 Size=0x8
    unsigned long CurrentFState;// Offset=0x10 Size=0x4
    unsigned long D3IdleTimeout;// Offset=0x14 Size=0x4
    unsigned long MinD3IdleTimeout;// Offset=0x18 Size=0x4
    unsigned long CurrentD3IdleTimeout;// Offset=0x1c Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeCapable:1;// Offset=0x20 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Active:1;// Offset=0x20 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MiniportOptedIn:1;// Offset=0x20 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DevicePowerRequired:1;// Offset=0x20 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SetPowerupReason:1;// Offset=0x20 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DPNRInCS:1;// Offset=0x20 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long F1InCS:1;// Offset=0x20 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DFxPowerDownInCS:1;// Offset=0x20 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AdaptiveD3IdleTimeoutEnabled:1;// Offset=0x20 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long AdaptiveD3IdleTimeoutEngaged:1;// Offset=0x20 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IoCoalescingOn:1;// Offset=0x20 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long OnBatteryPower:1;// Offset=0x20 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved0:20;// Offset=0x20 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long WaitWakeActiveReference;// Offset=0x24 Size=0x4
    unsigned long long AdaptiveD3IdleTimeoutEngagedCount;// Offset=0x28 Size=0x8
    unsigned long long AdaptiveD3IdleTimeoutCheckedCount;// Offset=0x30 Size=0x8
    union _LARGE_INTEGER LastIdleTimestamp;// Offset=0x38 Size=0x8
    struct _IRP * WaitWakeIrp;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY ActivePendingRequestQueue;// Offset=0x48 Size=0x10
    unsigned long long ActiveLock;// Offset=0x58 Size=0x8
    void * IoCoalescingRegistration;// Offset=0x60 Size=0x8
    void * AcDcRegistration;// Offset=0x68 Size=0x8
    struct _EX_TIMER * PowerCycleCheckTimer;// Offset=0x70 Size=0x8
    struct _EX_TIMER * MaintenanceTimer;// Offset=0x78 Size=0x8
    union _LARGE_INTEGER PreviousMaintenanceTime;// Offset=0x80 Size=0x8
    unsigned long ActiveRefsDuringMaintenanceTime;// Offset=0x88 Size=0x4
    union _anonymous_327 InterlockedFlags;// Offset=0x8c Size=0x4
};
