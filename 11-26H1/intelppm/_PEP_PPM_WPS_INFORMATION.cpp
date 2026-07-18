enum _PEP_PPM_WPS_PARK_PREFERENCE
{
    NoPreference=0,
    PreferToPark=1,
    ForcePark=2
};

enum _PEP_WPS_PARK_PREFERENCE_REASON
{
    ParkReasonNone=0,
    ParkReasonPowerSaving=1,
    ParkReasonThermalManagement=2,
    ParkReasonPerformance=4,
    ParkReasonFwRequestStopUsingLp=8,
    ParkReasonLpBelowPowerConstraints=16,
    ParkReasonOverClockingDriver=32,
    ParkReasonTuning=64
};

struct _PEP_PPM_WPS_INFORMATION// Size=0x10 (Id=814)
{
    unsigned char PerformanceRankingScore;// Offset=0x0 Size=0x1
    unsigned char EfficiencyRankingScore;// Offset=0x1 Size=0x1
    enum _PEP_PPM_WPS_PARK_PREFERENCE ParkingPreference;// Offset=0x4 Size=0x4
    enum _PEP_WPS_PARK_PREFERENCE_REASON ParkPreferenceReason;// Offset=0x8 Size=0x4
    unsigned char UnparkOrderingValue;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};
