struct _WHEA_CXL_DEVICE_ID// Size=0x10 (Id=3840)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    unsigned short SubsystemVendorID;// Offset=0x4 Size=0x2
    unsigned short SubsystemDeviceID;// Offset=0x6 Size=0x2
    unsigned short ClassCode;// Offset=0x8 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Reserved:3;// Offset=0xa Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short SlotNumber:13;// Offset=0xa Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned char Reserved2[4];// Offset=0xc Size=0x4
};
