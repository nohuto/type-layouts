struct _PROCESSOR_NUMBER// Size=0x4 (Id=215)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

enum _HARDWARE_COUNTER_TYPE
{
    PMCCounter=0,
    MaxHardwareCounterType=1
};

struct _COUNTER_READING// Size=0x18 (Id=263)
{
    enum _HARDWARE_COUNTER_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Index;// Offset=0x4 Size=0x4
    unsigned long long Start;// Offset=0x8 Size=0x8
    unsigned long long Total;// Offset=0x10 Size=0x8
};

struct _THREAD_PERFORMANCE_DATA// Size=0x1c0 (Id=447)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long ContextSwitches;// Offset=0x8 Size=0x4
    unsigned long HwCountersCount;// Offset=0xc Size=0x4
    unsigned long long UpdateCount;// Offset=0x10 Size=0x8
    unsigned long long WaitReasonBitMap;// Offset=0x18 Size=0x8
    unsigned long long HardwareCounters;// Offset=0x20 Size=0x8
    struct _COUNTER_READING CycleTime;// Offset=0x28 Size=0x18
    struct _COUNTER_READING HwCounters[16];// Offset=0x40 Size=0x180
};
