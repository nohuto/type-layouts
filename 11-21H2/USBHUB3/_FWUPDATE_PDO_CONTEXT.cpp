enum _WDF_POWER_DEVICE_STATE
{
    WdfPowerDeviceInvalid=0,
    WdfPowerDeviceD0=1,
    WdfPowerDeviceD1=2,
    WdfPowerDeviceD2=3,
    WdfPowerDeviceD3=4,
    WdfPowerDeviceD3Final=5,
    WdfPowerDevicePrepareForHibernation=6,
    WdfPowerDeviceMaximum=7
};

struct _FWUPDATE_PDO_CONTEXT// Size=0x20 (Id=341)
{
    struct _HUB_FDO_CONTEXT * HubFdoContext;// Offset=0x0 Size=0x8
    void * ConfigHandle;// Offset=0x8 Size=0x8
    void * InterfaceHandle;// Offset=0x10 Size=0x8
    unsigned char FailIoPendingReenumeration;// Offset=0x18 Size=0x1
    enum _WDF_POWER_DEVICE_STATE CurrentWdfPowerDeviceState;// Offset=0x1c Size=0x4
};
