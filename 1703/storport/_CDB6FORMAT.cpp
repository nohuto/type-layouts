struct _CDB6FORMAT// Size=0x6 (Id=382)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char FormatControl:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char FReserved1;// Offset=0x2 Size=0x1
    unsigned char InterleaveMsb;// Offset=0x3 Size=0x1
    unsigned char InterleaveLsb;// Offset=0x4 Size=0x1
    unsigned char FReserved2;// Offset=0x5 Size=0x1
};
