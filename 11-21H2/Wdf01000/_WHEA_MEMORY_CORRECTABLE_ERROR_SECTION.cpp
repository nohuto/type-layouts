struct _WHEA_MEMORY_CORRECTABLE_ERROR_HEADER// Size=0x4 (Id=3066)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
};

union _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2190)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SocketId:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long ChannelId:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long DimmSlot:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long CorrectableErrorCount:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Reserved:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_MEMORY_CORRECTABLE_ERROR_DATA// Size=0x18 (Id=648)
{
    union _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned int SocketId;// Offset=0x8 Size=0x4
    unsigned int ChannelId;// Offset=0xc Size=0x4
    unsigned int DimmSlot;// Offset=0x10 Size=0x4
    unsigned int CorrectableErrorCount;// Offset=0x14 Size=0x4
};

struct _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION// Size=0x1c (Id=3387)
{
    struct _WHEA_MEMORY_CORRECTABLE_ERROR_HEADER Header;// Offset=0x0 Size=0x4
    struct _WHEA_MEMORY_CORRECTABLE_ERROR_DATA Data[1];// Offset=0x4 Size=0x18
};
