struct _UNMAP// Size=0xa (Id=592)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Anchor:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char GroupNumber:5;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0x6 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
