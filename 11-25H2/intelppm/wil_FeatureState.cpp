struct wil_FeatureState// Size=0x18 (Id=405)
{
    enum wil_FeatureEnabledState enabledState;// Offset=0x0 Size=0x4
    unsigned char variant;// Offset=0x4 Size=0x1
    enum wil_FeatureVariantPayloadKind payloadKind;// Offset=0x8 Size=0x4
    unsigned int payload;// Offset=0xc Size=0x4
    int hasNotification;// Offset=0x10 Size=0x4
    int isWexpConfiguration;// Offset=0x14 Size=0x4
};
