struct _MODE_SELECT10// Size=0xa (Id=371)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char PFBit:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
