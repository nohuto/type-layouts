struct _CLOSE_TRACK// Size=0xa (Id=487)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char Track:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Session:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved3;// Offset=0x3 Size=0x1
    unsigned char TrackNumber[2];// Offset=0x4 Size=0x2
    unsigned char Reserved4[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};
