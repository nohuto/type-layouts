struct _READ_DVD_STRUCTURE// Size=0xc (Id=560)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char RMDBlockNumber[4];// Offset=0x2 Size=0x4
    unsigned char LayerNumber;// Offset=0x6 Size=0x1
    unsigned char Format;// Offset=0x7 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:6;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char AGID:2;// Offset=0xa Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Control;// Offset=0xb Size=0x1
};
