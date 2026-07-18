struct _USBD_VERSION_INFORMATION// Size=0x8 (Id=690)
{
    unsigned long USBDI_Version;// Offset=0x0 Size=0x4
    unsigned long Supported_USB_Version;// Offset=0x4 Size=0x4
};

struct _WDF_USB_DEVICE_INFORMATION_V1_21// Size=0x14 (Id=4679)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _USBD_VERSION_INFORMATION UsbdVersionInformation;// Offset=0x4 Size=0x8
    unsigned long HcdPortCapabilities;// Offset=0xc Size=0x4
    unsigned long Traits;// Offset=0x10 Size=0x4
};
