struct KSAUTOMATION_TABLE_// Size=0x30 (Id=700)
{
    unsigned long PropertySetsCount;// Offset=0x0 Size=0x4
    unsigned long PropertyItemSize;// Offset=0x4 Size=0x4
    struct KSPROPERTY_SET * PropertySets;// Offset=0x8 Size=0x8
    unsigned long MethodSetsCount;// Offset=0x10 Size=0x4
    unsigned long MethodItemSize;// Offset=0x14 Size=0x4
    struct KSMETHOD_SET * MethodSets;// Offset=0x18 Size=0x8
    unsigned long EventSetsCount;// Offset=0x20 Size=0x4
    unsigned long EventItemSize;// Offset=0x24 Size=0x4
    struct KSEVENT_SET * EventSets;// Offset=0x28 Size=0x8
};
