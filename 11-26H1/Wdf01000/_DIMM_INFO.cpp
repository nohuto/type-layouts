union _DIMM_ADDRESS// Size=0x18 (Id=2808)
{
    struct <unnamed-type-Ddr4>// Size=0x18 (Id=6733)
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
        unsigned int Row;// Offset=0x8 Size=0x4
        unsigned int Column;// Offset=0xc Size=0x4
        unsigned long long Info;// Offset=0x10 Size=0x8
    };
    struct _DIMM_ADDRESS::<unnamed-type-Ddr4> Ddr4;// Offset=0x0 Size=0x18
    struct <unnamed-type-Ddr5>// Size=0x18 (Id=6748)
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
        unsigned int Row;// Offset=0x8 Size=0x4
        unsigned int Column;// Offset=0xc Size=0x4
        unsigned long long Info;// Offset=0x10 Size=0x8
    };
    struct _DIMM_ADDRESS::<unnamed-type-Ddr5> Ddr5;// Offset=0x0 Size=0x18
};

struct _DIMM_ADDR_VALID_BITS_DDR4// Size=0x4 (Id=1105)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int SocketId:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MemoryControllerId:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int ChannelId:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int DimmSlot:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int DimmRank:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Device:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int ChipSelect:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int Bank:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int Dq:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int Row:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int Column:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int Info:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Reserved:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
};

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

union _DIMM_ADDR_VALID_BITS// Size=0x4 (Id=2582)
{
    struct _DIMM_ADDR_VALID_BITS_DDR4 VB_DDR4;// Offset=0x0 Size=0x4
    struct _DIMM_ADDR_VALID_BITS_DDR5 VB_DDR5;// Offset=0x0 Size=0x4
    unsigned int AsUINT32;// Offset=0x0 Size=0x4
};

struct _DIMM_INFO// Size=0x1c (Id=2793)
{
    union _DIMM_ADDRESS DimmAddress;// Offset=0x0 Size=0x18
    union _DIMM_ADDR_VALID_BITS ValidBits;// Offset=0x18 Size=0x4
};
