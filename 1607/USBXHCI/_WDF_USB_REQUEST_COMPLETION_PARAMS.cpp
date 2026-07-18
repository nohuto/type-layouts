enum _WDF_USB_REQUEST_TYPE
{
    WdfUsbRequestTypeInvalid=0,
    WdfUsbRequestTypeNoFormat=1,
    WdfUsbRequestTypeDeviceString=2,
    WdfUsbRequestTypeDeviceControlTransfer=3,
    WdfUsbRequestTypeDeviceUrb=4,
    WdfUsbRequestTypePipeWrite=5,
    WdfUsbRequestTypePipeRead=6,
    WdfUsbRequestTypePipeAbort=7,
    WdfUsbRequestTypePipeReset=8,
    WdfUsbRequestTypePipeUrb=9
};

struct _unnamed_623// Size=0x10 (Id=623)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_326// Size=0x1 (Id=326)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_327// Size=0x1 (Id=327)
{
    struct _unnamed_326 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_328// Size=0x2 (Id=328)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_329// Size=0x2 (Id=329)
{
    struct _unnamed_328 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_330// Size=0x8 (Id=330)
{
    union _unnamed_327 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_329 wValue;// Offset=0x2 Size=0x2
    union _unnamed_329 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_331// Size=0x8 (Id=331)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=332)
{
    struct _unnamed_330 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_331 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_624// Size=0x18 (Id=624)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_625// Size=0x8 (Id=625)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_277// Size=0x18 (Id=277)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_626// Size=0x18 (Id=626)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_623 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_624 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_625 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_277 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_277 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_625 PipeUrb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_USB_REQUEST_COMPLETION_PARAMS// Size=0x20 (Id=627)
{
    long UsbdStatus;// Offset=0x0 Size=0x4
    enum _WDF_USB_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    union _unnamed_626 Parameters;// Offset=0x8 Size=0x18
};
