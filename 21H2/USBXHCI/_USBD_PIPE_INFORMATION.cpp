enum _USBD_PIPE_TYPE
{
    UsbdPipeTypeControl=0,
    UsbdPipeTypeIsochronous=1,
    UsbdPipeTypeBulk=2,
    UsbdPipeTypeInterrupt=3
};

struct _USBD_PIPE_INFORMATION// Size=0x18 (Id=1015)
{
    unsigned short MaximumPacketSize;// Offset=0x0 Size=0x2
    unsigned char EndpointAddress;// Offset=0x2 Size=0x1
    unsigned char Interval;// Offset=0x3 Size=0x1
    enum _USBD_PIPE_TYPE PipeType;// Offset=0x4 Size=0x4
    void * PipeHandle;// Offset=0x8 Size=0x8
    unsigned long MaximumTransferSize;// Offset=0x10 Size=0x4
    unsigned long PipeFlags;// Offset=0x14 Size=0x4
};
