struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_POWER_REQUEST_DEPENDENCY// Size=0x20 (Id=708)
{
    struct _LIST_ENTRY ProviderList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DependentList;// Offset=0x10 Size=0x10
};
