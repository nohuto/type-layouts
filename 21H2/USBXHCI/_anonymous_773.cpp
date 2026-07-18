struct _anonymous_770// Size=0x10 (Id=770)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _anonymous_406// Size=0x1 (Id=406)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _anonymous_407// Size=0x1 (Id=407)
{
    struct _anonymous_406 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _anonymous_408// Size=0x2 (Id=408)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _anonymous_409// Size=0x2 (Id=409)
{
    struct _anonymous_408 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _anonymous_410// Size=0x8 (Id=410)
{
    union _anonymous_407 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _anonymous_409 wValue;// Offset=0x2 Size=0x2
    union _anonymous_409 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _anonymous_411// Size=0x8 (Id=411)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=412)
{
    struct _anonymous_410 Packet;// Offset=0x0 Size=0x8
    struct _anonymous_411 Generic;// Offset=0x0 Size=0x8
};

struct _anonymous_771// Size=0x18 (Id=771)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _anonymous_772// Size=0x8 (Id=772)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _anonymous_304// Size=0x18 (Id=304)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _anonymous_773// Size=0x18 (Id=773)
{
    union // Size=0x18 (Id=0)
    {
        struct _anonymous_770 DeviceString;// Offset=0x0 Size=0x10
        struct _anonymous_771 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _anonymous_772 DeviceUrb;// Offset=0x0 Size=0x8
        struct _anonymous_304 PipeWrite;// Offset=0x0 Size=0x18
        struct _anonymous_304 PipeRead;// Offset=0x0 Size=0x18
        struct _anonymous_772 PipeUrb;// Offset=0x0 Size=0x8
    };
};
