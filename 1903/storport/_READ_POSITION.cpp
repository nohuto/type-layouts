struct _READ_POSITION// Size=0xa (Id=499)
{
    unsigned char Operation;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BlockType:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[7];// Offset=0x2 Size=0x7
    unsigned char Control;// Offset=0x9 Size=0x1
};
