struct _DMA_CONFIGURATION_BYTE0// Size=0x1 (Id=2915)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Channel:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _DMA_CONFIGURATION_BYTE1// Size=0x1 (Id=2120)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved0:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char TransferSize:2;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x2
        unsigned char Timing:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Reserved1:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _EISA_DMA_CONFIGURATION// Size=0x2 (Id=1886)
{
    struct _DMA_CONFIGURATION_BYTE0 ConfigurationByte0;// Offset=0x0 Size=0x1
    struct _DMA_CONFIGURATION_BYTE1 ConfigurationByte1;// Offset=0x1 Size=0x1
};
