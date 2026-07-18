struct _PROCESSOR_NUMBER// Size=0x4 (Id=458)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _PROCESSOR_PERF_INFO// Size=0x20 (Id=561)
{
    struct _PROCESSOR_NUMBER Number;// Offset=0x0 Size=0x4
    unsigned long long PerfContext;// Offset=0x8 Size=0x8
    unsigned long PlatformCap;// Offset=0x10 Size=0x4
    unsigned long ThermalCap;// Offset=0x14 Size=0x4
    unsigned long LimitReasons;// Offset=0x18 Size=0x4
};
