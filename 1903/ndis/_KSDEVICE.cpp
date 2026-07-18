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

struct _KSDEVICE// Size=0x40 (Id=427)
{
    struct _KSDEVICE_DESCRIPTOR * Descriptor;// Offset=0x0 Size=0x8
    void * Bag;// Offset=0x8 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * FunctionalDeviceObject;// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x20 Size=0x8
    struct _DEVICE_OBJECT * NextDeviceObject;// Offset=0x28 Size=0x8
    unsigned char Started;// Offset=0x30 Size=0x1
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x34 Size=0x4
    enum _DEVICE_POWER_STATE DevicePowerState;// Offset=0x38 Size=0x4
};
