enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
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

struct _WDF_DEVICE_POWER_CAPABILITIES// Size=0x50 (Id=220)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_TRI_STATE DeviceD1;// Offset=0x4 Size=0x4
    enum _WDF_TRI_STATE DeviceD2;// Offset=0x8 Size=0x4
    enum _WDF_TRI_STATE WakeFromD0;// Offset=0xc Size=0x4
    enum _WDF_TRI_STATE WakeFromD1;// Offset=0x10 Size=0x4
    enum _WDF_TRI_STATE WakeFromD2;// Offset=0x14 Size=0x4
    enum _WDF_TRI_STATE WakeFromD3;// Offset=0x18 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState[7];// Offset=0x1c Size=0x1c
    enum _DEVICE_POWER_STATE DeviceWake;// Offset=0x38 Size=0x4
    enum _SYSTEM_POWER_STATE SystemWake;// Offset=0x3c Size=0x4
    unsigned long D1Latency;// Offset=0x40 Size=0x4
    unsigned long D2Latency;// Offset=0x44 Size=0x4
    unsigned long D3Latency;// Offset=0x48 Size=0x4
    enum _DEVICE_POWER_STATE IdealDxStateForSx;// Offset=0x4c Size=0x4
};
