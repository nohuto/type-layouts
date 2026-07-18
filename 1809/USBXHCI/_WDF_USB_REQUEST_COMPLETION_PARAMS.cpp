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

struct _unnamed_686// Size=0x10 (Id=686)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_345// Size=0x1 (Id=345)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_346// Size=0x1 (Id=346)
{
    struct _unnamed_345 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_347// Size=0x2 (Id=347)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_348// Size=0x2 (Id=348)
{
    struct _unnamed_347 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_349// Size=0x8 (Id=349)
{
    union _unnamed_346 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_348 wValue;// Offset=0x2 Size=0x2
    union _unnamed_348 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_350// Size=0x8 (Id=350)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=351)
{
    struct _unnamed_349 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_350 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_687// Size=0x18 (Id=687)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_688// Size=0x8 (Id=688)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_293// Size=0x18 (Id=293)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_689// Size=0x18 (Id=689)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_686 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_687 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_688 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_293 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_293 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_688 PipeUrb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_USB_REQUEST_COMPLETION_PARAMS// Size=0x20 (Id=690)
{
    long UsbdStatus;// Offset=0x0 Size=0x4
    enum _WDF_USB_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    union _unnamed_689 Parameters;// Offset=0x8 Size=0x18
};
