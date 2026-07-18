union _USB_PORT_FLAGS// Size=0x4 (Id=454)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceConnected:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ConnectedDeviceSupportsReAttach:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long CanQueueOverCurrentReset:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SSInactiveForBootDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PendingSQMUpdateForSurpriseRemoval:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PendingPowerReferenceOnHub:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long TypeCPortHasDeviceInChildList:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
    };
};
