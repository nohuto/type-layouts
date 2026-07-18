struct _URB_HEADER// Size=0x18 (Id=400)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

enum _USBD_PIPE_TYPE
{
    UsbdPipeTypeControl=0,
    UsbdPipeTypeIsochronous=1,
    UsbdPipeTypeBulk=2,
    UsbdPipeTypeInterrupt=3
};

struct _USBD_PIPE_INFORMATION// Size=0x18 (Id=218)
{
    unsigned short MaximumPacketSize;// Offset=0x0 Size=0x2
    unsigned char EndpointAddress;// Offset=0x2 Size=0x1
    unsigned char Interval;// Offset=0x3 Size=0x1
    enum _USBD_PIPE_TYPE PipeType;// Offset=0x4 Size=0x4
    void * PipeHandle;// Offset=0x8 Size=0x8
    unsigned long MaximumTransferSize;// Offset=0x10 Size=0x4
    unsigned long PipeFlags;// Offset=0x14 Size=0x4
};

struct _USBD_INTERFACE_INFORMATION// Size=0x30 (Id=356)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char InterfaceNumber;// Offset=0x2 Size=0x1
    unsigned char AlternateSetting;// Offset=0x3 Size=0x1
    unsigned char Class;// Offset=0x4 Size=0x1
    unsigned char SubClass;// Offset=0x5 Size=0x1
    unsigned char Protocol;// Offset=0x6 Size=0x1
    unsigned char Reserved;// Offset=0x7 Size=0x1
    void * InterfaceHandle;// Offset=0x8 Size=0x8
    unsigned long NumberOfPipes;// Offset=0x10 Size=0x4
    struct _USBD_PIPE_INFORMATION Pipes[1];// Offset=0x18 Size=0x18
};

struct _URB_SELECT_INTERFACE// Size=0x50 (Id=291)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * ConfigurationHandle;// Offset=0x18 Size=0x8
    struct _USBD_INTERFACE_INFORMATION Interface;// Offset=0x20 Size=0x30
};
