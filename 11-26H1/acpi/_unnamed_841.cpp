struct _unnamed_839// Size=0x10 (Id=839)
{
    struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY * InterruptRegistration;// Offset=0x0 Size=0x8
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_840// Size=0x10 (Id=840)
{
    struct _LIST_ENTRY InterruptRegistrationListHead;// Offset=0x0 Size=0x10
};

union _unnamed_841// Size=0x10 (Id=841)
{
    struct _unnamed_839 Independent;// Offset=0x0 Size=0x10
    struct _unnamed_840 Legacy;// Offset=0x0 Size=0x10
};
