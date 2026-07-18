struct _READ12// Size=0xc (Id=331)
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
    unsigned char LogicalBlock[4];// Offset=0x2 Size=0x4
    unsigned char TransferLength[4];// Offset=0x6 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved2:7;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xa Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xb Size=0x1
};
