struct _NDIS_MINIPORT_HANDLERS// Size=0xb8 (Id=468)
{
    void * RequestContext;// Offset=0x0 Size=0x8
    void * CancelSendContext;// Offset=0x8 Size=0x8
    void * IndicateNetBufferListsContext;// Offset=0x10 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * IndicateNetBufferListsTracker;// Offset=0x18 Size=0x8
    struct _NDIS_OBJECT_HEADER * IndicateNetBufferListsObject;// Offset=0x20 Size=0x8
    void * SaveIndicateNetBufferListsContext;// Offset=0x28 Size=0x8
    void * ReturnNetBufferListsContext;// Offset=0x30 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * ReturnNetBufferListsTracker;// Offset=0x38 Size=0x8
    struct _NDIS_OBJECT_HEADER * ReturnNetBufferListsObject;// Offset=0x40 Size=0x8
    void * SendNetBufferListsContext;// Offset=0x48 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * SendNetBufferListsTracker;// Offset=0x50 Size=0x8
    struct _NDIS_OBJECT_HEADER * SendNetBufferListsObject;// Offset=0x58 Size=0x8
    void * SendNetBufferListsCompleteContext;// Offset=0x60 Size=0x8
    struct NDIS_NBL_TRACKER_HANDLE__ * SendNetBufferListsCompleteTracker;// Offset=0x68 Size=0x8
    struct _NDIS_OBJECT_HEADER * SendNetBufferListsCompleteObject;// Offset=0x70 Size=0x8
    void * RequestHandle;// Offset=0x78 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * CancelSendHandler)(void * ,void * );// Offset=0x80 Size=0x8
        void  ( * CancelSendPacketsHandler)(void * ,void * );// Offset=0x80 Size=0x8
    };
    void  ( * SendNetBufferListsCompleteHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * IndicateNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x90 Size=0x8
    void  ( * SaveIndicateNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x98 Size=0x8
    void  ( * ReturnNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long );// Offset=0xa0 Size=0x8
    void  ( * SendNetBufferListsHandler)(void * ,struct _NET_BUFFER_LIST * ,unsigned long ,unsigned long );// Offset=0xa8 Size=0x8
    void * DirectRequestHandle;// Offset=0xb0 Size=0x8
};
