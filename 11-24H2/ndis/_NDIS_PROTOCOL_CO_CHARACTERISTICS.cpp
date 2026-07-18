struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_PROTOCOL_CO_CHARACTERISTICS// Size=0x28 (Id=1999)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    void  ( * CoStatusHandlerEx)(void * ,void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0x8 Size=0x8
    void  ( * CoAfRegisterNotifyHandler)(void * ,struct CO_ADDRESS_FAMILY * );// Offset=0x10 Size=0x8
    void  ( * CoReceiveNetBufferListsHandler)(void * ,void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * CoSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x20 Size=0x8
};
