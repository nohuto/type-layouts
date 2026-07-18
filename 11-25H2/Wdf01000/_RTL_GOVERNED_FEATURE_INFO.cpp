struct _RTL_GOVERNED_FEATURE_INFO// Size=0x10 (Id=2122)
{
    unsigned int FeatureId;// Offset=0x0 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long FirstEdgeIndex:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long IsRoot:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Unused:15;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0xf
        unsigned long BootHasEffectiveOverride:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long BootEffectiveEnabledState:2;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long BootEffectivePriority:4;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long BootGoverningFeatureIndex:16;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x10
        unsigned long BootIsWexpConfiguration:1;// Offset=0x8 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BootUnused:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long BootState;// Offset=0x8 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long RuntimeHasEffectiveOverride:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long RuntimeEffectiveEnabledState:2;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x2
            unsigned long RuntimeEffectivePriority:4;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x4
            unsigned long RuntimeGoverningFeatureIndex:16;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x10
            unsigned long RuntimeIsWexpConfiguration:1;// Offset=0xc Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long RuntimeUnused:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        unsigned long RuntimeState;// Offset=0xc Size=0x4
    };
};
