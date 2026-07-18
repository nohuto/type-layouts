struct _unnamed_811// Size=0x10 (Id=811)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_420// Size=0x1 (Id=420)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_421// Size=0x1 (Id=421)
{
    struct _unnamed_420 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_422// Size=0x2 (Id=422)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_423// Size=0x2 (Id=423)
{
    struct _unnamed_422 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_424// Size=0x8 (Id=424)
{
    union _unnamed_421 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_423 wValue;// Offset=0x2 Size=0x2
    union _unnamed_423 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_425// Size=0x8 (Id=425)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=426)
{
    struct _unnamed_424 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_425 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_812// Size=0x18 (Id=812)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_813// Size=0x8 (Id=813)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_323// Size=0x18 (Id=323)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_814// Size=0x18 (Id=814)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_811 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_812 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_813 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_323 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_323 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_813 PipeUrb;// Offset=0x0 Size=0x8
    };
};
