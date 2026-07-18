struct _KAFFINITY_EX// Size=0xa8 (Id=471)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _PROCESSOR_PERF_STATES_UPDATE// Size=0xb0 (Id=450)
{
    unsigned long MaxPerfPercent;// Offset=0x0 Size=0x4
    struct _KAFFINITY_EX TargetProcessors;// Offset=0x8 Size=0xa8
};
