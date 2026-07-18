union _USB_HUB_STATUS// Size=0x2 (Id=569)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerLost:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_CHANGE// Size=0x2 (Id=492)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short LocalPowerChange:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short OverCurrentChange:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

union _USB_HUB_STATUS_AND_CHANGE// Size=0x4 (Id=484)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    union _USB_HUB_STATUS HubStatus;// Offset=0x0 Size=0x2
    union _USB_HUB_CHANGE HubChange;// Offset=0x2 Size=0x2
};
