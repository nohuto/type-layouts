struct _NDIS_OFFLOAD_HANDLE// Size=0x10 (Id=1330)
{
    void * NdisReserved[1];// Offset=0x0 Size=0x8
    void * MiniportOffloadContext;// Offset=0x8 Size=0x8
};

struct _NDIS_OFFLOAD_HANDLE_PRIVATE// Size=0x18 (Id=1571)
{
    struct _NDIS_OFFLOAD_HANDLE Handle;// Offset=0x0 Size=0x10
    void * ProtocolBindingContext;// Offset=0x10 Size=0x8
};
