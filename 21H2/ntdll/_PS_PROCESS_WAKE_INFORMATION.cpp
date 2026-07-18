struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=399)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _PS_PROCESS_WAKE_INFORMATION// Size=0x30 (Id=389)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long WakeCounters[7];// Offset=0x8 Size=0x1c
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x24 Size=0x8
    unsigned long NoWakeCounter;// Offset=0x2c Size=0x4
};
