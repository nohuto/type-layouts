enum _USB_CONNECTION_STATUS
{
    NoDeviceConnected=0,
    DeviceConnected=1,
    DeviceFailedEnumeration=2,
    DeviceGeneralFailure=3,
    DeviceCausedOvercurrent=4,
    DeviceNotEnoughPower=5,
    DeviceNotEnoughBandwidth=6,
    DeviceHubNestedTooDeeply=7,
    DeviceInLegacyHub=8,
    DeviceEnumerating=9,
    DeviceReset=10
};
