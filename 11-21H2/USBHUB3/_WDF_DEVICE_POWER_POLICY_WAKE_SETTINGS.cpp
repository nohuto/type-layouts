enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL
{
    WakeUserControlInvalid=0,
    WakeDoNotAllowUserControl=1,
    WakeAllowUserControl=2
};

enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS// Size=0x14 (Id=186)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE DxState;// Offset=0x4 Size=0x4
    enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings;// Offset=0x8 Size=0x4
    enum _WDF_TRI_STATE Enabled;// Offset=0xc Size=0x4
    unsigned char ArmForWakeIfChildrenAreArmedForWake;// Offset=0x10 Size=0x1
    unsigned char IndicateChildWakeOnParentWake;// Offset=0x11 Size=0x1
};
