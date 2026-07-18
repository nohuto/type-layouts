enum _USBPORT_INITDEV_ERROR
{
    InitDevErrNotSet=0,
    InitDevFailedSetAddress=1,
    InitDevFailedPokeEndpoint=2,
    InitDevBadDeviceDescriptor=3
};

struct _USB_ID_ERROR_INFORMATION// Size=0x58 (Id=197)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _USBPORT_INITDEV_ERROR PathError;// Offset=0x4 Size=0x4
    unsigned long Arg1;// Offset=0x8 Size=0x4
    unsigned long UsbAddress;// Offset=0xc Size=0x4
    long NtStatus;// Offset=0x10 Size=0x4
    long UsbdStatus;// Offset=0x14 Size=0x4
    unsigned char XtraInfo[64];// Offset=0x18 Size=0x40
};
