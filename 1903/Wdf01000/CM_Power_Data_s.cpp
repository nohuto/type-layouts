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

struct CM_Power_Data_s// Size=0x38 (Id=3515)
{
    unsigned long PD_Size;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE PD_MostRecentPowerState;// Offset=0x4 Size=0x4
    unsigned long PD_Capabilities;// Offset=0x8 Size=0x4
    unsigned long PD_D1Latency;// Offset=0xc Size=0x4
    unsigned long PD_D2Latency;// Offset=0x10 Size=0x4
    unsigned long PD_D3Latency;// Offset=0x14 Size=0x4
    enum _DEVICE_POWER_STATE PD_PowerStateMapping[7];// Offset=0x18 Size=0x1c
    enum _SYSTEM_POWER_STATE PD_DeepestSystemWake;// Offset=0x34 Size=0x4
};
