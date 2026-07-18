struct _GET_PERFORMANCE// Size=0xc (Id=405)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Except:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Write:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Tolerance:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char Reserved0:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingLBA[4];// Offset=0x2 Size=0x4
    unsigned char Reserved1[2];// Offset=0x6 Size=0x2
    unsigned char MaximumNumberOfDescriptors[2];// Offset=0x8 Size=0x2
    unsigned char Type;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};
