struct _DLRM_TELEMETRY// Size=0x78 (Id=1280)
{
    unsigned long long PciGenStartTime;// Offset=0x0 Size=0x8
    unsigned long long PciGenTotalTime[6];// Offset=0x8 Size=0x30
    unsigned long ScaleUpRequestCount;// Offset=0x38 Size=0x4
    unsigned long ScaleDownRequestCount;// Offset=0x3c Size=0x4
    unsigned long LinkRateChangeCountTotal;// Offset=0x40 Size=0x4
    unsigned long long LinkRateChangeTimeTotal;// Offset=0x48 Size=0x8
    unsigned long long LinkRateChangeTimeMax;// Offset=0x50 Size=0x8
    unsigned long long LinkRateChangeTimeMin;// Offset=0x58 Size=0x8
    unsigned long EffectivePowerModeChangeCount;// Offset=0x60 Size=0x4
    unsigned long DripsChangeCount;// Offset=0x64 Size=0x4
    unsigned long LinkConfigInterfaceErrorCount;// Offset=0x68 Size=0x4
    unsigned long ThermalThrottleCount;// Offset=0x6c Size=0x4
    unsigned long UnexpectedLinkSpeedCount;// Offset=0x70 Size=0x4
};
