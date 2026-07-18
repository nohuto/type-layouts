struct _PSHED_MEMORY_DETAILS_VALID_BITS// Size=0x4 (Id=2744)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int DdrVersion:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int IsClosedPaged:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int ColsPerRow:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int PagesPerRow:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int SocketCnt:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int ChaOnSktCnt:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int DimmSlotCnt:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int SubchannelCnt:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

struct _PSHED_MEMORY_DETAILS// Size=0x11 (Id=1618)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    struct _PSHED_MEMORY_DETAILS_VALID_BITS Vb;// Offset=0x2 Size=0x4
    unsigned short DdrVersion;// Offset=0x6 Size=0x2
    unsigned char IsClosedPaged;// Offset=0x8 Size=0x1
    unsigned short ColsPerRow;// Offset=0x9 Size=0x2
    unsigned short PagesPerRow;// Offset=0xb Size=0x2
    unsigned char SocketCnt;// Offset=0xd Size=0x1
    unsigned char ChaOnSktCnt;// Offset=0xe Size=0x1
    unsigned char DimmSlotCnt;// Offset=0xf Size=0x1
    unsigned char SubchannelCnt;// Offset=0x10 Size=0x1
};
