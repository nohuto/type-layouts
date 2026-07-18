struct _NDIS_FRAME_TYPE_AND_OPEN// Size=0x10 (Id=2187)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x8 Size=0x8
};

struct _NDIS_FRAME_TYPE_RECORD// Size=0x108 (Id=1833)
{
    unsigned int NumEntries;// Offset=0x0 Size=0x4
    struct _NDIS_FRAME_TYPE_AND_OPEN Entry[16];// Offset=0x8 Size=0x100
};

struct _X_FILTER// Size=0x198 (Id=1398)
{
    struct _NDIS_OPEN_BLOCK * OpenList;// Offset=0x0 Size=0x8
    struct _NDIS_OPEN_BLOCK * NoFTypeOpenList;// Offset=0x8 Size=0x8
    struct _NDIS_OPEN_BLOCK * FTypeOpenList;// Offset=0x10 Size=0x8
    struct _NDIS_FRAME_TYPE_RECORD FrameTypeRecord;// Offset=0x18 Size=0x108
    struct _NDIS_RW_LOCK_EX * BindListLock;// Offset=0x120 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x128 Size=0x8
    unsigned int CombinedPacketFilter;// Offset=0x130 Size=0x4
    unsigned int OldCombinedPacketFilter;// Offset=0x134 Size=0x4
    unsigned int MiniportPacketFilter;// Offset=0x138 Size=0x4
    unsigned int NumOpens;// Offset=0x13c Size=0x4
    unsigned int NumNoETypeOpens;// Offset=0x140 Size=0x4
    struct _NDIS_OPEN_BLOCK * SingleActiveOpen;// Offset=0x148 Size=0x8
    unsigned char AdapterAddress[6];// Offset=0x150 Size=0x6
    unsigned int MaxMulticastAddresses;// Offset=0x158 Size=0x4
    unsigned char * NextMCastAddressBuf[6];// Offset=0x160 Size=0x8
    unsigned char * NextOldMCastAddressBuf[6];// Offset=0x168 Size=0x8
    unsigned int NextNumAddresses;// Offset=0x170 Size=0x4
    unsigned int NextOldNumAddresses;// Offset=0x174 Size=0x4
    unsigned char * MiniportMCastAddressBuf[6];// Offset=0x178 Size=0x8
    unsigned int MiniportNumAddresses;// Offset=0x180 Size=0x4
    unsigned char * MiniportOldMCastAddressBuf[6];// Offset=0x188 Size=0x8
    unsigned int MiniportOldNumAddresses;// Offset=0x190 Size=0x4
};
