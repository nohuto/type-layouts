struct _LOAD_UNLOAD// Size=0xc (Id=718)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Start:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char LoadEject:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved4[3];// Offset=0x5 Size=0x3
    unsigned char Slot;// Offset=0x8 Size=0x1
    unsigned char Reserved5[3];// Offset=0x9 Size=0x3
};
