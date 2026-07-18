struct FxWatchdog// Size=0xa8 (Id=1481)
{
    void FxWatchdog(class FxPkgPnp * );
    union // Size=0x88 (Id=0)
    {
        void StartTimer(unsigned long );// Offset=0x0 Size=0x6e
        void CancelTimer(unsigned long );
        void _WatchdogDpc(struct _KDPC * ,void * ,void * ,void * );// Offset=0x0 Size=0x88
        class MxTimer m_Timer;// Offset=0x0 Size=0x98
    };
    class FxPkgPnp * m_PkgPnp;// Offset=0x98 Size=0x8
    struct _KTHREAD * m_CallingThread;// Offset=0xa0 Size=0x8
    void ~FxWatchdog();
    void * __vecDelDtor(unsigned int );
};
