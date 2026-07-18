struct _CDB6INQUIRY// Size=0x6 (Id=407)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char IReserved;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};
