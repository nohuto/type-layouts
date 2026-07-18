struct _ETW_PER_SESSION_QUOTA// Size=0x18 (Id=1651)
{
    unsigned long SessionId;// Offset=0x0 Size=0x4
    unsigned long CpuShareWeight;// Offset=0x4 Size=0x4
    long long CapturedWeightData;// Offset=0x8 Size=0x8
    unsigned long long CyclesAccumulated;// Offset=0x10 Size=0x8
};
