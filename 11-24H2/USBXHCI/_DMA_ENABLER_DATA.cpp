struct _DMA_ENABLER_DATA// Size=0x20 (Id=524)
{
    struct WDFDMAENABLER__ * WdfDmaEnabler;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned long MaxDmaSize;// Offset=0x10 Size=0x4
    unsigned long MapRegisterCount;// Offset=0x14 Size=0x4
    struct _DMA_ADAPTER * DmaAdapter;// Offset=0x18 Size=0x8
};
