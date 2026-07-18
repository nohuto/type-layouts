struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _HALP_EMERGENCY_LA_QUEUE_TYPE
{
    HalpDmaLegacyLaQueueEntry=0,
    HalpDmaThinLaQueueEntry=1,
    HalpDmaLaQueueEntryMax=2
};

struct _HALP_EMERGENCY_LA_QUEUE_ENTRY// Size=0x18 (Id=375)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    enum _HALP_EMERGENCY_LA_QUEUE_TYPE EntryType;// Offset=0x10 Size=0x4
};
