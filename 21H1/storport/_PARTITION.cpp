struct _PARTITION// Size=0x6 (Id=445)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Sel:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PartitionSelect:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved1[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};
