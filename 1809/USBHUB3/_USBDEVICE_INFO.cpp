enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USBDEVICE_INFO// Size=0x18 (Id=563)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x4 Size=0x4
    unsigned long PortNumber;// Offset=0x8 Size=0x4
    struct USB_DEVICE_CONTEXT__ * Context;// Offset=0x10 Size=0x8
};
