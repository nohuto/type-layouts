enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
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

struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_POWER_INFO// Size=0xe8 (Id=577)
{
    void * Context;// Offset=0x0 Size=0x8
    enum _DEVICE_POWER_STATE PowerState;// Offset=0x8 Size=0x4
    void  ( * DeviceNotifyHandler)(void * ,unsigned long );// Offset=0x10 Size=0x8
    void * HandlerContext;// Offset=0x18 Size=0x8
    struct _ACPI_DEVICE_POWER_NODE * PowerNode[5];// Offset=0x20 Size=0x28
    struct _ACPI_DEVICE_POWER_NODE * ResetPowerNode;// Offset=0x48 Size=0x8
    struct _NSObjRef * PowerObject[5];// Offset=0x50 Size=0x28
    struct _NSObjRef * DeviceResetObject;// Offset=0x78 Size=0x8
    unsigned long WakeBit;// Offset=0x80 Size=0x4
    enum _DEVICE_POWER_STATE DevicePowerMatrix[7];// Offset=0x84 Size=0x1c
    enum _SYSTEM_POWER_STATE SystemWakeLevel;// Offset=0xa0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceWakeLevel;// Offset=0xa4 Size=0x4
    enum _DEVICE_POWER_STATE DesiredPowerState;// Offset=0xa8 Size=0x4
    enum _SYSTEM_POWER_STATE CurrentSystemState;// Offset=0xac Size=0x4
    unsigned long WakeSupportCount;// Offset=0xb0 Size=0x4
    unsigned char SurprisePowerOnNotified;// Offset=0xb4 Size=0x1
    struct _LIST_ENTRY WakeSupportList;// Offset=0xb8 Size=0x10
    struct _ACPI_POWER_REQUEST * CurrentPowerRequest;// Offset=0xc8 Size=0x8
    struct _LIST_ENTRY PowerRequestListEntry;// Offset=0xd0 Size=0x10
    struct // Size=0x4 (Id=0)
    {
        unsigned long SupportDeviceD1:1;// Offset=0xe0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SupportDeviceD2:1;// Offset=0xe0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SupportWakeFromD0:1;// Offset=0xe0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SupportWakeFromD1:1;// Offset=0xe0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SupportWakeFromD2:1;// Offset=0xe0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SupportWakeFromD3:1;// Offset=0xe0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SupportDsw:1;// Offset=0xe0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0xe0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};
