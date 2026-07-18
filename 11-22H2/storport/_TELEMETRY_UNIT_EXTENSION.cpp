struct _unnamed_555// Size=0x4 (Id=555)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceHealthEventsLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FailedFirstSMARTCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FailedFirstDeviceStatisticsLogCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FailedFirstNvmeCloudSSDCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailedFirstGetSupportedLogPagesCommand:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SmartPredictFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _TELEMETRY_UNIT_EXTENSION// Size=0x8 (Id=556)
{
    struct _unnamed_555 Flags;// Offset=0x0 Size=0x4
    unsigned char NvmeCriticalWarning;// Offset=0x4 Size=0x1
    unsigned char DeviceHealthPollCount;// Offset=0x5 Size=0x1
};
