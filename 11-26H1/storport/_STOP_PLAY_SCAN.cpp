struct _STOP_PLAY_SCAN// Size=0xa (Id=1322)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[7];// Offset=0x2 Size=0x7
    unsigned char Control;// Offset=0x9 Size=0x1
};
