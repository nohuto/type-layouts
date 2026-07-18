struct _USB_START_FAILDATA// Size=0x14 (Id=254)
{
    unsigned long LengthInBytes;// Offset=0x0 Size=0x4
    long NtStatus;// Offset=0x4 Size=0x4
    long UsbdStatus;// Offset=0x8 Size=0x4
    unsigned long ConnectStatus;// Offset=0xc Size=0x4
    unsigned char DriverData[4];// Offset=0x10 Size=0x4
};
