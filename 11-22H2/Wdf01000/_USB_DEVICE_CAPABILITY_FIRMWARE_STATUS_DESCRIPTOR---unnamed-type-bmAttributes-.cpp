union _USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR::<unnamed-type-bmAttributes>// Size=0x4 (Id=1605)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long GetFirmwareImageHashSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisallowFirmwareUpdateSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};
