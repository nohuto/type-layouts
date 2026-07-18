struct _NDIS50_MINIPORT_CHARACTERISTICS// Size=0xb8 (Id=1055)
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
