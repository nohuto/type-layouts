union _unnamed_2539// Size=0x4 (Id=2539)
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

struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION// Size=0x18 (Id=2540)
{
    unsigned char OriginalBootStatus;// Offset=0x0 Size=0x1
    unsigned char NewBootStatus;// Offset=0x1 Size=0x1
    unsigned char ConfigurationLoaded;// Offset=0x2 Size=0x1
    unsigned char Spare;// Offset=0x3 Size=0x1
    union _unnamed_2539 Flags;// Offset=0x4 Size=0x4
    long ConfigurationComparisonStatus;// Offset=0x8 Size=0x4
    long CurrentConfigurationLoadStatus;// Offset=0xc Size=0x4
    long LkgConfigurationLoadStatus;// Offset=0x10 Size=0x4
    long UsageSubscriptionLoadStatus;// Offset=0x14 Size=0x4
};
