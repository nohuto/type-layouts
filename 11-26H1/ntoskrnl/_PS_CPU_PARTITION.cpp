struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PS_CPU_PARTITION// Size=0x28 (Id=1987)
{
    struct _KCPU_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _PS_CPU_PARTITION * Parent;// Offset=0x8 Size=0x8
    unsigned long long Tag;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY PartitionListEntry;// Offset=0x18 Size=0x10
};
