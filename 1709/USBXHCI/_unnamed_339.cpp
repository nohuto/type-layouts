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
