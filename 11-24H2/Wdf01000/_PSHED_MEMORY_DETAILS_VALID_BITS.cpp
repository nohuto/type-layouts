struct _PSHED_MEMORY_DETAILS_VALID_BITS// Size=0x4 (Id=2846)
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
