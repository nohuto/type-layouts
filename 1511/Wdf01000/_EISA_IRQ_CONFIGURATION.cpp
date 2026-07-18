struct _EISA_IRQ_DESCRIPTOR// Size=0x1 (Id=2184)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Interrupt:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LevelTriggered:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _EISA_IRQ_CONFIGURATION// Size=0x2 (Id=1935)
{
    struct _EISA_IRQ_DESCRIPTOR ConfigurationByte;// Offset=0x0 Size=0x1
    unsigned char Reserved;// Offset=0x1 Size=0x1
};
