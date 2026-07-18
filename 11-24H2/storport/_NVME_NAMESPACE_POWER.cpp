struct _unnamed_554// Size=0x10 (Id=554)
{
    unsigned short FState;// Offset=0x0 Size=0x2
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char FStateTransition:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DStateTransition:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Reserved0:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
        unsigned char AsUchar;// Offset=0x2 Size=0x1
    };
    unsigned char Reserved1[5];// Offset=0x3 Size=0x5
    struct _IRP * PowerIrp;// Offset=0x8 Size=0x8
};

enum _STORAGE_POWERUP_REASON_TYPE
{
    StoragePowerupUnknown=0,
    StoragePowerupIO=1,
    StoragePowerupDeviceAttention=2
};

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

union _unnamed_559// Size=0x4 (Id=559)
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

struct _STOR_POWER_STATE// Size=0x10 (Id=560)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    union _unnamed_559 Flags;// Offset=0xc Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_412// Size=0x20 (Id=412)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};

union _unnamed_555// Size=0x4 (Id=555)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long D3ColdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long D3ColdAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long D3ColdSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DumpAlwaysPowerOn:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DumpActiveNotCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=1088)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _NVME_NAMESPACE_POWER// Size=0xc0 (Id=556)
{
    unsigned char AlwaysActive;// Offset=0x0 Size=0x1
    unsigned char PoFxRegistered;// Offset=0x1 Size=0x1
    unsigned char Reserved0[6];// Offset=0x2 Size=0x6
    struct _NVME_NAMESPACE_POFX * NamespacePoFx;// Offset=0x8 Size=0x8
    struct _D3COLD_SUPPORT_INTERFACE * D3ColdInterface;// Offset=0x10 Size=0x8
    struct _NVME_PER_PROCESSOR_DATA ** PerProcessorData;// Offset=0x18 Size=0x8
    struct _NVME_NAMESPACE_POWER_STATISTICS * StatisticsData;// Offset=0x20 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * PoFxRundownProtection;// Offset=0x28 Size=0x8
    struct _unnamed_554 PendingPowerUpContext;// Offset=0x30 Size=0x10
    enum _STORAGE_POWERUP_REASON_TYPE PowerUpReason;// Offset=0x40 Size=0x4
    struct _STOR_POWER_STATE PowerState;// Offset=0x44 Size=0x10
    unsigned long long Lock;// Offset=0x58 Size=0x8
    unsigned long ActiveReferenceOnAdapter;// Offset=0x60 Size=0x4
    struct _unnamed_412 DFxQueue;// Offset=0x68 Size=0x20
    union _unnamed_555 Flags;// Offset=0x88 Size=0x4
    struct _RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;// Offset=0x90 Size=0x18
    unsigned long RequestD0IrpFailCount;// Offset=0xa8 Size=0x4
    unsigned long RequestD3IrpFailCount;// Offset=0xac Size=0x4
    unsigned long RequestWaitWakeIrpFailCount;// Offset=0xb0 Size=0x4
    unsigned long PowerUpRequired;// Offset=0xb4 Size=0x4
    unsigned long PowerDownRequired;// Offset=0xb8 Size=0x4
};
