struct _URB_HEADER// Size=0x18 (Id=870)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _UCX_URB_DATA// Size=0x40 (Id=484)
{
    unsigned long ProcessorNumber;// Offset=0x0 Size=0x4
    void * Reserved7[7];// Offset=0x8 Size=0x38
};

struct _USBD_ISO_PACKET_DESCRIPTOR// Size=0xc (Id=807)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
};

struct _ISOCH_URB// Size=0x18 (Id=485)
{
    unsigned long StartFrame;// Offset=0x0 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x4 Size=0x4
    unsigned long ErrorCount;// Offset=0x8 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsochPacket[1];// Offset=0xc Size=0xc
};

struct _SECURE_TRANSFER_URB// Size=0x98 (Id=483)
{
    struct _URB_HEADER Header;// Offset=0x0 Size=0x18
    void * UsbdPipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    struct _GUID SecureTransferBufferGuid;// Offset=0x24 Size=0x10
    unsigned long SecureTransferBufferLength;// Offset=0x34 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Timeout;// Offset=0x38 Size=0x4
        void * ReservedMBNull;// Offset=0x38 Size=0x8
    };
    struct _UCX_URB_DATA UrbData;// Offset=0x40 Size=0x40
    struct _ISOCH_URB Isoch;// Offset=0x80 Size=0x18
};
