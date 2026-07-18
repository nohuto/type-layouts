struct _PLAY_AUDIO_MSF// Size=0xa (Id=346)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2;// Offset=0x2 Size=0x1
    unsigned char StartingM;// Offset=0x3 Size=0x1
    unsigned char StartingS;// Offset=0x4 Size=0x1
    unsigned char StartingF;// Offset=0x5 Size=0x1
    unsigned char EndingM;// Offset=0x6 Size=0x1
    unsigned char EndingS;// Offset=0x7 Size=0x1
    unsigned char EndingF;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};
