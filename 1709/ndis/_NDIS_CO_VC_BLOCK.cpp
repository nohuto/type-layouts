struct _NDIS_CO_VC_BLOCK// Size=0x90 (Id=389)
{
    unsigned long References;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long long Lock;// Offset=0x8 Size=0x8
    struct _NDIS_OPEN_BLOCK * ClientOpen;// Offset=0x10 Size=0x8
    void * ClientContext;// Offset=0x18 Size=0x8
    struct _NDIS_CO_VC_PTR_BLOCK * pProxyVcPtr;// Offset=0x20 Size=0x8
    struct _NDIS_CO_VC_PTR_BLOCK * pClientVcPtr;// Offset=0x28 Size=0x8
    void  ( * CoSendCompleteHandler)(int ,void * ,struct _NDIS_PACKET * );// Offset=0x30 Size=0x8
    unsigned int  ( * CoReceivePacketHandler)(void * ,void * ,struct _NDIS_PACKET * );// Offset=0x38 Size=0x8
    void  ( * CoSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x40 Size=0x8
    void  ( * CoReceiveNetBufferListsHandler)(void * ,void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x48 Size=0x8
    struct _NDIS_OPEN_BLOCK * CallMgrOpen;// Offset=0x50 Size=0x8
    void * CallMgrContext;// Offset=0x58 Size=0x8
    void  ( * CmActivateVcCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x60 Size=0x8
    void  ( * CmDeactivateVcCompleteHandler)(int ,void * );// Offset=0x68 Size=0x8
    int  ( * CmModifyCallQoSHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x78 Size=0x8
    void * MiniportContext;// Offset=0x80 Size=0x8
    unsigned long long VcId;// Offset=0x88 Size=0x8
};
