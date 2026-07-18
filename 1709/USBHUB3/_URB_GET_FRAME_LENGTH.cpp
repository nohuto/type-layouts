struct _URB_HEADER// Size=0x18 (Id=686)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_GET_FRAME_LENGTH// Size=0x20 (Id=651)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    unsigned long FrameLength;// Offset=0x18 Size=0x4
    unsigned long FrameNumber;// Offset=0x1c Size=0x4
};
