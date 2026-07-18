enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

struct _unnamed_785// Size=0x8 (Id=785)
{
    enum _DEVICE_POWER_STATE DevicePowerState;// Offset=0x0 Size=0x4
    enum _DEVICE_POWER_STATE PreviousDevicePowerState;// Offset=0x4 Size=0x4
};

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

struct _unnamed_786// Size=0xc (Id=786)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    enum _SYSTEM_POWER_STATE PreviousSystemState;// Offset=0x4 Size=0x4
    enum POWER_ACTION SystemPowerAction;// Offset=0x8 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=115)
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

struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY// Size=0x28 (Id=802)
{
    struct _LIST_ENTRY InterruptRegistrationList;// Offset=0x0 Size=0x10
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x10 Size=0x8
    unsigned long Vector;// Offset=0x18 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x1c Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x20 Size=0x8
};

union _unnamed_787// Size=0x28 (Id=787)
{
    union // Size=0x28 (Id=0)
    {
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY Static[1];// Offset=0x0 Size=0x28
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY * Allocated;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_788// Size=0x58 (Id=788)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    unsigned long WakeStatus;// Offset=0x4 Size=0x4
    unsigned long WakeReferenceCount;// Offset=0x8 Size=0x4
    unsigned long WakeInterruptRegistrationCount;// Offset=0xc Size=0x4
    struct _WORK_QUEUE_ITEM WorkQueueItem;// Offset=0x10 Size=0x20
    union _unnamed_787 Registrations;// Offset=0x30 Size=0x28
};

struct _unnamed_789// Size=0x4 (Id=789)
{
    enum _SYSTEM_POWER_STATE EjectPowerState;// Offset=0x0 Size=0x4
};

union _unnamed_790// Size=0x58 (Id=790)
{
    union // Size=0x58 (Id=0)
    {
        struct _unnamed_785 DevicePowerRequest;// Offset=0x0 Size=0x8
        struct _unnamed_786 SystemPowerRequest;// Offset=0x0 Size=0xc
        struct _unnamed_788 WaitWakeRequest;// Offset=0x0 Size=0x58
        struct _unnamed_789 EjectPowerRequest;// Offset=0x0 Size=0x4
    };
};
