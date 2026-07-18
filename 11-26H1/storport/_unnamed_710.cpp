enum _PO_EFFECTIVE_POWER_MODE
{
    PoEffectivePowerModeBatterySaver=0,
    PoEffectivePowerModeEnergySaverHighSavings=0,
    PoEffectivePowerModeBetterBattery=1,
    PoEffectivePowerModeEnergySaverStandard=1,
    PoEffectivePowerModeBalanced=2,
    PoEffectivePowerModeHighPerformance=3,
    PoEffectivePowerModeMaxPerformance=4,
    PoEffectivePowerModeGameMode=5,
    PoEffectivePowerModeMixedReality=6
};

enum _DLRM_POWER_MODE
{
    PowerModeUnknown=0,
    PowerModeBalanced=1,
    PowerModeLowPower=2,
    PowerModeHighPerformance=3
};

struct _unnamed_710// Size=0x10 (Id=710)
{
    void * EffectivePowerModeHandle;// Offset=0x0 Size=0x8
    enum _PO_EFFECTIVE_POWER_MODE EffectivePowerMode;// Offset=0x8 Size=0x4
    enum _DLRM_POWER_MODE DLRMPowerMode;// Offset=0xc Size=0x4
};
