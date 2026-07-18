struct _unnamed_422// Size=0x1 (Id=422)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_423// Size=0x1 (Id=423)
{
    struct _unnamed_422 Request;// Offset=0x0 Size=0x1
    unsigned char Byte;// Offset=0x0 Size=0x1
};
