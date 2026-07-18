struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR// Size=0x30 (Id=2737)
{
    union // Size=0x2c (Id=0)
    {
        unsigned char bLength;// Offset=0x0 Size=0x1
        unsigned char bDescriptorType;// Offset=0x1 Size=0x1
        unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
        unsigned char iAddtionalInfoURL;// Offset=0x3 Size=0x1
        unsigned char bNumberOfAlternateModes;// Offset=0x4 Size=0x1
        unsigned char bPreferredAlternateMode;// Offset=0x5 Size=0x1
        union <unnamed-type-VconnPower>// Size=0x2 (Id=15941)
        {
            unsigned short AsUshort;// Offset=0x0 Size=0x2
            unsigned short VConnPowerNeededForFullFunctionality:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
            unsigned short Reserved:12;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xc
            unsigned short NoVconnPowerRequired:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
        };
        union _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR::<unnamed-type-VconnPower> VconnPower;// Offset=0x6 Size=0x2
        unsigned char bmConfigured[32];// Offset=0x8 Size=0x20
        unsigned long bReserved;// Offset=0x28 Size=0x4
        struct <unnamed-type-AlternateMode>// Size=0x4 (Id=15949)
        {
            unsigned short wSVID;// Offset=0x0 Size=0x2
            unsigned char bAlternateMode;// Offset=0x2 Size=0x1
            unsigned char iAlternateModeSetting;// Offset=0x3 Size=0x1
        };
        struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR::<unnamed-type-AlternateMode> AlternateMode[1];// Offset=0x2c Size=0x4
    };
};
