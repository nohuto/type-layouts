union _WHEA_ARM_BUS_ERROR_VALID_BITS// Size=0x2 (Id=3940)
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

struct _WHEA_ARM_BUS_ERROR// Size=0xc (Id=3665)
{
    union _WHEA_ARM_BUS_ERROR_VALID_BITS ValidationBit;// Offset=0x0 Size=0x2
    struct // Size=0xa (Id=0)
    {
        unsigned char TransactionType:2;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Operation:4;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char Level:3;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char ProcessorContextCorrupt:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Corrected:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char PrecisePC:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char RestartablePC:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char ParticipationType:2;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char TimeOut:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char AddressSpace:2;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned short MemoryAccessAttributes:9;// Offset=0x5 Size=0x2 BitOffset=0x0 BitSize=0x9
        unsigned char AccessMode:1;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:20;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
};
