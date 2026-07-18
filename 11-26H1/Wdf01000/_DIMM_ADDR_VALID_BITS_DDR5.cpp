struct _DIMM_ADDR_VALID_BITS_DDR5// Size=0x4 (Id=3823)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int SocketId:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MemoryControllerId:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int ChannelId:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int SubChannelId:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int DimmSlot:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int DimmRank:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int Device:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int ChipId:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int Bank:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int Dq:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int Row:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int Column:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Info:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned int Reserved:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};
