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

struct _NDIS50_MINIPORT_CHARACTERISTICS// Size=0xb8 (Id=951)
{
    unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
    unsigned short Filler;// Offset=0x2 Size=0x2
    unsigned int Reserved;// Offset=0x4 Size=0x4
    unsigned char  ( * CheckForHangHandler)(void * );// Offset=0x8 Size=0x8
    void  ( * DisableInterruptHandler)(void * );// Offset=0x10 Size=0x8
    void  ( * EnableInterruptHandler)(void * );// Offset=0x18 Size=0x8
    void  ( * HaltHandler)(void * );// Offset=0x20 Size=0x8
    void  ( * HandleInterruptHandler)(void * );// Offset=0x28 Size=0x8
    int  ( * InitializeHandler)(int * ,unsigned int * ,enum _NDIS_MEDIUM * ,unsigned int ,void * ,void * );// Offset=0x30 Size=0x8
    void  ( * ISRHandler)(unsigned char * ,unsigned char * ,void * );// Offset=0x38 Size=0x8
    int  ( * QueryInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x40 Size=0x8
    int  ( * ReconfigureHandler)(int * ,void * ,void * );// Offset=0x48 Size=0x8
    int  ( * ResetHandler)(unsigned char * ,void * );// Offset=0x50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x58 Size=0x8
        int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x58 Size=0x8
    };
    int  ( * SetInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x60 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * TransferDataHandler)(struct _NDIS_PACKET * ,unsigned int * ,void * ,void * ,unsigned int ,unsigned int );// Offset=0x68 Size=0x8
        int  ( * WanTransferDataHandler)();// Offset=0x68 Size=0x8
    };
    void  ( * ReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x70 Size=0x8
    void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x78 Size=0x8
    void  ( * AllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x80 Size=0x8
    int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x88 Size=0x8
    int  ( * CoDeleteVcHandler)(void * );// Offset=0x90 Size=0x8
    int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x98 Size=0x8
    int  ( * CoDeactivateVcHandler)(void * );// Offset=0xa0 Size=0x8
    void  ( * CoSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xa8 Size=0x8
    int  ( * CoRequestHandler)(void * ,void * ,struct _NDIS_REQUEST * );// Offset=0xb0 Size=0x8
};

struct _NDIS51_MINIPORT_CHARACTERISTICS// Size=0xf0 (Id=1050)
{
    union // Size=0xb8 (Id=0)
    {
        struct _NDIS50_MINIPORT_CHARACTERISTICS Ndis50Chars;// Offset=0x0 Size=0xb8
        unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
        unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
        unsigned short Filler;// Offset=0x2 Size=0x2
        unsigned int Reserved;// Offset=0x4 Size=0x4
        unsigned char  ( * CheckForHangHandler)(void * );// Offset=0x8 Size=0x8
        void  ( * DisableInterruptHandler)(void * );// Offset=0x10 Size=0x8
        void  ( * EnableInterruptHandler)(void * );// Offset=0x18 Size=0x8
        void  ( * HaltHandler)(void * );// Offset=0x20 Size=0x8
        void  ( * HandleInterruptHandler)(void * );// Offset=0x28 Size=0x8
        int  ( * InitializeHandler)(int * ,unsigned int * ,enum _NDIS_MEDIUM * ,unsigned int ,void * ,void * );// Offset=0x30 Size=0x8
        void  ( * ISRHandler)(unsigned char * ,unsigned char * ,void * );// Offset=0x38 Size=0x8
        int  ( * QueryInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x40 Size=0x8
        int  ( * ReconfigureHandler)(int * ,void * ,void * );// Offset=0x48 Size=0x8
        int  ( * ResetHandler)(unsigned char * ,void * );// Offset=0x50 Size=0x8
        union // Size=0x8 (Id=0)
        {
            int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x58 Size=0x8
            int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x58 Size=0x8
        };
        int  ( * SetInformationHandler)(void * ,unsigned long ,void * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x60 Size=0x8
        union // Size=0x8 (Id=0)
        {
            int  ( * TransferDataHandler)(struct _NDIS_PACKET * ,unsigned int * ,void * ,void * ,unsigned int ,unsigned int );// Offset=0x68 Size=0x8
            int  ( * WanTransferDataHandler)();// Offset=0x68 Size=0x8
        };
        void  ( * ReturnPacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x70 Size=0x8
        void  ( * SendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x78 Size=0x8
        void  ( * AllocateCompleteHandler)(void * ,void * ,union _LARGE_INTEGER * ,unsigned long ,void * );// Offset=0x80 Size=0x8
        int  ( * CoCreateVcHandler)(void * ,void * ,void ** );// Offset=0x88 Size=0x8
        int  ( * CoDeleteVcHandler)(void * );// Offset=0x90 Size=0x8
        int  ( * CoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x98 Size=0x8
        int  ( * CoDeactivateVcHandler)(void * );// Offset=0xa0 Size=0x8
        void  ( * CoSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xa8 Size=0x8
        int  ( * CoRequestHandler)(void * ,void * ,struct _NDIS_REQUEST * );// Offset=0xb0 Size=0x8
    };
    void  ( * CancelSendPacketsHandler)(void * ,void * );// Offset=0xb8 Size=0x8
    void  ( * PnPEventNotifyHandler)(void * ,enum _NDIS_DEVICE_PNP_EVENT ,void * ,unsigned long );// Offset=0xc0 Size=0x8
    void  ( * AdapterShutdownHandler)(void * );// Offset=0xc8 Size=0x8
    void * Reserved1;// Offset=0xd0 Size=0x8
    void * Reserved2;// Offset=0xd8 Size=0x8
    void * Reserved3;// Offset=0xe0 Size=0x8
    void * Reserved4;// Offset=0xe8 Size=0x8
};

union _NDIS_M_DRIVER_BLOCK::_unnamed_1706// Size=0xf0 (Id=1706)
{
    struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics;// Offset=0x0 Size=0xa0
    struct _NDIS51_MINIPORT_CHARACTERISTICS MiniportCharacteristics;// Offset=0x0 Size=0xf0
};
