struct _DIMM_ADDRESS::<unnamed-type-Ddr5>// Size=0x18 (Id=4027)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SocketId:5;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x5
        unsigned long long MemoryControllerId:4;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x4
        unsigned long long ChannelId:3;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x3
        unsigned long long SubChannelId:2;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x2
        unsigned long long DimmSlot:2;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x2
        unsigned long long DimmRank:4;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x4
        unsigned long long Device:6;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x6
        unsigned long long ChipId:4;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x4
        unsigned long long Bank:8;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x8
        unsigned long long Dq:5;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x5
        unsigned long long Reserved:21;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x15
    };
    unsigned int Row;// Offset=0x8 Size=0x4
    unsigned int Column;// Offset=0xc Size=0x4
    unsigned long long Info;// Offset=0x10 Size=0x8
};
