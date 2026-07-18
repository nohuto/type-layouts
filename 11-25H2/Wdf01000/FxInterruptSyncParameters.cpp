struct FxInterruptSyncParameters// Size=0x18 (Id=552)
{
    class FxInterrupt * Interrupt;// Offset=0x0 Size=0x8
    unsigned char  ( * Callback)(struct WDFINTERRUPT__ * ,void * );// Offset=0x8 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
};
