struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS// Size=0x38 (Id=1461)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum NDIS_CHIMNEY_OFFLOAD_TYPE OffloadType;// Offset=0x8 Size=0x4
    int  ( * TcpOffloadSendHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x10 Size=0x8
    int  ( * TcpOffloadReceiveHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x18 Size=0x8
    int  ( * TcpOffloadDisconnectHandler)(void * ,void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x20 Size=0x8
    int  ( * TcpOffloadForwardHandler)(void * ,void * ,struct _NET_BUFFER_LIST * );// Offset=0x28 Size=0x8
    int  ( * TcpOffloadReceiveReturnHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x30 Size=0x8
};
