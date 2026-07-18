enum _DOMAIN_CONFIGURATION_ARCH
{
    DomainConfigurationArm64=0,
    DomainConfigurationX64=1,
    DomainConfigurationInvalid=2
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DOMAIN_CONFIGURATION_ARM64// Size=0x20 (Id=2262)
{
    union _LARGE_INTEGER Ttbr0;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Ttbr1;// Offset=0x8 Size=0x8
    unsigned long Mair0;// Offset=0x10 Size=0x4
    unsigned long Mair1;// Offset=0x14 Size=0x4
    unsigned char InputSize0;// Offset=0x18 Size=0x1
    unsigned char InputSize1;// Offset=0x19 Size=0x1
    unsigned char CoherentTableWalks;// Offset=0x1a Size=0x1
    unsigned char TranslationEnabled;// Offset=0x1b Size=0x1
};

struct _DOMAIN_CONFIGURATION_X64// Size=0x10 (Id=2209)
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;// Offset=0x0 Size=0x8
    unsigned char TranslationEnabled;// Offset=0x8 Size=0x1
};

struct _DOMAIN_CONFIGURATION// Size=0x28 (Id=2097)
{
    enum _DOMAIN_CONFIGURATION_ARCH Type;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _DOMAIN_CONFIGURATION_ARM64 Arm64;// Offset=0x8 Size=0x20
        struct _DOMAIN_CONFIGURATION_X64 X64;// Offset=0x8 Size=0x10
    };
};
