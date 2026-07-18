struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS// Size=0x38 (Id=1117)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * InitiateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x8 Size=0x8
    void  ( * TerminateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x10 Size=0x8
    void  ( * UpdateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x18 Size=0x8
    void  ( * InvalidateOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x20 Size=0x8
    void  ( * QueryOffloadCompleteHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * );// Offset=0x28 Size=0x8
    void  ( * IndicateOffloadEventHandler)(void * ,struct _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST * ,unsigned long );// Offset=0x30 Size=0x8
};
