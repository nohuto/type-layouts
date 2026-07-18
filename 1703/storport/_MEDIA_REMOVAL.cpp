struct _MEDIA_REMOVAL// Size=0x6 (Id=554)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Prevent:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Persistant:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Control;// Offset=0x5 Size=0x1
};
