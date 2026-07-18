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

struct _PEP_PPM_WPS_TABLE_ENTRY// Size=0x18 (Id=779)
{
    union // Size=0x8 (Id=0)
    {
        struct PEPHANDLE__ * Processor;// Offset=0x0 Size=0x8
        struct POHANDLE__ * KernelContext;// Offset=0x0 Size=0x8
    };
    struct _PEP_PPM_WPS_INFORMATION WpsInformation;// Offset=0x8 Size=0x10
};

struct _PEP_PPM_QUERY_WPS_TABLE// Size=0x20 (Id=616)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    struct _PEP_PPM_WPS_TABLE_ENTRY WpsTableEntries[1];// Offset=0x8 Size=0x18
};
