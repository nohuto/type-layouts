struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=323)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS// Size=0x30 (Id=580)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * CancelSendNetBufferListsHandler)(void * ,void * );// Offset=0x18 Size=0x8
    void  ( * ReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x28 Size=0x8
};
