enum _WDF_USB_PIPE_TYPE
{
    WdfUsbPipeTypeInvalid=0,
    WdfUsbPipeTypeControl=1,
    WdfUsbPipeTypeIsochronous=2,
    WdfUsbPipeTypeBulk=3,
    WdfUsbPipeTypeInterrupt=4
};

struct _WDF_USB_PIPE_INFORMATION_V1_5// Size=0x14 (Id=1640)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long MaximumPacketSize;// Offset=0x4 Size=0x4
    unsigned char EndpointAddress;// Offset=0x8 Size=0x1
    unsigned char Interval;// Offset=0x9 Size=0x1
    unsigned char SettingIndex;// Offset=0xa Size=0x1
    enum _WDF_USB_PIPE_TYPE PipeType;// Offset=0xc Size=0x4
    unsigned long MaximumTransferSize;// Offset=0x10 Size=0x4
};
