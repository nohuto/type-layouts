struct _KCLOCK_TICK_TRACE// Size=0x28 (Id=384)
{
    unsigned long long PerformanceCounter;// Offset=0x0 Size=0x8
    unsigned long long PreInterruptTime;// Offset=0x8 Size=0x8
    unsigned long long PostInterruptTime;// Offset=0x10 Size=0x8
    unsigned long long TimeStampCounter;// Offset=0x18 Size=0x8
    unsigned char IsClockOwner;// Offset=0x20 Size=0x1
};
