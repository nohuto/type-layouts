struct _unnamed_819// Size=0x10 (Id=819)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_416// Size=0x1 (Id=416)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_417// Size=0x1 (Id=417)
{
    struct _unnamed_416 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_418// Size=0x2 (Id=418)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_419// Size=0x2 (Id=419)
{
    struct _unnamed_418 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_420// Size=0x8 (Id=420)
{
    union _unnamed_417 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_419 wValue;// Offset=0x2 Size=0x2
    union _unnamed_419 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_421// Size=0x8 (Id=421)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=422)
{
    struct _unnamed_420 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_421 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_820// Size=0x18 (Id=820)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_821// Size=0x8 (Id=821)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_321// Size=0x18 (Id=321)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_822// Size=0x18 (Id=822)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_819 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_820 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_821 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_321 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_321 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_821 PipeUrb;// Offset=0x0 Size=0x8
    };
};
