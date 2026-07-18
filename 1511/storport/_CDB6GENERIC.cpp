struct _CDB6GENERIC// Size=0x6 (Id=485)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CommandUniqueBits:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char CommandUniqueBytes[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};
