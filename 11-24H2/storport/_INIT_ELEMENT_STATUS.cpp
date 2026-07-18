struct _INIT_ELEMENT_STATUS// Size=0x6 (Id=1191)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNubmer:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:7;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char NoBarCode:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};
