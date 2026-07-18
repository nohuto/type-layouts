enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _WDF_INTERRUPT_CONFIG_V1_7// Size=0x38 (Id=2591)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct WDFSPINLOCK__ * SpinLock;// Offset=0x8 Size=0x8
    enum _WDF_TRI_STATE ShareVector;// Offset=0x10 Size=0x4
    unsigned char FloatingSave;// Offset=0x14 Size=0x1
    unsigned char AutomaticSerialization;// Offset=0x15 Size=0x1
    unsigned char  ( * EvtInterruptIsr)(struct WDFINTERRUPT__ * ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * EvtInterruptDpc)(struct WDFINTERRUPT__ * ,void * );// Offset=0x20 Size=0x8
    long  ( * EvtInterruptEnable)(struct WDFINTERRUPT__ * ,struct WDFDEVICE__ * );// Offset=0x28 Size=0x8
    long  ( * EvtInterruptDisable)(struct WDFINTERRUPT__ * ,struct WDFDEVICE__ * );// Offset=0x30 Size=0x8
};
