struct _anonymous_682// Size=0x18 (Id=682)
{
    unsigned long long CurrentValue;// Offset=0x0 Size=0x8
    unsigned long long PreviousValue;// Offset=0x8 Size=0x8
    unsigned long long SnappedValue;// Offset=0x10 Size=0x8
};

struct _anonymous_32// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=64)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_32 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PROC_ENERGY_ESTIMATION_COUNTERS// Size=0x88 (Id=683)
{
    unsigned long NumberOfActiveCounters;// Offset=0x0 Size=0x4
    void * PmcHandle;// Offset=0x8 Size=0x8
    struct _anonymous_682 CounterState[4];// Offset=0x10 Size=0x60
    union _LARGE_INTEGER CurrentTimestamp;// Offset=0x70 Size=0x8
    union _LARGE_INTEGER PreviousTimestamp;// Offset=0x78 Size=0x8
    union _LARGE_INTEGER SnappedTimestamp;// Offset=0x80 Size=0x8
};
