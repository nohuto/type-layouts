struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS// Size=0xa0 (Id=502)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char MajorNdisVersion;// Offset=0x4 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x5 Size=0x1
    unsigned char MajorDriverVersion;// Offset=0x6 Size=0x1
    unsigned char MinorDriverVersion;// Offset=0x7 Size=0x1
    unsigned long Flags;// Offset=0x8 Size=0x4
    int  ( * SetOptionsHandler)(void * ,void * );// Offset=0x10 Size=0x8
    int  ( * InitializeHandlerEx)(void * ,void * ,struct _NDIS_MINIPORT_INIT_PARAMETERS * );// Offset=0x18 Size=0x8
    void  ( * HaltHandlerEx)(void * ,enum _NDIS_HALT_ACTION );// Offset=0x20 Size=0x8
    void  ( * UnloadHandler)(struct _DRIVER_OBJECT * );// Offset=0x28 Size=0x8
    int  ( * PauseHandler)(void * ,struct _NDIS_MINIPORT_PAUSE_PARAMETERS * );// Offset=0x30 Size=0x8
    int  ( * RestartHandler)(void * ,struct _NDIS_MINIPORT_RESTART_PARAMETERS * );// Offset=0x38 Size=0x8
    int  ( * OidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x40 Size=0x8
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x50 Size=0x8
    void  ( * CancelSendHandler)(void * ,void * );// Offset=0x58 Size=0x8
    unsigned char  ( * CheckForHangHandlerEx)(void * );// Offset=0x60 Size=0x8
    int  ( * ResetHandlerEx)(void * ,unsigned char * );// Offset=0x68 Size=0x8
    void  ( * DevicePnPEventNotifyHandler)(void * ,struct _NET_DEVICE_PNP_EVENT * );// Offset=0x70 Size=0x8
    void  ( * ShutdownHandlerEx)(void * ,enum _NDIS_SHUTDOWN_ACTION );// Offset=0x78 Size=0x8
    void  ( * CancelOidRequestHandler)(void * ,void * );// Offset=0x80 Size=0x8
    int  ( * DirectOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x88 Size=0x8
    void  ( * CancelDirectOidRequestHandler)(void * ,void * );// Offset=0x90 Size=0x8
    int  ( * SynchronousOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * );// Offset=0x98 Size=0x8
};
