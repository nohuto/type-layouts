struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=323)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST// Size=0x98 (Id=659)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * NextBlock;// Offset=0x8 Size=0x8
    struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST * DependentBlockList;// Offset=0x10 Size=0x8
    int Status;// Offset=0x18 Size=0x4
    void * NdisReserved[2];// Offset=0x20 Size=0x10
    void ** MiniportOffloadContext;// Offset=0x30 Size=0x8
    void * NdisOffloadHandle;// Offset=0x38 Size=0x8
    void * ProtocolReserved[2];// Offset=0x40 Size=0x10
    void * MiniportReserved[2];// Offset=0x50 Size=0x10
    void * ImReserved[2];// Offset=0x60 Size=0x10
    void * Scratch[2];// Offset=0x70 Size=0x10
    void * SourceHandle;// Offset=0x80 Size=0x8
    unsigned long PortNumber;// Offset=0x88 Size=0x4
    struct _NET_BUFFER_LIST * NetBufferListChain;// Offset=0x90 Size=0x8
};
