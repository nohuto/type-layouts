struct _anonymous_356// Size=0x1 (Id=356)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _anonymous_357// Size=0x1 (Id=357)
{
    struct _anonymous_356 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _anonymous_358// Size=0x2 (Id=358)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _anonymous_359// Size=0x2 (Id=359)
{
    struct _anonymous_358 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _anonymous_360// Size=0x8 (Id=360)
{
    union _anonymous_357 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _anonymous_359 wValue;// Offset=0x2 Size=0x2
    union _anonymous_359 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};

struct _anonymous_361// Size=0x8 (Id=361)
{
    unsigned char Bytes[8];// Offset=0x0 Size=0x8
};

union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=362)
{
    struct _anonymous_360 Packet;// Offset=0x0 Size=0x8
    struct _anonymous_361 Generic;// Offset=0x0 Size=0x8
};
