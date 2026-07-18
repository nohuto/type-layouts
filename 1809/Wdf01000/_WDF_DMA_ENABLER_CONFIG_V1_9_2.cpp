enum _WDF_DMA_PROFILE
{
    WdfDmaProfileInvalid=0,
    WdfDmaProfilePacket=1,
    WdfDmaProfileScatterGather=2,
    WdfDmaProfilePacket64=3,
    WdfDmaProfileScatterGather64=4,
    WdfDmaProfileScatterGatherDuplex=5,
    WdfDmaProfileScatterGather64Duplex=6,
    WdfDmaProfileSystem=7,
    WdfDmaProfileSystemDuplex=8
};

struct _WDF_DMA_ENABLER_CONFIG_V1_9// Size=0x40 (Id=4899)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_DMA_PROFILE Profile;// Offset=0x4 Size=0x4
    unsigned long long MaximumLength;// Offset=0x8 Size=0x8
    long  ( * EvtDmaEnablerFill)(struct WDFDMAENABLER__ * );// Offset=0x10 Size=0x8
    long  ( * EvtDmaEnablerFlush)(struct WDFDMAENABLER__ * );// Offset=0x18 Size=0x8
    long  ( * EvtDmaEnablerDisable)(struct WDFDMAENABLER__ * );// Offset=0x20 Size=0x8
    long  ( * EvtDmaEnablerEnable)(struct WDFDMAENABLER__ * );// Offset=0x28 Size=0x8
    long  ( * EvtDmaEnablerSelfManagedIoStart)(struct WDFDMAENABLER__ * );// Offset=0x30 Size=0x8
    long  ( * EvtDmaEnablerSelfManagedIoStop)(struct WDFDMAENABLER__ * );// Offset=0x38 Size=0x8
};
