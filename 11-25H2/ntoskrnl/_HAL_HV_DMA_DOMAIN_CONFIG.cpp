enum _HAL_HV_DMA_DOMAIN_CONFIG_ARCH
{
    HalHvDmaDomainConfigArm64=0,
    HalHvDmaDomainConfigX64=1
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

struct _HAL_HV_DMA_DOMAIN_CONFIG_ARM64// Size=0x20 (Id=450)
{
    union _LARGE_INTEGER Ttbr0;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER Ttbr1;// Offset=0x8 Size=0x8
    unsigned long Mair0;// Offset=0x10 Size=0x4
    unsigned long Mair1;// Offset=0x14 Size=0x4
    unsigned char InputSize0;// Offset=0x18 Size=0x1
    unsigned char InputSize1;// Offset=0x19 Size=0x1
    unsigned short Asid;// Offset=0x1a Size=0x2
    unsigned char CoherentTableWalks;// Offset=0x1c Size=0x1
    unsigned char TranslationEnabled;// Offset=0x1d Size=0x1
};

struct _HAL_HV_DMA_DOMAIN_CONFIG_X64// Size=0x10 (Id=350)
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;// Offset=0x0 Size=0x8
    unsigned char TranslationEnabled;// Offset=0x8 Size=0x1
    unsigned char Blocked;// Offset=0x9 Size=0x1
};

struct _HAL_HV_DMA_DOMAIN_CONFIG// Size=0x28 (Id=312)
{
    enum _HAL_HV_DMA_DOMAIN_CONFIG_ARCH Type;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _HAL_HV_DMA_DOMAIN_CONFIG_ARM64 Arm64;// Offset=0x8 Size=0x20
        struct _HAL_HV_DMA_DOMAIN_CONFIG_X64 X64;// Offset=0x8 Size=0x10
    };
};
