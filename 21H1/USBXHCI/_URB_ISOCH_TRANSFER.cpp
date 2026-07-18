struct _URB_HEADER// Size=0x18 (Id=917)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=888)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _USBD_ISO_PACKET_DESCRIPTOR// Size=0xc (Id=849)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
};

struct _URB_ISOCH_TRANSFER// Size=0x98 (Id=936)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned long StartFrame;// Offset=0x80 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x84 Size=0x4
    unsigned long ErrorCount;// Offset=0x88 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];// Offset=0x8c Size=0xc
};
