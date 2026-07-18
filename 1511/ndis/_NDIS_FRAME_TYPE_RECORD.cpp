struct _NDIS_FRAME_TYPE_AND_OPEN// Size=0x10 (Id=1438)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x8 Size=0x8
};

struct _NDIS_FRAME_TYPE_RECORD// Size=0x108 (Id=754)
{
    unsigned int NumEntries;// Offset=0x0 Size=0x4
    struct _NDIS_FRAME_TYPE_AND_OPEN Entry[16];// Offset=0x8 Size=0x100
};
