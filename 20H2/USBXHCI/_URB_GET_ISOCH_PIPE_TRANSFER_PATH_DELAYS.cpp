struct _URB_HEADER// Size=0x18 (Id=977)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS// Size=0x28 (Id=638)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long MaximumSendPathDelayInMilliSeconds;// Offset=0x20 Size=0x4
    unsigned long MaximumCompletionPathDelayInMilliSeconds;// Offset=0x24 Size=0x4
};
