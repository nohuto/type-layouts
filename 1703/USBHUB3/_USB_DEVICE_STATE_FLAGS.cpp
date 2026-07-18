union _USB_DEVICE_STATE_FLAGS// Size=0x4 (Id=649)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceAttachSuccessful:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceIsKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HotResetOnEnumRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long WarmResetOnEnumRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ConfigurationIsValid:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DeviceReprogrammingPending:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ActivityIdSetForDsmRequests:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long WdfActivityIdValid:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long WdfPowerReferenceHeldOnFdo:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DeviceFailedAtLeastOneEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DifferentDeviceOnBootDevicePort:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DecorateSerialNumber:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long D3ColdEnabledByFunctionDriver:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ConfigDescIsValid:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long DeviceStarted:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long FailAlternateSetting:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LastSetAddressFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long InstallMSOSExtEventProcessed:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long DualRoleVendorCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
    };
};
