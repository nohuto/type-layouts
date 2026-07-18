struct _DIMM_ADDRESS::<unnamed-type-Ddr4>// Size=0x18 (Id=4005)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SocketId:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long MemoryControllerId:2;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x2
        unsigned long long ChannelId:2;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x2
        unsigned long long DimmSlot:2;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x2
        unsigned long long DimmRank:2;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x2
        unsigned long long Device:5;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x5
        unsigned long long ChipSelect:3;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x3
        unsigned long long Bank:8;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x8
        unsigned long long Dq:4;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x4
        unsigned long long Reserved:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
    unsigned int Row;// Offset=0x8 Size=0x4
    unsigned int Column;// Offset=0xc Size=0x4
    unsigned long long Info;// Offset=0x10 Size=0x8
};
