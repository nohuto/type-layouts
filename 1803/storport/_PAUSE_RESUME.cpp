struct _PAUSE_RESUME// Size=0xa (Id=498)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[6];// Offset=0x2 Size=0x6
    unsigned char Action;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};
