struct _TOKEN_OPERATION// Size=0x10 (Id=362)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    unsigned char ListIdentifier[4];// Offset=0x6 Size=0x4
    unsigned char ParameterListLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char GroupNumber:5;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0xe Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Control;// Offset=0xf Size=0x1
};
