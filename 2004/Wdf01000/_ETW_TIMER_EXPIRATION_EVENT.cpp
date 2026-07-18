struct _ETW_TIMER_EXPIRATION_EVENT// Size=0x20 (Id=2578)
{
    unsigned long long ExpectedDueTime;// Offset=0x0 Size=0x8
    unsigned long long TimerAddress;// Offset=0x8 Size=0x8
    unsigned long long DeferredRoutine;// Offset=0x10 Size=0x8
    unsigned char EncodedDelay;// Offset=0x18 Size=0x1
};
