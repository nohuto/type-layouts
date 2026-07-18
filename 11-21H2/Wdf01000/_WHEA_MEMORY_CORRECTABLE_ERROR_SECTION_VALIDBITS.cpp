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
