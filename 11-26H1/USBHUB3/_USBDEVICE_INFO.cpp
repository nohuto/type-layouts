enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

enum _USB_DEVICE_SPEED_EX
{
    UsbLowSpeedEx=0,
    UsbFullSpeedEx=1,
    UsbHighSpeedEx=2,
    UsbSuperSpeedEx=3,
    UsbSuperSpeedPlusEx=4,
    UsbSuperSpeedPlusGen1x2Ex=5,
    UsbSuperSpeedPlusGen2x2Ex=6
};

struct _USBDEVICE_INFO// Size=0x20 (Id=689)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x4 Size=0x4
    unsigned long PortNumber;// Offset=0x8 Size=0x4
    struct USB_DEVICE_CONTEXT__ * Context;// Offset=0x10 Size=0x8
    enum _USB_DEVICE_SPEED_EX DeviceSpeedEx;// Offset=0x18 Size=0x4
};
