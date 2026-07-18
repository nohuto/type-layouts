struct _CDB6VERIFY// Size=0x6 (Id=872)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Fixed:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ByteCompare:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char VerificationLength[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};
