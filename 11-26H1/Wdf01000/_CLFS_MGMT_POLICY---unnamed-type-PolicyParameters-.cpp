union _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>// Size=0x8 (Id=3555)
{
    union // Size=0x8 (Id=0)
    {
        struct <unnamed-type-MaximumSize>// Size=0x4 (Id=5689)
        {
            unsigned long Containers;// Offset=0x0 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-MaximumSize> MaximumSize;// Offset=0x0 Size=0x4
        struct <unnamed-type-MinimumSize>// Size=0x4 (Id=5692)
        {
            unsigned long Containers;// Offset=0x0 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-MinimumSize> MinimumSize;// Offset=0x0 Size=0x4
        struct <unnamed-type-NewContainerSize>// Size=0x4 (Id=5695)
        {
            unsigned long SizeInBytes;// Offset=0x0 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerSize> NewContainerSize;// Offset=0x0 Size=0x4
        struct <unnamed-type-GrowthRate>// Size=0x8 (Id=5698)
        {
            unsigned long AbsoluteGrowthInContainers;// Offset=0x0 Size=0x4
            unsigned long RelativeGrowthPercentage;// Offset=0x4 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-GrowthRate> GrowthRate;// Offset=0x0 Size=0x8
        struct <unnamed-type-LogTail>// Size=0x8 (Id=5702)
        {
            unsigned long MinimumAvailablePercentage;// Offset=0x0 Size=0x4
            unsigned long MinimumAvailableContainers;// Offset=0x4 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-LogTail> LogTail;// Offset=0x0 Size=0x8
        struct <unnamed-type-AutoShrink>// Size=0x4 (Id=5706)
        {
            unsigned long Percentage;// Offset=0x0 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-AutoShrink> AutoShrink;// Offset=0x0 Size=0x4
        struct <unnamed-type-AutoGrow>// Size=0x4 (Id=5709)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-AutoGrow> AutoGrow;// Offset=0x0 Size=0x4
        struct <unnamed-type-NewContainerPrefix>// Size=0x4 (Id=5712)
        {
            unsigned short PrefixLengthInBytes;// Offset=0x0 Size=0x2
            wchar_t PrefixString[1];// Offset=0x2 Size=0x2
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerPrefix> NewContainerPrefix;// Offset=0x0 Size=0x4
        struct <unnamed-type-NewContainerSuffix>// Size=0x8 (Id=5716)
        {
            unsigned long long NextContainerSuffix;// Offset=0x0 Size=0x8
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerSuffix> NewContainerSuffix;// Offset=0x0 Size=0x8
        struct <unnamed-type-NewContainerExtension>// Size=0x4 (Id=5719)
        {
            unsigned short ExtensionLengthInBytes;// Offset=0x0 Size=0x2
            wchar_t ExtensionString[1];// Offset=0x2 Size=0x2
        };
        struct _CLFS_MGMT_POLICY::<unnamed-type-PolicyParameters>::<unnamed-type-NewContainerExtension> NewContainerExtension;// Offset=0x0 Size=0x4
    };
};
