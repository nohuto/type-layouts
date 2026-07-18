enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES
{
    IdleCapsInvalid=0,
    IdleCannotWakeFromS0=1,
    IdleCanWakeFromS0=2,
    IdleUsbSelectiveSuspend=3
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

enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL
{
    IdleUserControlInvalid=0,
    IdleDoNotAllowUserControl=1,
    IdleAllowUserControl=2
};

enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE
{
    DriverManagedIdleTimeout=0,
    SystemManagedIdleTimeout=1,
    SystemManagedIdleTimeoutWithHint=2
};

struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS// Size=0x24 (Id=198)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps;// Offset=0x4 Size=0x4
    enum _DEVICE_POWER_STATE DxState;// Offset=0x8 Size=0x4
    unsigned long IdleTimeout;// Offset=0xc Size=0x4
    enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings;// Offset=0x10 Size=0x4
    enum _WDF_TRI_STATE Enabled;// Offset=0x14 Size=0x4
    enum _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake;// Offset=0x18 Size=0x4
    enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE IdleTimeoutType;// Offset=0x1c Size=0x4
    enum _WDF_TRI_STATE ExcludeD3Cold;// Offset=0x20 Size=0x4
};
