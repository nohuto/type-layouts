struct _EISA_MEMORY_TYPE// Size=0x1 (Id=2023)
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

struct _EISA_MEMORY_CONFIGURATION// Size=0x7 (Id=421)
{
    struct _EISA_MEMORY_TYPE ConfigurationByte;// Offset=0x0 Size=0x1
    unsigned char DataSize;// Offset=0x1 Size=0x1
    unsigned short AddressLowWord;// Offset=0x2 Size=0x2
    unsigned char AddressHighByte;// Offset=0x4 Size=0x1
    unsigned short MemorySize;// Offset=0x5 Size=0x2
};

struct _EISA_IRQ_DESCRIPTOR// Size=0x1 (Id=2259)
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

struct _EISA_IRQ_CONFIGURATION// Size=0x2 (Id=3332)
{
    struct _EISA_IRQ_DESCRIPTOR ConfigurationByte;// Offset=0x0 Size=0x1
    unsigned char Reserved;// Offset=0x1 Size=0x1
};

struct _DMA_CONFIGURATION_BYTE0// Size=0x1 (Id=3294)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Channel:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _DMA_CONFIGURATION_BYTE1// Size=0x1 (Id=1649)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved0:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char TransferSize:2;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x2
        unsigned char Timing:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Reserved1:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _EISA_DMA_CONFIGURATION// Size=0x2 (Id=1117)
{
    struct _DMA_CONFIGURATION_BYTE0 ConfigurationByte0;// Offset=0x0 Size=0x1
    struct _DMA_CONFIGURATION_BYTE1 ConfigurationByte1;// Offset=0x1 Size=0x1
};

struct _EISA_PORT_DESCRIPTOR// Size=0x1 (Id=3258)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char NumberPorts:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _EISA_PORT_CONFIGURATION// Size=0x3 (Id=3182)
{
    struct _EISA_PORT_DESCRIPTOR Configuration;// Offset=0x0 Size=0x1
    unsigned short PortAddress;// Offset=0x1 Size=0x2
};

struct _CM_EISA_FUNCTION_INFORMATION// Size=0x140 (Id=2151)
{
    unsigned long CompressedId;// Offset=0x0 Size=0x4
    unsigned char IdSlotFlags1;// Offset=0x4 Size=0x1
    unsigned char IdSlotFlags2;// Offset=0x5 Size=0x1
    unsigned char MinorRevision;// Offset=0x6 Size=0x1
    unsigned char MajorRevision;// Offset=0x7 Size=0x1
    unsigned char Selections[26];// Offset=0x8 Size=0x1a
    unsigned char FunctionFlags;// Offset=0x22 Size=0x1
    unsigned char TypeString[80];// Offset=0x23 Size=0x50
    struct _EISA_MEMORY_CONFIGURATION EisaMemory[9];// Offset=0x73 Size=0x3f
    struct _EISA_IRQ_CONFIGURATION EisaIrq[7];// Offset=0xb2 Size=0xe
    struct _EISA_DMA_CONFIGURATION EisaDma[4];// Offset=0xc0 Size=0x8
    struct _EISA_PORT_CONFIGURATION EisaPort[20];// Offset=0xc8 Size=0x3c
    unsigned char InitializationData[60];// Offset=0x104 Size=0x3c
};
