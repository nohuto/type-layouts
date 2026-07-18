struct _READ_CD// Size=0xc (Id=552)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved0:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpectedSectorType:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingLBA[4];// Offset=0x2 Size=0x4
    unsigned char TransferBlocks[3];// Offset=0x6 Size=0x3
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved2:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ErrorFlags:2;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char IncludeEDC:1;// Offset=0x9 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char IncludeUserData:1;// Offset=0x9 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char HeaderCode:2;// Offset=0x9 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char IncludeSyncData:1;// Offset=0x9 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SubChannelSelection:3;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved3:5;// Offset=0xa Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char Control;// Offset=0xb Size=0x1
};
