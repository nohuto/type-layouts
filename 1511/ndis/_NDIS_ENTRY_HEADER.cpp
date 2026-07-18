struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_ENTRY_HEADER// Size=0x20 (Id=1495)
{
    struct _NDIS_POOL_HEADER * PoolHeader;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Linkage;// Offset=0x8 Size=0x10
    unsigned long LookasideProcIndex;// Offset=0x18 Size=0x4
};
