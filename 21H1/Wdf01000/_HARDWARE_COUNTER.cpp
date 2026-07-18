enum _HARDWARE_COUNTER_TYPE
{
    PMCCounter=0,
    MaxHardwareCounterType=1
};

struct _HARDWARE_COUNTER// Size=0x10 (Id=2339)
{
    enum _HARDWARE_COUNTER_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Index;// Offset=0x8 Size=0x8
};
