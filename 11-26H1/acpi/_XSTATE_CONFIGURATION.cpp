struct _XSTATE_FEATURE// Size=0x8 (Id=689)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _XSTATE_CONFIGURATION// Size=0x358 (Id=394)
{
    unsigned long long EnabledFeatures;// Offset=0x0 Size=0x8
    unsigned long long EnabledVolatileFeatures;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long ControlFlags;// Offset=0x14 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long OptimizedSave:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CompactionEnabled:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ExtendedFeatureDisable:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
    };
    struct _XSTATE_FEATURE Features[64];// Offset=0x18 Size=0x200
    unsigned long long EnabledSupervisorFeatures;// Offset=0x218 Size=0x8
    unsigned long long AlignedFeatures;// Offset=0x220 Size=0x8
    unsigned long AllFeatureSize;// Offset=0x228 Size=0x4
    unsigned long AllFeatures[64];// Offset=0x22c Size=0x100
    unsigned long long EnabledUserVisibleSupervisorFeatures;// Offset=0x330 Size=0x8
    unsigned long long ExtendedFeatureDisableFeatures;// Offset=0x338 Size=0x8
    unsigned long AllNonLargeFeatureSize;// Offset=0x340 Size=0x4
    union // Size=0xc (Id=0)
    {
        unsigned long Amd64Spare1[3];// Offset=0x344 Size=0xc
        unsigned short MaxSveVectorLength;// Offset=0x344 Size=0x2
    };
    unsigned short MaxSmeVectorLength;// Offset=0x346 Size=0x2
    unsigned short SmeZTRegisterCount;// Offset=0x348 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Arm64Flags;// Offset=0x34a Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short SmeFa64:1;// Offset=0x34a Size=0x2 BitOffset=0x0 BitSize=0x1
        };
    };
    unsigned char SupportedSmeVectorLengths;// Offset=0x34c Size=0x1
    unsigned char Arm64Spare[3];// Offset=0x34d Size=0x3
    unsigned long long Spare;// Offset=0x350 Size=0x8
};
