struct _LIST_ENTRY// Size=0x10 (Id=51)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=91)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _LARGE_INTEGER// Size=0x8 (Id=156)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5909)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_CO_VC_PTR_BLOCK// Size=0x158 (Id=574)
{
    long References;// Offset=0x0 Size=0x4
    unsigned long CallFlags;// Offset=0x4 Size=0x4
    unsigned long * pVcFlags;// Offset=0x8 Size=0x8
    unsigned long long Lock;// Offset=0x10 Size=0x8
    void * ClientContext;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY ClientLink;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY VcLink;// Offset=0x30 Size=0x10
    struct _NDIS_CO_AF_BLOCK * AfBlock;// Offset=0x40 Size=0x8
    struct _NDIS_CO_VC_BLOCK * VcBlock;// Offset=0x48 Size=0x8
    struct _NDIS_OPEN_BLOCK * ClientOpen;// Offset=0x50 Size=0x8
    long OwnsVcBlock;// Offset=0x58 Size=0x4
    int  ( * CoDeleteVcHandler)(void * );// Offset=0x60 Size=0x8
    void * DeleteVcContext;// Offset=0x68 Size=0x8
    void  ( * ClModifyCallQoSCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    void  ( * ClIncomingCallQoSChangeHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x78 Size=0x8
    void  ( * ClCallConnectedHandler)(void * );// Offset=0x80 Size=0x8
    struct _NDIS_OPEN_BLOCK * CallMgrOpen;// Offset=0x88 Size=0x8
    void * CallMgrContext;// Offset=0x90 Size=0x8
    struct _LIST_ENTRY CallMgrLink;// Offset=0x98 Size=0x10
    void  ( * CmActivateVcCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0xa8 Size=0x8
    void  ( * CmDeactivateVcCompleteHandler)(int ,void * );// Offset=0xb0 Size=0x8
    int  ( * CmModifyCallQoSHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0xb8 Size=0x8
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0xc0 Size=0x8
    void * MiniportContext;// Offset=0xc8 Size=0x8
    void  ( * WCoSendPacketsHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0xd0 Size=0x8
    int  ( * WCoDeleteVcHandler)(void * );// Offset=0xd8 Size=0x8
    int  ( * WCoActivateVcHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0xe0 Size=0x8
    int  ( * WCoDeactivateVcHandler)(void * );// Offset=0xe8 Size=0x8
    void  ( * WCoSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xf0 Size=0x8
    void  ( * CoSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xf8 Size=0x8
    void  ( * CoSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x100 Size=0x8
    void  ( * CoSendPacketHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x108 Size=0x8
    void  ( * CoSendPacketCompleteHandler)(int ,void * ,struct _NDIS_PACKET * );// Offset=0x110 Size=0x8
    void  ( * CoIndicateReceivePacketHandler)(void * ,struct _NDIS_PACKET ** ,unsigned int );// Offset=0x118 Size=0x8
    void  ( * CoIndicateReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0x120 Size=0x8
    struct _UNICODE_STRING VcInstanceName;// Offset=0x128 Size=0x10
    union _LARGE_INTEGER VcIndex;// Offset=0x138 Size=0x8
    struct _LIST_ENTRY WmiLink;// Offset=0x140 Size=0x10
    unsigned char CallMiniportDeleteVc;// Offset=0x150 Size=0x1
};
