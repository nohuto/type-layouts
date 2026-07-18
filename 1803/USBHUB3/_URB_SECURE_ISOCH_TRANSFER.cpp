struct _URB_HEADER// Size=0x18 (Id=691)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _GUID// Size=0x10 (Id=123)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _URB_HCD_AREA// Size=0x40 (Id=670)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _USBD_ISO_PACKET_DESCRIPTOR// Size=0xc (Id=637)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
};

struct _URB_SECURE_ISOCH_TRANSFER// Size=0x98 (Id=567)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    struct _GUID SecureTransferBufferGuid;// Offset=0x24 Size=0x10
    unsigned long SecureTransferBufferLength;// Offset=0x34 Size=0x4
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned long StartFrame;// Offset=0x80 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x84 Size=0x4
    unsigned long ErrorCount;// Offset=0x88 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];// Offset=0x8c Size=0xc
};
