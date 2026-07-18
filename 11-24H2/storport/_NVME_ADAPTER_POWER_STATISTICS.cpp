struct _NVME_ADAPTER_POWER_STATISTICS// Size=0x48 (Id=732)
{
    unsigned long long SystemInLPECount;// Offset=0x0 Size=0x8
    unsigned long long IoCoalescingOnCount;// Offset=0x8 Size=0x8
    unsigned long long PdcResiliencyEngagedCount;// Offset=0x10 Size=0x8
    unsigned long long PowerRequiredCount;// Offset=0x18 Size=0x8
    unsigned long long PowerNotRequiredCount;// Offset=0x20 Size=0x8
    unsigned long long DirectedPowerDownCount;// Offset=0x28 Size=0x8
    unsigned long long DirectedPowerUpCount;// Offset=0x30 Size=0x8
    unsigned long long IdleAdapterForCommandPollingFailure;// Offset=0x38 Size=0x8
    unsigned long long IdleAdapterForCommandRetryExhausted;// Offset=0x40 Size=0x8
};
