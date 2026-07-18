struct _UCX_ENDPOINT_EVENT_CALLBACKS// Size=0x50 (Id=373)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtEndpointPurge)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x8 Size=0x8
    void  ( * EvtEndpointStart)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x10 Size=0x8
    void  ( * EvtEndpointAbort)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x18 Size=0x8
    void  ( * EvtEndpointReset)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * ,struct WDFREQUEST__ * );// Offset=0x20 Size=0x8
    void  ( * EvtEndpointOkToCancelTransfers)(struct UCXENDPOINT__ * );// Offset=0x28 Size=0x8
    long  ( * EvtEndpointStaticStreamsAdd)(struct UCXENDPOINT__ * ,unsigned long ,struct _UCXSSTREAMS_INIT * );// Offset=0x30 Size=0x8
    void  ( * EvtEndpointStaticStreamsEnable)(struct UCXENDPOINT__ * ,struct UCXSSTREAMS__ * ,struct WDFREQUEST__ * );// Offset=0x38 Size=0x8
    void  ( * EvtEndpointStaticStreamsDisable)(struct UCXENDPOINT__ * ,struct UCXSSTREAMS__ * ,struct WDFREQUEST__ * );// Offset=0x40 Size=0x8
    long  ( * EvtEndpointEnableForwardProgress)(struct UCXENDPOINT__ * ,unsigned long );// Offset=0x48 Size=0x8
};
