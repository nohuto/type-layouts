struct _USB_INTERFACE_POWER_DESCRIPTOR// Size=0xf (Id=3990)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bmCapabilitiesFlags;// Offset=0x2 Size=0x1
    unsigned char bBusPowerSavingD1;// Offset=0x3 Size=0x1
    unsigned char bSelfPowerSavingD1;// Offset=0x4 Size=0x1
    unsigned char bBusPowerSavingD2;// Offset=0x5 Size=0x1
    unsigned char bSelfPowerSavingD2;// Offset=0x6 Size=0x1
    unsigned char bBusPowerSavingD3;// Offset=0x7 Size=0x1
    unsigned char bSelfPowerSavingD3;// Offset=0x8 Size=0x1
    unsigned short TransitionTimeFromD1;// Offset=0x9 Size=0x2
    unsigned short TransitionTimeFromD2;// Offset=0xb Size=0x2
    unsigned short TransitionTimeFromD3;// Offset=0xd Size=0x2
};
