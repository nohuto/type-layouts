enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=81)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY// Size=0x28 (Id=632)
{
    struct _LIST_ENTRY InterruptRegistrationList;// Offset=0x0 Size=0x10
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x10 Size=0x8
    unsigned long Vector;// Offset=0x18 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x1c Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x20 Size=0x8
};

union _unnamed_617// Size=0x28 (Id=617)
{
    union // Size=0x28 (Id=0)
    {
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY Static[1];// Offset=0x0 Size=0x28
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY * Allocated;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_618// Size=0x58 (Id=618)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    unsigned long WakeStatus;// Offset=0x4 Size=0x4
    unsigned long WakeReferenceCount;// Offset=0x8 Size=0x4
    unsigned long WakeInterruptRegistrationCount;// Offset=0xc Size=0x4
    struct _WORK_QUEUE_ITEM WorkQueueItem;// Offset=0x10 Size=0x20
    union _unnamed_617 Registrations;// Offset=0x30 Size=0x28
};
