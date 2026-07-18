struct _SEND_DVD_STRUCTURE// Size=0xc (Id=523)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char Format;// Offset=0x7 Size=0x1
    unsigned char ParameterListLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
