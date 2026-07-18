union _WHEA_ARM_TLB_ERROR_VALID_BITS// Size=0x2 (Id=4341)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short TransactionType:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Operation:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Level:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ProcessorContextCorrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Corrected:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short PrecisePC:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short RestartablePC:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
