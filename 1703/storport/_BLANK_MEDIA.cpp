struct _BLANK_MEDIA// Size=0xc (Id=409)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BlankType:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char AddressOrTrack[4];// Offset=0x2 Size=0x4
    unsigned char Reserved3[5];// Offset=0x6 Size=0x5
    unsigned char Control;// Offset=0xb Size=0x1
};
