struct _USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR// Size=0x8 (Id=2057)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char bLength;// Offset=0x0 Size=0x1
        unsigned char bDescriptorType;// Offset=0x1 Size=0x1
        unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
        unsigned char bcdDescriptorVersion;// Offset=0x3 Size=0x1
        union <unnamed-type-bmAttributes>// Size=0x4 (Id=15963)
        {
            unsigned long AsUlong;// Offset=0x0 Size=0x4
            unsigned long GetFirmwareImageHashSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DisallowFirmwareUpdateSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    union _USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR::<unnamed-type-bmAttributes> bmAttributes;// Offset=0x4 Size=0x4
};
