struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _UNICODE_STRING// Size=0x10 (Id=39)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_FILTER_DRIVER_CHARACTERISTICS// Size=0xf0 (Id=785)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char MajorNdisVersion;// Offset=0x4 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x5 Size=0x1
    unsigned char MajorDriverVersion;// Offset=0x6 Size=0x1
    unsigned char MinorDriverVersion;// Offset=0x7 Size=0x1
    unsigned long Flags;// Offset=0x8 Size=0x4
    struct _UNICODE_STRING FriendlyName;// Offset=0x10 Size=0x10
    struct _UNICODE_STRING UniqueName;// Offset=0x20 Size=0x10
    struct _UNICODE_STRING ServiceName;// Offset=0x30 Size=0x10
    int  ( * SetOptionsHandler)(void * ,void * );// Offset=0x40 Size=0x8
    int  ( * SetFilterModuleOptionsHandler)(void * );// Offset=0x48 Size=0x8
    int  ( * AttachHandler)(void * ,void * ,struct _NDIS_FILTER_ATTACH_PARAMETERS * );// Offset=0x50 Size=0x8
    void  ( * DetachHandler)(void * );// Offset=0x58 Size=0x8
    int  ( * RestartHandler)(void * ,struct _NDIS_FILTER_RESTART_PARAMETERS * );// Offset=0x60 Size=0x8
    int  ( * PauseHandler)(void * ,struct _NDIS_FILTER_PAUSE_PARAMETERS * );// Offset=0x68 Size=0x8
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x70 Size=0x8
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x78 Size=0x8
    void  ( * CancelSendNetBufferListsHandler)(void * ,void * );// Offset=0x80 Size=0x8
    void  ( * ReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x90 Size=0x8
    int  ( * OidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x98 Size=0x8
    void  ( * OidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0xa0 Size=0x8
    void  ( * CancelOidRequestHandler)(void * ,void * );// Offset=0xa8 Size=0x8
    void  ( * DevicePnPEventNotifyHandler)(void * ,struct _NET_DEVICE_PNP_EVENT * );// Offset=0xb0 Size=0x8
    int  ( * NetPnPEventHandler)(void * ,struct _NET_PNP_EVENT_NOTIFICATION * );// Offset=0xb8 Size=0x8
    void  ( * StatusHandler)(void * ,struct _NDIS_STATUS_INDICATION * );// Offset=0xc0 Size=0x8
    int  ( * DirectOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0xc8 Size=0x8
    void  ( * DirectOidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0xd0 Size=0x8
    void  ( * CancelDirectOidRequestHandler)(void * ,void * );// Offset=0xd8 Size=0x8
    int  ( * SynchronousOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * ,void ** );// Offset=0xe0 Size=0x8
    void  ( * SynchronousOidRequestCompleteHandler)(void * ,struct _NDIS_OID_REQUEST * ,int * ,void * );// Offset=0xe8 Size=0x8
};
