struct _SEND_VOLUME_TAG// Size=0xc (Id=655)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ElementType:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ActionCode:5;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved4[2];// Offset=0x6 Size=0x2
    unsigned char ParameterListLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved5;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
