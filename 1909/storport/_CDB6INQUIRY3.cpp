struct _CDB6INQUIRY3// Size=0x6 (Id=449)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char EnableVitalProductData:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CommandSupportData:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};
