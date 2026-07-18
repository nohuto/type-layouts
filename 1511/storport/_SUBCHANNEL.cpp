struct _SUBCHANNEL// Size=0xa (Id=367)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved0:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Msf:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char SubQ:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Reserved3:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Format;// Offset=0x3 Size=0x1
    unsigned char Reserved4[2];// Offset=0x4 Size=0x2
    unsigned char TrackNumber;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
