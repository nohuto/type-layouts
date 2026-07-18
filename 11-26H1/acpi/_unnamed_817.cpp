struct _unnamed_815// Size=0x8 (Id=815)
{
    struct _ACPI_POWER_WAKE_INTERRUPT * WakeInterruptEntry;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_816// Size=0x10 (Id=816)
{
    struct _LIST_ENTRY InterruptRegistrationList;// Offset=0x0 Size=0x10
};

union _unnamed_817// Size=0x10 (Id=817)
{
    struct _unnamed_815 Independent;// Offset=0x0 Size=0x8
    struct _unnamed_816 Legacy;// Offset=0x0 Size=0x10
};
