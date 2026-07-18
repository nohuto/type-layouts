struct _SCAN_CD// Size=0xc (Id=644)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char Direct:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2[3];// Offset=0x6 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:6;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Type:2;// Offset=0x9 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved4;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
