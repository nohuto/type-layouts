enum _DEVICE_RELATION_LEVEL
{
    RELATION_LEVEL_REMOVE_EJECT=0,
    RELATION_LEVEL_DEPENDENT=1,
    RELATION_LEVEL_DIRECT_DESCENDANT=2
};

struct _DEVICE_OBJECT_LIST_ENTRY// Size=0x18 (Id=956)
{
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x0 Size=0x8
    enum _DEVICE_RELATION_LEVEL RelationLevel;// Offset=0x8 Size=0x4
    unsigned long Ordinal;// Offset=0xc Size=0x4
    unsigned long Flags;// Offset=0x10 Size=0x4
};
