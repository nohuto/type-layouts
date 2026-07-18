struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET// Size=0x8 (Id=3176)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS// Size=0x10 (Id=3914)
{
    unsigned int FeatureId;// Offset=0x0 Size=0x4
    unsigned short ReportingKind;// Offset=0x4 Size=0x2
    unsigned short ReportingOptions;// Offset=0x6 Size=0x2
    struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET ReportingTarget;// Offset=0x8 Size=0x8
};
