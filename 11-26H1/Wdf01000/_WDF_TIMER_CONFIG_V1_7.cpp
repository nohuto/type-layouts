struct _WDF_TIMER_CONFIG_V1_7// Size=0x18 (Id=3594)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtTimerFunc)(struct WDFTIMER__ * );// Offset=0x8 Size=0x8
    long Period;// Offset=0x10 Size=0x4
    unsigned char AutomaticSerialization;// Offset=0x14 Size=0x1
};
