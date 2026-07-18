struct _TR_FUNCTION_TABLE// Size=0xc8 (Id=679)
{
    long  ( * TR_Initialize)(void * );// Offset=0x0 Size=0x8
    void  ( * TR_Cleanup)(void * );// Offset=0x8 Size=0x8
    void  ( * TR_CommonBufferCallback)(void * ,long );// Offset=0x10 Size=0x8
    void  ( * TR_GetCurrentActivityId)(void * ,struct _GUID * );// Offset=0x18 Size=0x8
    long  ( * EP_Enable)(void * );// Offset=0x20 Size=0x8
    void  ( * EP_Disable)(void * ,unsigned char );// Offset=0x28 Size=0x8
    long  ( * EP_EnableForwardProgress)(void * ,unsigned long );// Offset=0x30 Size=0x8
    unsigned char  ( * EP_AreTransfersPending)(void * );// Offset=0x38 Size=0x8
    void  ( * EP_OkToReclaimTransfersOnCancel)(void * );// Offset=0x40 Size=0x8
    void  ( * EP_ReclaimTransfers)(void * );// Offset=0x48 Size=0x8
    unsigned char  ( * EP_IsTransferEventLikelyDuplicate)(void * ,union _LARGE_INTEGER ,unsigned char * );// Offset=0x50 Size=0x8
    unsigned char  ( * EP_TransferEventHandler)(struct _TRANSFER_EVENT_TRB * ,void * );// Offset=0x58 Size=0x8
    void  ( * EP_StartMapping)(void * );// Offset=0x60 Size=0x8
    void  ( * EP_StopMapping)(void * );// Offset=0x68 Size=0x8
    unsigned char  ( * EP_IsMappingPaused)(void * );// Offset=0x70 Size=0x8
    void  ( * EP_EndpointHalted)(void * );// Offset=0x78 Size=0x8
    void  ( * EP_EndpointResetFromClient)(void * );// Offset=0x80 Size=0x8
    void  ( * EP_ProcessExpectedEventTRBs)(void * );// Offset=0x88 Size=0x8
    void  ( * EP_FSEReceived)(void * );// Offset=0x90 Size=0x8
    unsigned char  ( * EP_WasDoorbellRungSinceMappingStart)(void * );// Offset=0x98 Size=0x8
    void  ( * WDF_EvtIoDefault)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0xa0 Size=0x8
    void  ( * WDF_EvtIoCanceledOnQueue)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0xa8 Size=0x8
    void  ( * WDF_EvtIoQueueReadyNotification)(struct WDFQUEUE__ * ,void * );// Offset=0xb0 Size=0x8
    void  ( * WDF_EvtDpcForTransferCompletion)(struct WDFDPC__ * );// Offset=0xb8 Size=0x8
    void  ( * WDF_EvtWorkItemForTransferCompletion)(struct WDFWORKITEM__ * );// Offset=0xc0 Size=0x8
};
