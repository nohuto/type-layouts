struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS// Size=0x30 (Id=1049)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * InitiateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x8 Size=0x8
    void  ( * TerminateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x10 Size=0x8
    void  ( * UpdateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x18 Size=0x8
    void  ( * InvalidateOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x20 Size=0x8
    void  ( * QueryOffloadHandler)(void * ,struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * );// Offset=0x28 Size=0x8
};
