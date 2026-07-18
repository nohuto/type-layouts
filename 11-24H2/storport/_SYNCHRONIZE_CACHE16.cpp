struct _SYNCHRONIZE_CACHE16// Size=0x10 (Id=1068)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char BlockCount[4];// Offset=0xa Size=0x4
    unsigned char Reserved3;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};
