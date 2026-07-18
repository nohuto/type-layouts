struct _MODE_SENSE// Size=0x6 (Id=588)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Dbd:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved2:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        unsigned char PageCode:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Pc:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char SubPageCode;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};
