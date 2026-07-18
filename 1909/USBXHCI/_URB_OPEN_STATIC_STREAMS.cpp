struct _URB_HEADER// Size=0x18 (Id=884)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_OPEN_STATIC_STREAMS// Size=0x30 (Id=692)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long NumberOfStreams;// Offset=0x20 Size=0x4
    unsigned short StreamInfoVersion;// Offset=0x24 Size=0x2
    unsigned short StreamInfoSize;// Offset=0x26 Size=0x2
    struct _USBD_STREAM_INFORMATION * Streams;// Offset=0x28 Size=0x8
};
