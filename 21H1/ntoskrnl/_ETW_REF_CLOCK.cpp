struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=977)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _ETW_REF_CLOCK// Size=0x10 (Id=1332)
{
    union _LARGE_INTEGER StartTime;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER StartPerfClock;// Offset=0x8 Size=0x8
};
