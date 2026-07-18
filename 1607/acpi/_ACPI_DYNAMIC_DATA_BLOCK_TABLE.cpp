struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_DYNAMIC_DATA_BLOCK_TABLE// Size=0x20 (Id=479)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    void * Handle;// Offset=0x10 Size=0x8
    void * Table;// Offset=0x18 Size=0x8
};
