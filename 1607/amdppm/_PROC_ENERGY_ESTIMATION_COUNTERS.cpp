struct _unnamed_547// Size=0x18 (Id=547)
{
    unsigned long long CurrentValue;// Offset=0x0 Size=0x8
    unsigned long long PreviousValue;// Offset=0x8 Size=0x8
    unsigned long long SnappedValue;// Offset=0x10 Size=0x8
};

struct _PROC_ENERGY_ESTIMATION_COUNTERS// Size=0x70 (Id=548)
{
    unsigned long NumberOfActiveCounters;// Offset=0x0 Size=0x4
    void * PmcHandle;// Offset=0x8 Size=0x8
    struct _unnamed_547 CounterState[4];// Offset=0x10 Size=0x60
};
