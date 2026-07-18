struct _RUNTIME_PERF_STATE// Size=0x20 (Id=596)
{
    unsigned long long Control;// Offset=0x0 Size=0x8
    unsigned long long Status;// Offset=0x8 Size=0x8
    unsigned long Frequency;// Offset=0x10 Size=0x4
    unsigned long Power;// Offset=0x14 Size=0x4
    unsigned char PercentFrequency;// Offset=0x18 Size=0x1
    unsigned char Type;// Offset=0x19 Size=0x1
    unsigned short Latency;// Offset=0x1a Size=0x2
};
