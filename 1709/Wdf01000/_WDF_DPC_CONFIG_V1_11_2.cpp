struct _WDF_DPC_CONFIG_V1_11// Size=0x18 (Id=3913)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtDpcFunc)(struct WDFDPC__ * );// Offset=0x8 Size=0x8
    unsigned char AutomaticSerialization;// Offset=0x10 Size=0x1
};
