enum _PNP_DEVICE_DELETE_TYPE
{
    QueryRemoveDevice=0,
    CancelRemoveDevice=1,
    RemoveDevice=2,
    SurpriseRemoveDevice=3,
    EjectDevice=4,
    RemoveFailedDevice=5,
    RemoveUnstartedFailedDevice=6,
    MaxDeviceDeleteType=7
};

enum _DEVICE_RELATION_LEVEL
{
    RELATION_LEVEL_REMOVE_EJECT=0,
    RELATION_LEVEL_DEPENDENT=1,
    RELATION_LEVEL_DIRECT_DESCENDANT=2
};

struct _DEVICE_OBJECT_LIST_ENTRY// Size=0x18 (Id=1179)
{
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x0 Size=0x8
    enum _DEVICE_RELATION_LEVEL RelationLevel;// Offset=0x8 Size=0x4
    unsigned long Ordinal;// Offset=0xc Size=0x4
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _DEVICE_OBJECT_LIST// Size=0x28 (Id=1774)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long MaxCount;// Offset=0x4 Size=0x4
    unsigned long TagCount;// Offset=0x8 Size=0x4
    enum _PNP_DEVICE_DELETE_TYPE OperationCode;// Offset=0xc Size=0x4
    struct _DEVICE_OBJECT_LIST_ENTRY Devices[1];// Offset=0x10 Size=0x18
};
