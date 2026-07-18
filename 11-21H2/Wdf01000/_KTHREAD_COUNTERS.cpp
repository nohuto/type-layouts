enum _HARDWARE_COUNTER_TYPE
{
    PMCCounter=0,
    MaxHardwareCounterType=1
};

struct _COUNTER_READING// Size=0x18 (Id=1068)
{
    enum _HARDWARE_COUNTER_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Index;// Offset=0x4 Size=0x4
    unsigned long long Start;// Offset=0x8 Size=0x8
    unsigned long long Total;// Offset=0x10 Size=0x8
};

struct _KTHREAD_COUNTERS// Size=0x1a8 (Id=1172)
{
    unsigned long long WaitReasonBitMap;// Offset=0x0 Size=0x8
    struct _THREAD_PERFORMANCE_DATA * UserData;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long ContextSwitches;// Offset=0x14 Size=0x4
    unsigned long long CycleTimeBias;// Offset=0x18 Size=0x8
    unsigned long long HardwareCounters;// Offset=0x20 Size=0x8
    struct _COUNTER_READING HwCounter[16];// Offset=0x28 Size=0x180
};
