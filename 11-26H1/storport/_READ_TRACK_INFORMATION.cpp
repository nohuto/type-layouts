struct _READ_TRACK_INFORMATION// Size=0xa (Id=857)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Track:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved4:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char BlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved3;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
