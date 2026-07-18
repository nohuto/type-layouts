struct _USB_DEVICE_CAPABILITY_CONFIGURATION_SUMMARY_DESCRIPTOR// Size=0xb (Id=2308)
{
    union // Size=0x8 (Id=0)
    {
        unsigned char bLength;// Offset=0x0 Size=0x1
        unsigned char bDescriptorType;// Offset=0x1 Size=0x1
        unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
        unsigned short bcdVersion;// Offset=0x3 Size=0x2
        unsigned char bConfigurationValue;// Offset=0x5 Size=0x1
        unsigned char bMaxPower;// Offset=0x6 Size=0x1
        unsigned char bNumFunctions;// Offset=0x7 Size=0x1
        struct <unnamed-type-Function>// Size=0x3 (Id=15855)
        {
            unsigned char bClass;// Offset=0x0 Size=0x1
            unsigned char bSubClass;// Offset=0x1 Size=0x1
            unsigned char bProtocol;// Offset=0x2 Size=0x1
        };
        struct _USB_DEVICE_CAPABILITY_CONFIGURATION_SUMMARY_DESCRIPTOR::<unnamed-type-Function> Function[1];// Offset=0x8 Size=0x3
    };
};
