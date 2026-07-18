struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x10 (Id=331)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x8
    unsigned long SortKey;// Offset=0x8 Size=0x4
    unsigned char Inserted;// Offset=0xc Size=0x1
};
