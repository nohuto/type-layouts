struct _LOGSENSE// Size=0xa (Id=1074)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PPCBit:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char PageCode:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char PCBit:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char SubPageCode;// Offset=0x3 Size=0x1
        unsigned char Reserved2;// Offset=0x3 Size=0x1
    };
    unsigned char Reserved3;// Offset=0x4 Size=0x1
    unsigned char ParameterPointer[2];// Offset=0x5 Size=0x2
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
