enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

union _unnamed_561// Size=0x4 (Id=561)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SystemPoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DevicePoweringUp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DevicePoweringDown:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long KsrPowerDownInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SetSystemPowerRequestFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SystemPoweringUp:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _STOR_POWER_STATE// Size=0x10 (Id=562)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    union _unnamed_561 Flags;// Offset=0xc Size=0x4
};

struct _unnamed_452// Size=0x10 (Id=452)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=453)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_452 HeaderX64;// Offset=0x0 Size=0x10
};

enum _RAID_SYSTEM_POWER
{
    RaidSystemPowerUnknown=0,
    RaidSystemPowerLowest=1,
    RaidSystemPowerLow=2,
    RaidSystemPowerMedium=3,
    RaidSystemPowerHigh=4
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_422// Size=0x20 (Id=422)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};

union _unnamed_550// Size=0x4 (Id=550)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long D3InModernStandbyEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long D3InLowestSystemPower:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PStatesRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long D3ColdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long D3ColdAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PoFxPlaceHolderModeEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DumpActiveNotCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DumpAlwaysPowerOn:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long NoNamespacePoFxRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DisableInterruptsOnD3:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long D3IdleTimeoutUserOverride:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AutoPowerStateTransitionEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PendingMaxPStateChange:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SystemInLPE:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long SystemCoalescingOn:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long PdcIdleResiliencyEngaged:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long CoolingInterfaceExposed:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SetNOPPMEPendingForPowerUp:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long NOPPMEPendingToEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _unnamed_551// Size=0x4 (Id=551)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PStateTransitionInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=1093)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=619)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NVME_ADAPTER_POWER// Size=0x180 (Id=552)
{
    unsigned char PoFxRegistered;// Offset=0x0 Size=0x1
    unsigned char DeepestOpPowerStateIndex;// Offset=0x1 Size=0x1
    unsigned char Reserved0[2];// Offset=0x2 Size=0x2
    unsigned long DeepestFstateResumeLatency;// Offset=0x4 Size=0x4
    struct _NVME_ADAPTER_POFX * AdapterPoFx;// Offset=0x8 Size=0x8
    struct _NVME_PER_PROCESSOR_DATA ** PerProcessorData;// Offset=0x10 Size=0x8
    struct _NVME_ADAPTER_POWER_STATISTICS * StatisticsData;// Offset=0x18 Size=0x8
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x20 Size=0x8
    struct _STOR_POFX_DEVICE_V3 * PoFxDevice;// Offset=0x28 Size=0x8
    struct _STOR_POFX_COMPONENT_PERF_SET * PerfSet;// Offset=0x30 Size=0x8
    struct _IO_WORKITEM * QuiesceIoWorkitem;// Offset=0x38 Size=0x8
    struct _STOR_POWER_STATE PowerState;// Offset=0x40 Size=0x10
    struct _EX_RUNDOWN_REF_CACHE_AWARE * PoFxRundownProtection;// Offset=0x50 Size=0x8
    union _SLIST_HEADER NamespacesPendingPowerUpList;// Offset=0x60 Size=0x10
    unsigned char QuiesceIoTimeoutInSeconds;// Offset=0x70 Size=0x1
    unsigned char QuiesceIoDurationInSeconds;// Offset=0x71 Size=0x1
    unsigned char Reserved1[2];// Offset=0x72 Size=0x2
    unsigned long PoweredDownNamespaceCount;// Offset=0x74 Size=0x4
    unsigned long long Lock;// Offset=0x78 Size=0x8
    void  ( * AdapterEmptyNotificationRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x80 Size=0x8
    enum _RAID_SYSTEM_POWER CurrentSystemPowerHint;// Offset=0x88 Size=0x4
    struct _unnamed_422 DFxQueue;// Offset=0x90 Size=0x20
    union _unnamed_550 Flags;// Offset=0xb0 Size=0x4
    unsigned char CurrentPowerStateIndex;// Offset=0xb4 Size=0x1
    unsigned char PStateCount;// Offset=0xb5 Size=0x1
    unsigned char CurrentPState;// Offset=0xb6 Size=0x1
    unsigned char MaxPState;// Offset=0xb7 Size=0x1
    unsigned char Reserved2[4];// Offset=0xb8 Size=0x4
    unsigned long CurrentResumeLatency;// Offset=0xbc Size=0x4
    unsigned long SystemResumeLatency;// Offset=0xc0 Size=0x4
    unsigned long PrimaryResumeLatency;// Offset=0xc4 Size=0x4
    unsigned long PrimaryIdleTimeout;// Offset=0xc8 Size=0x4
    unsigned long SecondaryResumeLatency;// Offset=0xcc Size=0x4
    unsigned long SecondaryIdleTimeout;// Offset=0xd0 Size=0x4
    union _unnamed_551 InterlockedFlags;// Offset=0xd4 Size=0x4
    struct _RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;// Offset=0xd8 Size=0x18
    unsigned long RequestD0IrpFailCount;// Offset=0xf0 Size=0x4
    unsigned long RequestD3IrpFailCount;// Offset=0xf4 Size=0x4
    unsigned long RequestWaitWakeIrpFailCount;// Offset=0xf8 Size=0x4
    unsigned long PowerTransitionRaceCount;// Offset=0xfc Size=0x4
    unsigned long TransitToF0FailCount;// Offset=0x100 Size=0x4
    unsigned long TransitToFxFailCount;// Offset=0x104 Size=0x4
    unsigned long RequestD0ForDfxCount;// Offset=0x108 Size=0x4
    unsigned long RequestD3ForDfxCount;// Offset=0x10c Size=0x4
    unsigned long AcpiDsdStorageD3PropertyValue;// Offset=0x110 Size=0x4
    void * LowPowerEpochHandle;// Offset=0x118 Size=0x8
    void * CoalescingRegistration;// Offset=0x120 Size=0x8
    void * PdcIdleResiliencyEngagedHandle;// Offset=0x128 Size=0x8
    void * MaxPowerHandle;// Offset=0x130 Size=0x8
    struct _STOR_POWER_SETTING_NOTIFICATION * PowerSettingNotification;// Offset=0x138 Size=0x8
    struct _UNICODE_STRING CoolingInterfaceSymlink;// Offset=0x140 Size=0x10
    struct _UNICODE_STRING NonPoFxMiniportInterfaceName;// Offset=0x150 Size=0x10
    unsigned long long LastIOCoalescingOnStartTime;// Offset=0x160 Size=0x8
    unsigned long long IOCoalescingOnDuration;// Offset=0x168 Size=0x8
};
