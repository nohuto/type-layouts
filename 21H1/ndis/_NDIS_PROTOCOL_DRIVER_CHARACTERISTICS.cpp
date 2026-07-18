struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _UNICODE_STRING// Size=0x10 (Id=79)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS// Size=0x80 (Id=1417)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char MajorNdisVersion;// Offset=0x4 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x5 Size=0x1
    unsigned char MajorDriverVersion;// Offset=0x6 Size=0x1
    unsigned char MinorDriverVersion;// Offset=0x7 Size=0x1
    unsigned long Flags;// Offset=0x8 Size=0x4
    struct _UNICODE_STRING Name;// Offset=0x10 Size=0x10
    int  ( * SetOptionsHandler)(void * ,void * );// Offset=0x20 Size=0x8
    int  ( * BindAdapterHandlerEx)(void * ,void * ,struct _NDIS_BIND_PARAMETERS * );// Offset=0x28 Size=0x8
    int  ( * UnbindAdapterHandlerEx)(void * ,void * );// Offset=0x30 Size=0x8
    void  ( * OpenAdapterCompleteHandlerEx)(void * ,int );// Offset=0x38 Size=0x8
    void  ( * CloseAdapterCompleteHandlerEx)(void * );// Offset=0x40 Size=0x8
    int  ( * NetPnPEventHandler)(void * ,struct _NET_PNP_EVENT_NOTIFICATION * );// Offset=0x48 Size=0x8
    void  ( * UninstallHandler)();// Offset=0x50 Size=0x8
    void  ( * OidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x58 Size=0x8
    void  ( * StatusHandlerEx)(void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0x60 Size=0x8
    void  ( * ReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x68 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x70 Size=0x8
    void  ( * DirectOidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x78 Size=0x8
};
