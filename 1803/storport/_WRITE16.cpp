struct _WRITE16// Size=0x10 (Id=537)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char WriteProtect:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char TransferLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved2:7;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};
