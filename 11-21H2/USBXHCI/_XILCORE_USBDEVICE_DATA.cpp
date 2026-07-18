struct _XILCORE_USBDEVICE_DATA// Size=0x28 (Id=984)
{
    void * UsbDeviceHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned char IsProxyUsbDevice;// Offset=0x10 Size=0x1
    struct _XIL_BUFFER_DATA * DeviceContextBuffer;// Offset=0x18 Size=0x8
    struct _XIL_BUFFER_DATA * InputDeviceContextBuffer;// Offset=0x20 Size=0x8
};
