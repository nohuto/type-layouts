struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TCP_OFFLOAD_EVENT_HANDLERS// Size=0x38 (Id=1073)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void  ( * NdisTcpOffloadEventHandler)(void * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    int  ( * NdisTcpOffloadReceiveHandler)(void * ,struct _NET_BUFFER_LIST * ,int ,unsigned long * );// Offset=0x10 Size=0x8
    void  ( * NdisTcpOffloadSendComplete)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x18 Size=0x8
    void  ( * NdisTcpOffloadReceiveComplete)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x20 Size=0x8
    void  ( * NdisTcpOffloadDisconnectComplete)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x28 Size=0x8
    void  ( * NdisTcpOffloadForwardComplete)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x30 Size=0x8
};
