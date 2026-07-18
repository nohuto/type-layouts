struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _anonymous_403// Size=0x20 (Id=403)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
    unsigned long Count;// Offset=0x18 Size=0x4
};

struct _RAID_PORT_DATA// Size=0x28 (Id=404)
{
    unsigned long ReferenceCount;// Offset=0x0 Size=0x4
    struct _anonymous_403 DriverList;// Offset=0x8 Size=0x20
};
