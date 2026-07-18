struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PERFINFO_PO_PRESLEEP// Size=0x10 (Id=1457)
{
    union _LARGE_INTEGER PerformanceCounter;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PerformanceFrequency;// Offset=0x8 Size=0x8
};
