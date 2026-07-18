struct _RECEIVE_DIAGNOSTIC// Size=0x6 (Id=553)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageCodeValid:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x3 Size=0x2
    unsigned char Control;// Offset=0x5 Size=0x1
};
