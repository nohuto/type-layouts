struct _SEND_OPC_INFORMATION// Size=0xa (Id=359)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char DoOpc:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char Exclude0:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Exclude1:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved3[4];// Offset=0x3 Size=0x4
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Reserved4;// Offset=0x9 Size=0x1
};
