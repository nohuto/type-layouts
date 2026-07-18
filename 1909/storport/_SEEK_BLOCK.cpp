struct _SEEK_BLOCK// Size=0x6 (Id=367)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char BlockAddress[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};
