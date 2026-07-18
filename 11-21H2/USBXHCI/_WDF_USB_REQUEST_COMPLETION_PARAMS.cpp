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

struct _unnamed_737// Size=0x10 (Id=737)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_371// Size=0x1 (Id=371)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_372// Size=0x1 (Id=372)
{
    struct _unnamed_371 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_373// Size=0x2 (Id=373)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_374// Size=0x2 (Id=374)
{
    struct _unnamed_373 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_375// Size=0x8 (Id=375)
{
    union _unnamed_372 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_374 wValue;// Offset=0x2 Size=0x2
    union _unnamed_374 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_376// Size=0x8 (Id=376)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=377)
{
    struct _unnamed_375 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_376 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_738// Size=0x18 (Id=738)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_739// Size=0x8 (Id=739)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_320// Size=0x18 (Id=320)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_740// Size=0x18 (Id=740)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_737 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_738 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_739 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_320 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_320 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_739 PipeUrb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_USB_REQUEST_COMPLETION_PARAMS// Size=0x20 (Id=741)
{
    long UsbdStatus;// Offset=0x0 Size=0x4
    enum _WDF_USB_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    union _unnamed_740 Parameters;// Offset=0x8 Size=0x18
};
