struct _WDF_TIMER_CONFIG_V1_9// Size=0x20 (Id=3071)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtTimerFunc)(struct WDFTIMER__ * );// Offset=0x8 Size=0x8
    unsigned long Period;// Offset=0x10 Size=0x4
    unsigned char AutomaticSerialization;// Offset=0x14 Size=0x1
    unsigned long TolerableDelay;// Offset=0x18 Size=0x4
};
