struct _ETW_WAKE_COUNTER_EVENT// Size=0x20 (Id=3409)
{
    void * Object;// Offset=0x0 Size=0x8
    unsigned long long Tag;// Offset=0x8 Size=0x8
    unsigned long ProcessId;// Offset=0x10 Size=0x4
    long Count;// Offset=0x14 Size=0x4
    unsigned long long CounterValue;// Offset=0x18 Size=0x8
};
