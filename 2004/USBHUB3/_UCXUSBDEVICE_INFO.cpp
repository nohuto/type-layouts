enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_DEVICE_PORT_PATH// Size=0x24 (Id=657)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long PortPathDepth;// Offset=0x4 Size=0x4
    unsigned long TTHubDepth;// Offset=0x8 Size=0x4
    unsigned long PortPath[6];// Offset=0xc Size=0x18
};

struct _UCXUSBDEVICE_INFO// Size=0x38 (Id=518)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x4 Size=0x4
    struct UCXUSBDEVICE__ * TtHub;// Offset=0x8 Size=0x8
    struct _USB_DEVICE_PORT_PATH PortPath;// Offset=0x10 Size=0x24
};
