struct _LOGSELECT// Size=0xa (Id=591)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PCRBit:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Reserved:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char PCBit:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved2[4];// Offset=0x3 Size=0x4
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
