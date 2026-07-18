struct _URB_HEADER// Size=0x18 (Id=754)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_FRAME_LENGTH_CONTROL// Size=0x18 (Id=633)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
};
