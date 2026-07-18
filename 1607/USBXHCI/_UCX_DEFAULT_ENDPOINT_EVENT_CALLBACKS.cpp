struct _UCX_DEFAULT_ENDPOINT_EVENT_CALLBACKS// Size=0x38 (Id=375)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtEndpointPurge)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x8 Size=0x8
    void  ( * EvtEndpointStart)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x10 Size=0x8
    void  ( * EvtEndpointAbort)(struct UCXCONTROLLER__ * ,struct UCXENDPOINT__ * );// Offset=0x18 Size=0x8
    void  ( * EvtEndpointOkToCancelTransfers)(struct UCXENDPOINT__ * );// Offset=0x20 Size=0x8
    void  ( * EvtDefaultEndpointUpdate)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * );// Offset=0x28 Size=0x8
    long  ( * EvtEndpointEnableForwardProgress)(struct UCXENDPOINT__ * ,unsigned long );// Offset=0x30 Size=0x8
};
