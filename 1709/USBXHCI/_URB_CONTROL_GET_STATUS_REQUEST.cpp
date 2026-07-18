struct _URB_HEADER// Size=0x18 (Id=850)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=824)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _URB_CONTROL_GET_STATUS_REQUEST// Size=0x88 (Id=722)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char Reserved1[4];// Offset=0x80 Size=0x4
    unsigned short Index;// Offset=0x84 Size=0x2
    unsigned short Reserved2;// Offset=0x86 Size=0x2
};
