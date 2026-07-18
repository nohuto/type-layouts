enum _POWER_STATE_TYPE
{
    SystemPowerState=0,
    DevicePowerState=1
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

union _POWER_STATE// Size=0x4 (Id=134)
{
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x0 Size=0x4
};

struct _PERFINFO_PO_NOTIFY_DEVICE// Size=0x28 (Id=2577)
{
    void * Irp;// Offset=0x0 Size=0x8
    void * DriverStart;// Offset=0x8 Size=0x8
    unsigned char OrderLevel;// Offset=0x10 Size=0x1
    unsigned char MajorFunction;// Offset=0x11 Size=0x1
    unsigned char MinorFunction;// Offset=0x12 Size=0x1
    enum _POWER_STATE_TYPE Type;// Offset=0x14 Size=0x4
    union _POWER_STATE State;// Offset=0x18 Size=0x4
    unsigned long DeviceNameLength;// Offset=0x1c Size=0x4
    wchar_t DeviceName[1];// Offset=0x20 Size=0x2
};
