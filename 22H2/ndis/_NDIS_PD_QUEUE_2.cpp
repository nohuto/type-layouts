struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PD_QUEUE// Size=0x30 (Id=1104)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _NDIS_PD_QUEUE_DISPATCH * Dispatch;// Offset=0x8 Size=0x8
    void * PDPlatformReserved[2];// Offset=0x10 Size=0x10
    void * PDClientReserved[2];// Offset=0x20 Size=0x10
};
