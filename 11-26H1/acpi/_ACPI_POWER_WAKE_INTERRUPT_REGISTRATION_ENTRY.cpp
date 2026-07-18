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

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY// Size=0x28 (Id=818)
{
    union _unnamed_817 u;// Offset=0x0 Size=0x10
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x10 Size=0x8
    unsigned long Vector;// Offset=0x18 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x1c Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x20 Size=0x8
};
