struct wil_details_FeatureDescriptor// Size=0x38 (Id=229)
{
    union wil_details_FeatureStateCache * featureStateCache;// Offset=0x0 Size=0x8
    struct wil_details_FeatureReportingCache * featureReportingCache;// Offset=0x8 Size=0x8
    struct FEATURE_LOGGED_TRAITS * featureLoggedTraits;// Offset=0x10 Size=0x8
    unsigned int featureId;// Offset=0x18 Size=0x4
    unsigned char changeTime;// Offset=0x1c Size=0x1
    unsigned char isAlwaysDisabled;// Offset=0x1d Size=0x1
    unsigned char isAlwaysEnabled;// Offset=0x1e Size=0x1
    unsigned char isEnabledByDefault;// Offset=0x1f Size=0x1
    struct wil_details_FeatureDescriptor ** requiresFeatures;// Offset=0x20 Size=0x8
    unsigned char variant;// Offset=0x28 Size=0x1
    enum wil_FeatureVariantPayloadKind payloadKind;// Offset=0x2c Size=0x4
    unsigned int payload;// Offset=0x30 Size=0x4
};
