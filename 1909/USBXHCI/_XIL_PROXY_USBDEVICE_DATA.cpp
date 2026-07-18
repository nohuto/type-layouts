struct _XILCORE_USBDEVICE_DATA// Size=0x28 (Id=929)
{
    void * UsbDeviceHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned char IsProxyUsbDevice;// Offset=0x10 Size=0x1
    struct _XIL_BUFFER_DATA * DeviceContextBuffer;// Offset=0x18 Size=0x8
    struct _XIL_BUFFER_DATA * InputDeviceContextBuffer;// Offset=0x20 Size=0x8
};

struct _XIL_PROXY_USBDEVICE_DATA// Size=0x30 (Id=915)
{
    struct TRUSTLET_OBJECT_HANDLE__ * RemoteUsbDeviceHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_USBDEVICE_DATA XilCoreUsbDeviceData;// Offset=0x8 Size=0x28
};
