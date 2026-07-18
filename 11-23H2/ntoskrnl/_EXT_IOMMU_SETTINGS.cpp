struct _unnamed_300// Size=0x8 (Id=300)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long BroadcastTlbMaintenance:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
    };
};

enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY
{
    ExtIommuAddressTranslationPolicyDisable=0,
    ExtIommuAddressTranslationPolicyEnableDefaultBypass=1,
    ExtIommuAddressTranslationPolicyEnableDefaultBlock=2,
    ExtIommuAddressTranslationPolicyEnableDefaultTranslate=3
};

enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY
{
    ExtIommuInterruptRemappingPolicyDisable=0,
    ExtIommuInterruptRemappingPolicyEnableLoose=1,
    ExtIommuInterruptRemappingPolicyEnableStrict=2
};

struct _EXT_IOMMU_SETTINGS// Size=0x18 (Id=303)
{
    struct _unnamed_300 EnabledCapabilities;// Offset=0x0 Size=0x8
    enum _EXT_IOMMU_ADDRESS_TRANSLATION_POLICY TranslationPolicy;// Offset=0x8 Size=0x4
    enum _EXT_IOMMU_INTERRUPT_REMAPPING_POLICY RemappingPolicy;// Offset=0xc Size=0x4
    unsigned long RemappingTableEntries;// Offset=0x10 Size=0x4
};
