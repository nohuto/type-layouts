struct wil_details_FeatureDescriptor// Size=0x20 (Id=825)
{
    union wil_details_FeatureStateCache * featureStateCache;// Offset=0x0 Size=0x8
    struct wil_details_FeatureReportingCache * featureReportingCache;// Offset=0x8 Size=0x8
    unsigned int featureId;// Offset=0x10 Size=0x4
    unsigned char changeTime;// Offset=0x14 Size=0x1
    unsigned char isAlwaysDisabled;// Offset=0x15 Size=0x1
    unsigned char isAlwaysEnabled;// Offset=0x16 Size=0x1
    unsigned char isEnabledByDefault;// Offset=0x17 Size=0x1
    struct wil_details_FeatureDescriptor ** requiresFeatures;// Offset=0x18 Size=0x8
};
