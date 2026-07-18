enum _NDIS_DEVICE_POWER_STATE
{
    NdisDeviceStateUnspecified=0,
    NdisDeviceStateD0=1,
    NdisDeviceStateD1=2,
    NdisDeviceStateD2=3,
    NdisDeviceStateD3=4,
    NdisDeviceStateMaximum=5
};

struct _NDIS_PM_WAKE_UP_CAPABILITIES// Size=0xc (Id=1389)
{
    enum _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp;// Offset=0x0 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinPatternWakeUp;// Offset=0x4 Size=0x4
    enum _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp;// Offset=0x8 Size=0x4
};
