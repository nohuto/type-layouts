union _USB_DEVICE_PROPERTIES// Size=0x4 (Id=472)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceReservedUXD:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceIsHub:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DeviceIsComposite:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ContainerIdValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long BOSContainerIdValid:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DeviceNotRemovable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MsOsDescriptorNotSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long UsbWakeupSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ExtPropertyInstalled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DeviceSupportsSelectiveSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DeviceIsSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DeviceIsEnhancedSuperSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DeviceIsHighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long AllowIdleIrpInD3:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long D3ColdSupportedInAcpi:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long ChargingPolicySupported:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long DeviceIsBillboard:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long DeviceIsDualRole:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long FailGetStatusRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long LtmCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
    };
};
