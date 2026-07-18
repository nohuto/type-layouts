enum _VF_DISPATCH_TABLE_TYPE
{
    DispatchTableTypeWdm=0,
    DispatchTableTypeWdf=1,
    DispatchTableTypeNdis=2,
    DispatchTableTypeXdv=3,
    DispatchTableTypeTip=4,
    MaximumDispatchTableType=5
};

struct _VF_DISPATCH_TABLE_HEADER// Size=0x8 (Id=1331)
{
    enum _VF_DISPATCH_TABLE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _VF_NDIS_DISPATCH_TABLE// Size=0xa8 (Id=463)
{
    struct _VF_DISPATCH_TABLE_HEADER Header;// Offset=0x0 Size=0x8
    long  ( * NdisAllocateVerifierContext)(void * ,void * ,void ** ,void ** );// Offset=0x8 Size=0x8
    void  ( * NdisFreeVerifierContext)(void * );// Offset=0x10 Size=0x8
    long  ( * NdisMiniportOidRequestHandler)(void * ,struct _NDIS_OID_REQUEST * ,void * ,void * ,int  ( * )(void * ,struct _NDIS_OID_REQUEST * ));// Offset=0x18 Size=0x8
    void  ( * NdisMOidRequestComplete)(void * ,struct _NDIS_OID_REQUEST * ,int ,void * ,void  ( * )(void * ,struct _NDIS_OID_REQUEST * ,int ));// Offset=0x20 Size=0x8
    void  ( * NdisMIndicateStatusEx)(void * ,struct _NDIS_STATUS_INDICATION * ,void * ,void  ( * )(void * ,struct _NDIS_STATUS_INDICATION * ));// Offset=0x28 Size=0x8
    void  ( * NdisMiniportDevicePnPEventNotifyHandler)(void * ,struct _NET_DEVICE_PNP_EVENT * ,void * ,void * ,void  ( * )(void * ,struct _NET_DEVICE_PNP_EVENT * ));// Offset=0x30 Size=0x8
    void  ( * NdisMiniportHaltExHandler)(void * ,enum _NDIS_HALT_ACTION ,void * ,void * ,void  ( * )(void * ,enum _NDIS_HALT_ACTION ));// Offset=0x38 Size=0x8
    void  ( * NdisMiniportSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,void * ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ));// Offset=0x40 Size=0x8
    void  ( * NdisMSendNetBufferListsComplete)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ));// Offset=0x48 Size=0x8
    void  ( * NdisFilterSendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ));// Offset=0x50 Size=0x8
    void  ( * NdisFSendNetBufferListsComplete)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ));// Offset=0x58 Size=0x8
    void  ( * NdisFSendNetBufferLists)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ));// Offset=0x60 Size=0x8
    void  ( * NdisFilterSendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ));// Offset=0x68 Size=0x8
    void  ( * NdisFilterReceiveNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long ));// Offset=0x70 Size=0x8
    void  ( * NdisFReturnNetBufferLists)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ));// Offset=0x78 Size=0x8
    void  ( * NdisFIndicateReceiveNetBufferLists)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long ));// Offset=0x80 Size=0x8
    void  ( * NdisFilterReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,void * ,void  ( * )(void * ,struct _NET_BUFFER_LIST * ,unsigned long ));// Offset=0x88 Size=0x8
    int  ( * NdisFilterPauseHandler)(void * ,struct _NDIS_FILTER_PAUSE_PARAMETERS * ,void * ,int  ( * )(void * ,struct _NDIS_FILTER_PAUSE_PARAMETERS * ));// Offset=0x90 Size=0x8
    void  ( * NdisFPauseComplete)(void * ,void * ,void  ( * )(void * ));// Offset=0x98 Size=0x8
    unsigned long  ( * NdisIsTiPOn)();// Offset=0xa0 Size=0x8
};
