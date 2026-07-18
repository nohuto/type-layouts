struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IDLE_STATE_ENTRY// Size=0x20 (Id=430)
{
    struct ACPI_CST_STATE * CstState;// Offset=0x0 Size=0x8
    struct _IDLE_DOMAIN_ENTRY * IdleDomain;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY Link;// Offset=0x10 Size=0x10
};

struct _IDLE_STATE_ENTRIES// Size=0x28 (Id=379)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _IDLE_STATE_ENTRY State[1];// Offset=0x8 Size=0x20
};
