struct _WRITE_TAPE_MARKS// Size=0x6 (Id=381)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char WriteSetMarks:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransferLength[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};
