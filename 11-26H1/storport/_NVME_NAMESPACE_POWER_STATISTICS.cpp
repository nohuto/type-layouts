struct _NVME_NAMESPACE_POWER_STATISTICS// Size=0x20 (Id=937)
{
    unsigned long long PowerRequiredCount;// Offset=0x0 Size=0x8
    unsigned long long PowerNotRequiredCount;// Offset=0x8 Size=0x8
    unsigned long long DirectedPowerDownCount;// Offset=0x10 Size=0x8
    unsigned long long DirectedPowerUpCount;// Offset=0x18 Size=0x8
};
