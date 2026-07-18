struct _PERSISTENT_RESERVE_IN// Size=0xa (Id=1136)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
