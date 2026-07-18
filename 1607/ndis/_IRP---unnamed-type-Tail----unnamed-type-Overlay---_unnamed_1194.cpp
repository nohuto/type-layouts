struct _LIST_ENTRY// Size=0x10 (Id=26)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=831)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
};

union _IRP::<unnamed-type-Tail>::<unnamed-type-Overlay>::_unnamed_1194// Size=0x20 (Id=1194)
{
    struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;// Offset=0x0 Size=0x18
    void * DriverContext[4];// Offset=0x0 Size=0x20
};
