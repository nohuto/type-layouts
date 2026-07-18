enum _VF_DISPATCH_TABLE_TYPE
{
    DispatchTableTypeWdm=0,
    DispatchTableTypeWdf=1,
    DispatchTableTypeNdis=2,
    DispatchTableTypeXdv=3,
    DispatchTableTypeHvci=4,
    DispatchTableTypeIov=5,
    DispatchTableTypeBios=6,
    DispatchTableTypeDomain=7,
    DispatchTableTypePlugin=8,
    MaximumDispatchTableType=9
};

struct _VF_DISPATCH_TABLE_HEADER// Size=0x8 (Id=2017)
{
    enum _VF_DISPATCH_TABLE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _VF_NDIS_DISPATCH_TABLE// Size=0xa8 (Id=3248)
{
    struct _VF_DISPATCH_TABLE_HEADER Header;// Offset=0x0 Size=0x8
    long  ( * NdisAllocateVerifierContext)(void * ,void * ,void ** ,void ** );// Offset=0x8 Size=0x8
    void  ( * NdisFreeVerifierContext)(void * );// Offset=0x10 Size=0x8
    long  ( * NdisMiniportOidRequestHandler)(void * ,void * ,void * ,void * ,int  ( * )(void * ,void * ));// Offset=0x18 Size=0x8
    void  ( * NdisMOidRequestComplete)(void * ,void * ,int ,void * ,void  ( * )(void * ,void * ,int ));// Offset=0x20 Size=0x8
    void  ( * NdisMIndicateStatusEx)(void * ,void * ,void * ,void  ( * )(void * ,void * ));// Offset=0x28 Size=0x8
    void  ( * NdisMiniportDevicePnPEventNotifyHandler)(void * ,void * ,void * ,void * ,void  ( * )(void * ,void * ));// Offset=0x30 Size=0x8
    void  ( * NdisMiniportHaltExHandler)(void * ,enum _NDIS_HALT_ACTION ,void * ,void * ,void  ( * )(void * ,enum _NDIS_HALT_ACTION ));// Offset=0x38 Size=0x8
    void  ( * NdisMiniportSendNetBufferListsHandler)(void * ,void * ,unsigned long ,unsigned long ,void * ,void * ,void  ( * )(void * ,void * ,unsigned long ,unsigned long ));// Offset=0x40 Size=0x8
    void  ( * NdisMSendNetBufferListsComplete)(void * ,void * ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ));// Offset=0x48 Size=0x8
    void  ( * NdisFilterSendNetBufferListsHandler)(void * ,void * ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ,unsigned long ));// Offset=0x50 Size=0x8
    void  ( * NdisFSendNetBufferListsComplete)(void * ,void * ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ));// Offset=0x58 Size=0x8
    void  ( * NdisFSendNetBufferLists)(void * ,void * ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ,unsigned long ));// Offset=0x60 Size=0x8
    void  ( * NdisFilterSendNetBufferListsCompleteHandler)(void * ,void * ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ));// Offset=0x68 Size=0x8
    void  ( * NdisFilterReceiveNetBufferListsHandler)(void * ,void * ,unsigned long ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ,unsigned long ,unsigned long ));// Offset=0x70 Size=0x8
    void  ( * NdisFReturnNetBufferLists)(void * ,void * ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ));// Offset=0x78 Size=0x8
    void  ( * NdisFIndicateReceiveNetBufferLists)(void * ,void * ,unsigned long ,unsigned long ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ,unsigned long ,unsigned long ));// Offset=0x80 Size=0x8
    void  ( * NdisFilterReturnNetBufferListsHandler)(void * ,void * ,unsigned long ,void * ,void  ( * )(void * ,void * ,unsigned long ));// Offset=0x88 Size=0x8
    int  ( * NdisFilterPauseHandler)(void * ,struct _NDIS_FILTER_PAUSE_PARAMETERS * ,void * ,int  ( * )(void * ,struct _NDIS_FILTER_PAUSE_PARAMETERS * ));// Offset=0x90 Size=0x8
    void  ( * NdisFPauseComplete)(void * ,void * ,void  ( * )(void * ));// Offset=0x98 Size=0x8
    unsigned long  ( * NdisIsTiPOn)();// Offset=0xa0 Size=0x8
};
