struct _CDB10// Size=0xa (Id=527)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockByte0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockByte1;// Offset=0x3 Size=0x1
    unsigned char LogicalBlockByte2;// Offset=0x4 Size=0x1
    unsigned char LogicalBlockByte3;// Offset=0x5 Size=0x1
    unsigned char Reserved2;// Offset=0x6 Size=0x1
    unsigned char TransferBlocksMsb;// Offset=0x7 Size=0x1
    unsigned char TransferBlocksLsb;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};
