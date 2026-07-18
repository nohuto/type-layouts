union _WHEA_ARM_BUS_ERROR_VALID_BITS// Size=0x2 (Id=3402)
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
        unsigned short ParticipationType:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short Timeout:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short AddressSpace:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short MemoryAttributes:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short AccessMode:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short Reserved:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
