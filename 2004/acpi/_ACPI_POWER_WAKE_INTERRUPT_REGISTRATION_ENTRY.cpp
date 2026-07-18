struct _LIST_ENTRY// Size=0x10 (Id=24)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY// Size=0x28 (Id=713)
{
    struct _LIST_ENTRY InterruptRegistrationList;// Offset=0x0 Size=0x10
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x10 Size=0x8
    unsigned long Vector;// Offset=0x18 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x1c Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x20 Size=0x8
};
