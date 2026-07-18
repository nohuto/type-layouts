struct _XILCORE_USBDEVICE_DATA// Size=0x28 (Id=963)
{
    void * UsbDeviceHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned char IsProxyUsbDevice;// Offset=0x10 Size=0x1
    struct _XIL_BUFFER_DATA * DeviceContextBuffer;// Offset=0x18 Size=0x8
    struct _XIL_BUFFER_DATA * InputDeviceContextBuffer;// Offset=0x20 Size=0x8
};

struct _XIL_DIRECT_USBDEVICE_DATA// Size=0x28 (Id=947)
{
    struct _XILCORE_USBDEVICE_DATA XilCoreUsbDeviceData;// Offset=0x0 Size=0x28
};

struct _XIL_PROXY_USBDEVICE_DATA// Size=0x30 (Id=949)
{
    struct TRUSTLET_OBJECT_HANDLE__ * RemoteUsbDeviceHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_USBDEVICE_DATA XilCoreUsbDeviceData;// Offset=0x8 Size=0x28
};

struct _XIL_USBDEVICE_DATA// Size=0x60 (Id=846)
{
    union // Size=0x28 (Id=0)
    {
        struct _XIL_DIRECT_USBDEVICE_DATA XilDirectUsbDeviceData;// Offset=0x0 Size=0x28
        struct _XIL_PROXY_USBDEVICE_DATA XilProxyUsbDeviceData;// Offset=0x0 Size=0x30
    };
    unsigned char IsSecureDevice;// Offset=0x30 Size=0x1
    unsigned char IsProxyUsbDevice;// Offset=0x31 Size=0x1
    unsigned char IsDeviceContextLocal;// Offset=0x32 Size=0x1
    void * UsbDeviceHandle;// Offset=0x38 Size=0x8
    unsigned char IsFirmwareHashValid;// Offset=0x40 Size=0x1
    unsigned char IsFirmwareHashQueried;// Offset=0x41 Size=0x1
    unsigned char IsFirmwareHashFromDevicePresent;// Offset=0x42 Size=0x1
    void * FirmwareHashFromDevice;// Offset=0x48 Size=0x8
    unsigned char IsFirmwareHashFromSDEVEntryPresent;// Offset=0x50 Size=0x1
    void * FirmwareHashFromSDEVEntry;// Offset=0x58 Size=0x8
};
