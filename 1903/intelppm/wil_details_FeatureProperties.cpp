struct wil_details_FeatureProperties// Size=0x4 (Id=620)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int enabledState:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned int isVariant:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int queuedForReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int hasNotificationState:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned int usageCount:9;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x9
        unsigned int usageCountRepresentsPotential:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned int reportedDeviceUsage:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned int reportedDevicePotential:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned int reportedDeviceOpportunity:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned int reportedDevicePotentialOpportunity:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned int recordedDeviceUsage:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned int recordedDevicePotential:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned int recordedDeviceOpportunity:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned int recordedDevicePotentialOpportunity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned int opportunityCount:7;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x7
        unsigned int opportunityCountRepresentsPotential:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
