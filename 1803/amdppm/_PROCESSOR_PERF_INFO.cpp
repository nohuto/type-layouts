struct _PROCESSOR_PERF_INFO// Size=0x20 (Id=609)
{
    unsigned long ProcessorId;// Offset=0x0 Size=0x4
    unsigned long long PerfContext;// Offset=0x8 Size=0x8
    unsigned long PlatformCap;// Offset=0x10 Size=0x4
    unsigned long ThermalCap;// Offset=0x14 Size=0x4
    unsigned long LimitReasons;// Offset=0x18 Size=0x4
    unsigned char HiddenProcessor;// Offset=0x1c Size=0x1
};
