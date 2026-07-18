enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

struct _unnamed_615// Size=0x8 (Id=615)
{
    enum _DEVICE_POWER_STATE DevicePowerState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE PreviousDevicePowerState;// Offset=0x4 Size=0x4
};
