struct _URB_HEADER// Size=0x18 (Id=998)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=968)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _URB_CONTROL_TRANSFER_EX// Size=0x88 (Id=626)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    unsigned long Timeout;// Offset=0x38 Size=0x4
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char SetupPacket[8];// Offset=0x80 Size=0x8
};

struct _CLEAR_STALL_CONTEXT// Size=0x98 (Id=863)
{
    struct _IRP * Irp;// Offset=0x0 Size=0x8
    struct _URB_CONTROL_TRANSFER_EX Urb;// Offset=0x8 Size=0x88
    struct WDFREQUEST__ * Request;// Offset=0x90 Size=0x8
};
