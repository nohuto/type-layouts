struct _KSFILTER_DESCRIPTOR// Size=0x68 (Id=350)
{
    struct _KSFILTER_DISPATCH * Dispatch;// Offset=0x0 Size=0x8
    struct KSAUTOMATION_TABLE_ * AutomationTable;// Offset=0x8 Size=0x8
    unsigned long Version;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
    struct _GUID * ReferenceGuid;// Offset=0x18 Size=0x8
    unsigned long PinDescriptorsCount;// Offset=0x20 Size=0x4
    unsigned long PinDescriptorSize;// Offset=0x24 Size=0x4
    struct _KSPIN_DESCRIPTOR_EX * PinDescriptors;// Offset=0x28 Size=0x8
    unsigned long CategoriesCount;// Offset=0x30 Size=0x4
    struct _GUID * Categories;// Offset=0x38 Size=0x8
    unsigned long NodeDescriptorsCount;// Offset=0x40 Size=0x4
    unsigned long NodeDescriptorSize;// Offset=0x44 Size=0x4
    struct _KSNODE_DESCRIPTOR * NodeDescriptors;// Offset=0x48 Size=0x8
    unsigned long ConnectionsCount;// Offset=0x50 Size=0x4
    struct KSTOPOLOGY_CONNECTION * Connections;// Offset=0x58 Size=0x8
    struct KSCOMPONENTID * ComponentId;// Offset=0x60 Size=0x8
};
