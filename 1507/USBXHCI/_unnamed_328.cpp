struct _unnamed_324// Size=0x1 (Id=324)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_325// Size=0x1 (Id=325)
{
    struct _unnamed_324 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};

struct _unnamed_326// Size=0x2 (Id=326)
{
    unsigned char LowByte;// Offset=0x0 Size=0x1
    unsigned char HiByte;// Offset=0x1 Size=0x1
};

union _unnamed_327// Size=0x2 (Id=327)
{
    struct _unnamed_326 Bytes;// Offset=0x0 Size=0x2
    unsigned short Value;// Offset=0x0 Size=0x2
};

struct _unnamed_328// Size=0x8 (Id=328)
{
    union _unnamed_325 bm;// Offset=0x0 Size=0x1
    unsigned char bRequest;// Offset=0x1 Size=0x1
    union _unnamed_327 wValue;// Offset=0x2 Size=0x2
    union _unnamed_327 wIndex;// Offset=0x4 Size=0x2
    unsigned short wLength;// Offset=0x6 Size=0x2
};
