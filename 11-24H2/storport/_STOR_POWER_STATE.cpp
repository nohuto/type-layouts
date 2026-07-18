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
