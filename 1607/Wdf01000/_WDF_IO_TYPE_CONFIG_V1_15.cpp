enum _WDF_DEVICE_IO_TYPE
{
    WdfDeviceIoUndefined=0,
    WdfDeviceIoNeither=1,
    WdfDeviceIoBuffered=2,
    WdfDeviceIoDirect=3,
    WdfDeviceIoBufferedOrDirect=4,
    WdfDeviceIoMaximum=5
};

struct _WDF_IO_TYPE_CONFIG_V1_15// Size=0x10 (Id=3281)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_DEVICE_IO_TYPE ReadWriteIoType;// Offset=0x4 Size=0x4
    enum _WDF_DEVICE_IO_TYPE DeviceControlIoType;// Offset=0x8 Size=0x4
    unsigned long DirectTransferThreshold;// Offset=0xc Size=0x4
};
