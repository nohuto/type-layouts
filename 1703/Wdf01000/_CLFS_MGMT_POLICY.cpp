enum _CLFS_MGMT_POLICY_TYPE
{
    ClfsMgmtPolicyMaximumSize=0,
    ClfsMgmtPolicyMinimumSize=1,
    ClfsMgmtPolicyNewContainerSize=2,
    ClfsMgmtPolicyGrowthRate=3,
    ClfsMgmtPolicyLogTail=4,
    ClfsMgmtPolicyAutoShrink=5,
    ClfsMgmtPolicyAutoGrow=6,
    ClfsMgmtPolicyNewContainerPrefix=7,
    ClfsMgmtPolicyNewContainerSuffix=8,
    ClfsMgmtPolicyNewContainerExtension=9,
    ClfsMgmtPolicyInvalid=10
};

struct _CLFS_MGMT_POLICY// Size=0x18 (Id=2995)
{
    union // Size=0x10 (Id=0)
    {
        unsigned long Version;// Offset=0x0 Size=0x4
        unsigned long LengthInBytes;// Offset=0x4 Size=0x4
        unsigned long PolicyFlags;// Offset=0x8 Size=0x4
        enum _CLFS_MGMT_POLICY_TYPE PolicyType;// Offset=0xc Size=0x4
        union <unnamed-type-PolicyParameters>// Size=0x8 (Id=5854)
        {
            struct <unnamed-type-MaximumSize>// Size=0x4 (Id=5855)
            {
                unsigned long Containers;// Offset=0x0 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-MaximumSize> MaximumSize;// Offset=0x0 Size=0x4
            struct <unnamed-type-MinimumSize>// Size=0x4 (Id=5858)
            {
                unsigned long Containers;// Offset=0x0 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-MinimumSize> MinimumSize;// Offset=0x0 Size=0x4
            struct <unnamed-type-NewContainerSize>// Size=0x4 (Id=5861)
            {
                unsigned long SizeInBytes;// Offset=0x0 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerSize> NewContainerSize;// Offset=0x0 Size=0x4
            struct <unnamed-type-GrowthRate>// Size=0x8 (Id=5864)
            {
                unsigned long AbsoluteGrowthInContainers;// Offset=0x0 Size=0x4
                unsigned long RelativeGrowthPercentage;// Offset=0x4 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-GrowthRate> GrowthRate;// Offset=0x0 Size=0x8
            struct <unnamed-type-LogTail>// Size=0x8 (Id=5868)
            {
                unsigned long MinimumAvailablePercentage;// Offset=0x0 Size=0x4
                unsigned long MinimumAvailableContainers;// Offset=0x4 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-LogTail> LogTail;// Offset=0x0 Size=0x8
            struct <unnamed-type-AutoShrink>// Size=0x4 (Id=5872)
            {
                unsigned long Percentage;// Offset=0x0 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-AutoShrink> AutoShrink;// Offset=0x0 Size=0x4
            struct <unnamed-type-AutoGrow>// Size=0x4 (Id=5875)
            {
                unsigned long Enabled;// Offset=0x0 Size=0x4
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-AutoGrow> AutoGrow;// Offset=0x0 Size=0x4
            struct <unnamed-type-NewContainerPrefix>// Size=0x4 (Id=5878)
            {
                unsigned short PrefixLengthInBytes;// Offset=0x0 Size=0x2
                wchar_t PrefixString[1];// Offset=0x2 Size=0x2
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerPrefix> NewContainerPrefix;// Offset=0x0 Size=0x4
            struct <unnamed-type-NewContainerSuffix>// Size=0x8 (Id=5882)
            {
                unsigned long long NextContainerSuffix;// Offset=0x0 Size=0x8
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerSuffix> NewContainerSuffix;// Offset=0x0 Size=0x8
            struct <unnamed-type-NewContainerExtension>// Size=0x4 (Id=5885)
            {
                unsigned short ExtensionLengthInBytes;// Offset=0x0 Size=0x2
                wchar_t ExtensionString[1];// Offset=0x2 Size=0x2
            };
            struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerExtension> NewContainerExtension;// Offset=0x0 Size=0x4
        };
        union _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters> PolicyParameters;// Offset=0x10 Size=0x8
    };
};
