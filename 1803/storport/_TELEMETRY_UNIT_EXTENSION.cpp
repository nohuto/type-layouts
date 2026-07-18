struct _unnamed_346// Size=0x4 (Id=346)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceHealthEventsLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailedFirstSMARTCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FailedFirstDeiceStatisticsLogCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FailedFirstNvmeCloudSSDCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SmartPredictFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};

struct _TELEMETRY_UNIT_EXTENSION// Size=0x8 (Id=347)
{
    struct _unnamed_346 Flags;// Offset=0x0 Size=0x4
    unsigned char NvmeCriticalWarning;// Offset=0x4 Size=0x1
};
