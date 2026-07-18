struct _unnamed_790// Size=0x10 (Id=790)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned short LangID;// Offset=0x8 Size=0x2
    unsigned char StringIndex;// Offset=0xa Size=0x1
    unsigned char RequiredSize;// Offset=0xb Size=0x1
};

struct _unnamed_408// Size=0x1 (Id=408)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_409// Size=0x1 (Id=409)
{
    struct _unnamed_408 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_410// Size=0x2 (Id=410)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_411// Size=0x2 (Id=411)
{
    struct _unnamed_410 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_412// Size=0x8 (Id=412)
{
    union _unnamed_409 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_411 wValue;// Offset=0x2 Size=0x2
    union _unnamed_411 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _unnamed_413// Size=0x8 (Id=413)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=414)
{
    struct _unnamed_412 Packet;// Offset=0x0 Size=0x8
    struct _unnamed_413 Generic;// Offset=0x0 Size=0x8
};

struct _unnamed_791// Size=0x18 (Id=791)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _unnamed_792// Size=0x8 (Id=792)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
};

struct _unnamed_319// Size=0x18 (Id=319)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

union _unnamed_793// Size=0x18 (Id=793)
{
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_790 DeviceString;// Offset=0x0 Size=0x10
        struct _unnamed_791 DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct _unnamed_792 DeviceUrb;// Offset=0x0 Size=0x8
        struct _unnamed_319 PipeWrite;// Offset=0x0 Size=0x18
        struct _unnamed_319 PipeRead;// Offset=0x0 Size=0x18
        struct _unnamed_792 PipeUrb;// Offset=0x0 Size=0x8
    };
};
