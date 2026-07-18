struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TCP_OFFLOAD_CLIENT_HANDLERS// Size=0x38 (Id=689)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void  ( * TcpOffloadSendCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x8 Size=0x8
    void  ( * TcpOffloadReceiveCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x10 Size=0x8
    void  ( * TcpOffloadDisconnectCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x18 Size=0x8
    void  ( * TcpOffloadForwardCompleteHandler)(void * ,struct _NET_BUFFER_LIST * );// Offset=0x20 Size=0x8
    void  ( * TcpOffloadEventHandler)(void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    int  ( * TcpOffloadReceiveIndicateHandler)(void * ,struct _NET_BUFFER_LIST * ,int ,unsigned long * );// Offset=0x30 Size=0x8
};
