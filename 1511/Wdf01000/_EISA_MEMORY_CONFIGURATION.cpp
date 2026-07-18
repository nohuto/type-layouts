struct _EISA_MEMORY_TYPE// Size=0x1 (Id=1824)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReadWrite:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Cached:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved0:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _EISA_MEMORY_CONFIGURATION// Size=0x7 (Id=3094)
{
    struct _EISA_MEMORY_TYPE ConfigurationByte;// Offset=0x0 Size=0x1
    unsigned char DataSize;// Offset=0x1 Size=0x1
    unsigned short AddressLowWord;// Offset=0x2 Size=0x2
    unsigned char AddressHighByte;// Offset=0x4 Size=0x1
    unsigned short MemorySize;// Offset=0x5 Size=0x2
};
