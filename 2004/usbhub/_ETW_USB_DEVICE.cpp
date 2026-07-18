struct _USB_PORT_PATH// Size=0x1c (Id=341)
{
    unsigned long PortPathDepth;// Offset=0x0 Size=0x4
    unsigned long PortPath[6];// Offset=0x4 Size=0x18
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _ETW_USB_DEVICE// Size=0x2c (Id=165)
{
    void * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned short idVendor;// Offset=0x8 Size=0x2
    unsigned short idProduct;// Offset=0xa Size=0x2
    struct _USB_PORT_PATH PortPath;// Offset=0xc Size=0x1c
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x28 Size=0x4
};
