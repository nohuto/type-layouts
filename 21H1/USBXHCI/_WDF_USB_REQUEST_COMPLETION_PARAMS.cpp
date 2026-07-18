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

struct _anonymous_713// Size=0x10 (Id=713)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _anonymous_355// Size=0x1 (Id=355)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _anonymous_356// Size=0x1 (Id=356)
{
    struct _anonymous_355 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _anonymous_357// Size=0x2 (Id=357)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _anonymous_358// Size=0x2 (Id=358)
{
    struct _anonymous_357 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _anonymous_359// Size=0x8 (Id=359)
{
    union _anonymous_356 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _anonymous_358 wValue;// Offset=0x2 Size=0x2
    union _anonymous_358 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _anonymous_360// Size=0x8 (Id=360)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=361)
{
    struct _anonymous_359 Packet;// Offset=0x0 Size=0x8
    struct _anonymous_360 Generic;// Offset=0x0 Size=0x8
};

struct _anonymous_714// Size=0x18 (Id=714)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _anonymous_715// Size=0x8 (Id=715)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _anonymous_304// Size=0x18 (Id=304)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _anonymous_716// Size=0x18 (Id=716)
{
    union // Size=0x18 (Id=0)
    {
        struct _anonymous_713 DeviceString;// Offset=0x0 Size=0x10
        struct _anonymous_714 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _anonymous_715 DeviceUrb;// Offset=0x0 Size=0x8
        struct _anonymous_304 PipeWrite;// Offset=0x0 Size=0x18
        struct _anonymous_304 PipeRead;// Offset=0x0 Size=0x18
        struct _anonymous_715 PipeUrb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_USB_REQUEST_COMPLETION_PARAMS// Size=0x20 (Id=717)
{
    long UsbdStatus;// Offset=0x0 Size=0x4
    enum _WDF_USB_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    union _anonymous_716 Parameters;// Offset=0x8 Size=0x18
};
