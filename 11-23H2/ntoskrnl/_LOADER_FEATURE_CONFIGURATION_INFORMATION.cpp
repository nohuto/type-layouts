union _unnamed_2230// Size=0x4 (Id=2230)
{
    unsigned long AllFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long LkgSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FinalBootBeforeRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ConfigurationComparisonAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long CurrentConfigurationLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LkgConfigurationLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long UsageSubscriptionLoadAttempted:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
};

struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION// Size=0x18 (Id=2231)
{
    unsigned char OriginalBootStatus;// Offset=0x0 Size=0x1
    unsigned char NewBootStatus;// Offset=0x1 Size=0x1
    unsigned char ConfigurationLoaded;// Offset=0x2 Size=0x1
    unsigned char Spare;// Offset=0x3 Size=0x1
    union _unnamed_2230 Flags;// Offset=0x4 Size=0x4
    long ConfigurationComparisonStatus;// Offset=0x8 Size=0x4
    long CurrentConfigurationLoadStatus;// Offset=0xc Size=0x4
    long LkgConfigurationLoadStatus;// Offset=0x10 Size=0x4
    long UsageSubscriptionLoadStatus;// Offset=0x14 Size=0x4
};

struct _LOADER_FEATURE_CONFIGURATION_INFORMATION// Size=0x48 (Id=2112)
{
    void * FeatureConfigurationBuffer;// Offset=0x0 Size=0x8
    unsigned long long FeatureConfigurationBufferSize;// Offset=0x8 Size=0x8
    void * UsageSubscriptionBuffer;// Offset=0x10 Size=0x8
    unsigned long long UsageSubscriptionBufferSize;// Offset=0x18 Size=0x8
    void * DelayedUsageReportBuffer;// Offset=0x20 Size=0x8
    unsigned long long DelayedUsageReportBufferSize;// Offset=0x28 Size=0x8
    struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION DiagnosticInformation;// Offset=0x30 Size=0x18
};
