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

struct _unnamed_674// Size=0x10 (Id=674)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_338// Size=0x1 (Id=338)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_339// Size=0x1 (Id=339)
{
    struct _unnamed_338 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_340// Size=0x2 (Id=340)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_341// Size=0x2 (Id=341)
{
    struct _unnamed_340 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_342// Size=0x8 (Id=342)
{
    union _unnamed_339 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_341 wValue;// Offset=0x2 Size=0x2
    union _unnamed_341 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_343// Size=0x8 (Id=343)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=344)
{
    struct _unnamed_342 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_343 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_675// Size=0x18 (Id=675)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_676// Size=0x8 (Id=676)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_287// Size=0x18 (Id=287)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_677// Size=0x18 (Id=677)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_674 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_675 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_676 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_287 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_287 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_676 PipeUrb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_USB_REQUEST_COMPLETION_PARAMS// Size=0x20 (Id=678)
{
    long UsbdStatus;// Offset=0x0 Size=0x4
    enum _WDF_USB_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    union _unnamed_677 Parameters;// Offset=0x8 Size=0x18
};
