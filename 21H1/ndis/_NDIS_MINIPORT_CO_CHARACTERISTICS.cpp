struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_CO_CHARACTERISTICS// Size=0x38 (Id=1053)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * CoDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x18 Size=0x8
    int  ( * CoDeactivateVcHandler)(void * );// Offset=0x20 Size=0x8
    void  ( * CoSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x28 Size=0x8
    int  ( * CoOidRequestHandler)(void * ,void * ,struct _NDIS_OID_REQUEST * );// Offset=0x30 Size=0x8
};
