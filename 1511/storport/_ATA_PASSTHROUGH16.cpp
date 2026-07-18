struct _ATA_PASSTHROUGH16// Size=0x10 (Id=537)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Extend:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Protocol:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char MultipleCount:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char TLength:2;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char ByteBlock:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char TDir:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char CkCond:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Offline:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Features15_8;// Offset=0x3 Size=0x1
    unsigned char Features7_0;// Offset=0x4 Size=0x1
    unsigned char SectorCount15_8;// Offset=0x5 Size=0x1
    unsigned char SectorCount7_0;// Offset=0x6 Size=0x1
    unsigned char LbaLow15_8;// Offset=0x7 Size=0x1
    unsigned char LbaLow7_0;// Offset=0x8 Size=0x1
    unsigned char LbaMid15_8;// Offset=0x9 Size=0x1
    unsigned char LbaMid7_0;// Offset=0xa Size=0x1
    unsigned char LbaHigh15_8;// Offset=0xb Size=0x1
    unsigned char LbaHigh7_0;// Offset=0xc Size=0x1
    unsigned char Device;// Offset=0xd Size=0x1
    unsigned char Command;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};
