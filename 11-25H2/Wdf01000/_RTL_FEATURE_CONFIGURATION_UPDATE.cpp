enum _RTL_FEATURE_CONFIGURATION_PRIORITY
{
    FeatureConfigurationPriorityImageDefault=0,
    FeatureConfigurationPriorityEKB=1,
    FeatureConfigurationPrioritySafeguard=2,
    FeatureConfigurationPriorityPersistent=2,
    FeatureConfigurationPriorityImageDefaultEditionOverride=3,
    FeatureConfigurationPriorityService=4,
    FeatureConfigurationPriorityReserved5=5,
    FeatureConfigurationPriorityDynamic=6,
    FeatureConfigurationPriorityReserved7=7,
    FeatureConfigurationPriorityUser=8,
    FeatureConfigurationPrioritySecurity=9,
    FeatureConfigurationPriorityUserPolicy=10,
    FeatureConfigurationPriorityReserved11=11,
    FeatureConfigurationPriorityTest=12,
    FeatureConfigurationPriorityReserved13=13,
    FeatureConfigurationPriorityReserved14=14,
    FeatureConfigurationPriorityImageOverride=15,
    FeatureConfigurationPriorityMax=15
};

enum _RTL_FEATURE_ENABLED_STATE
{
    FeatureEnabledStateDefault=0,
    FeatureEnabledStateDisabled=1,
    FeatureEnabledStateEnabled=2
};

enum _RTL_FEATURE_ENABLED_STATE_OPTIONS
{
    FeatureEnabledStateOptionsNone=0,
    FeatureEnabledStateOptionsWexpConfig=1
};

enum _RTL_FEATURE_VARIANT_PAYLOAD_KIND
{
    FeatureVariantPayloadKindNone=0,
    FeatureVariantPayloadKindResident=1,
    FeatureVariantPayloadKindExternal=2
};

enum _RTL_FEATURE_CONFIGURATION_OPERATION
{
    FeatureConfigurationOperationNone=0,
    FeatureConfigurationOperationFeatureState=1,
    FeatureConfigurationOperationVariantState=2,
    FeatureConfigurationOperationResetState=4
};

struct _RTL_FEATURE_CONFIGURATION_UPDATE// Size=0x20 (Id=3241)
{
    unsigned int FeatureId;// Offset=0x0 Size=0x4
    enum _RTL_FEATURE_CONFIGURATION_PRIORITY Priority;// Offset=0x4 Size=0x4
    enum _RTL_FEATURE_ENABLED_STATE EnabledState;// Offset=0x8 Size=0x4
    enum _RTL_FEATURE_ENABLED_STATE_OPTIONS EnabledStateOptions;// Offset=0xc Size=0x4
    union // Size=0x14 (Id=0)
    {
        unsigned char Variant;// Offset=0x10 Size=0x1
        unsigned char Reserved[3];// Offset=0x11 Size=0x3
        struct // Size=0x4 (Id=0)
        {
            unsigned int Padding:8;// Offset=0x10 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned int ChangeTimeUpgrade:1;// Offset=0x10 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned int HasGroupBypass:1;// Offset=0x10 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned int ReservedFlags:22;// Offset=0x10 Size=0x4 BitOffset=0xa BitSize=0x16
        };
    };
    enum _RTL_FEATURE_VARIANT_PAYLOAD_KIND VariantPayloadKind;// Offset=0x14 Size=0x4
    unsigned int VariantPayload;// Offset=0x18 Size=0x4
    enum _RTL_FEATURE_CONFIGURATION_OPERATION Operation;// Offset=0x1c Size=0x4
};
