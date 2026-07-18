struct _INITIALIZE_ELEMENT_RANGE// Size=0xa (Id=548)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Range:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char LogicalUnitNubmer:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char FirstElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2[2];// Offset=0x4 Size=0x2
    unsigned char NumberOfElements[2];// Offset=0x6 Size=0x2
    unsigned char Reserved3;// Offset=0x8 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved4:7;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char NoBarCode:1;// Offset=0x9 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};
