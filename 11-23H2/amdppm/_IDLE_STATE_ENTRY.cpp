struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IDLE_STATE_ENTRY// Size=0x20 (Id=525)
{
    struct ACPI_CST_STATE * CstState;// Offset=0x0 Size=0x8
    struct _IDLE_DOMAIN_ENTRY * IdleDomain;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY Link;// Offset=0x10 Size=0x10
};
