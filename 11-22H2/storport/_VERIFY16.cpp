struct _VERIFY16// Size=0x10 (Id=691)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ByteCheck:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BlockVerify:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved2:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char VerifyProtect:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char VerificationLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};
