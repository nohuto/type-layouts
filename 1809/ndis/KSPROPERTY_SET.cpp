struct KSPROPERTY_SET// Size=0x28 (Id=1355)
{
    struct _GUID * Set;// Offset=0x0 Size=0x8
    unsigned long PropertiesCount;// Offset=0x8 Size=0x4
    struct KSPROPERTY_ITEM * PropertyItem;// Offset=0x10 Size=0x8
    unsigned long FastIoCount;// Offset=0x18 Size=0x4
    struct KSFASTPROPERTY_ITEM * FastIoTable;// Offset=0x20 Size=0x8
};
