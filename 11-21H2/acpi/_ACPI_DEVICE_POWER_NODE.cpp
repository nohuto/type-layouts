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

struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_DEVICE_POWER_NODE// Size=0x38 (Id=789)
{
    struct _ACPI_DEVICE_POWER_NODE * Next;// Offset=0x0 Size=0x8
    struct _ACPI_POWER_DEVICE_NODE * PowerNode;// Offset=0x8 Size=0x8
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x10 Size=0x4
    enum _DEVICE_POWER_STATE AssociatedDeviceState;// Offset=0x14 Size=0x4
    unsigned char WakePowerResource;// Offset=0x18 Size=0x1
    struct _DEVICE_EXTENSION * DeviceExtension;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY DevicePowerListEntry;// Offset=0x28 Size=0x10
};
