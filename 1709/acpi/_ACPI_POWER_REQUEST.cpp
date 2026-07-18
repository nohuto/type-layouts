struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ACPI_POWER_REQUEST_DEPENDENCY// Size=0x20 (Id=636)
{
    struct _LIST_ENTRY ProviderList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DependentList;// Offset=0x10 Size=0x10
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

struct _unnamed_629// Size=0x8 (Id=629)
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

struct _unnamed_630// Size=0x8 (Id=630)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    enum POWER_ACTION SystemPowerAction;// Offset=0x4 Size=0x4
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=83)
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

struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY// Size=0x28 (Id=646)
{
    struct _LIST_ENTRY InterruptRegistrationList;// Offset=0x0 Size=0x10
    struct _ACPI_POWER_REQUEST * PowerRequest;// Offset=0x10 Size=0x8
    unsigned long Vector;// Offset=0x18 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x1c Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x20 Size=0x8
};

union _unnamed_631// Size=0x28 (Id=631)
{
    union // Size=0x28 (Id=0)
    {
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY Static[1];// Offset=0x0 Size=0x28
        struct _ACPI_POWER_WAKE_INTERRUPT_REGISTRATION_ENTRY * Allocated;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_632// Size=0x58 (Id=632)
{
    enum _SYSTEM_POWER_STATE SystemPowerState;// Offset=0x0 Size=0x4
    unsigned long WakeStatus;// Offset=0x4 Size=0x4
    unsigned long WakeReferenceCount;// Offset=0x8 Size=0x4
    unsigned long WakeInterruptRegistrationCount;// Offset=0xc Size=0x4
    struct _WORK_QUEUE_ITEM WorkQueueItem;// Offset=0x10 Size=0x20
    union _unnamed_631 Registrations;// Offset=0x30 Size=0x28
};

struct _unnamed_633// Size=0x4 (Id=633)
{
    enum _SYSTEM_POWER_STATE EjectPowerState;// Offset=0x0 Size=0x4
};

union _unnamed_634// Size=0x58 (Id=634)
{
    union // Size=0x58 (Id=0)
    {
        struct _unnamed_629 DevicePowerRequest;// Offset=0x0 Size=0x8
        struct _unnamed_630 SystemPowerRequest;// Offset=0x0 Size=0x8
        struct _unnamed_632 WaitWakeRequest;// Offset=0x0 Size=0x58
        struct _unnamed_633 EjectPowerRequest;// Offset=0x0 Size=0x4
    };
};

struct _ObjData// Size=0x28 (Id=300)
{
    unsigned short dwfData;// Offset=0x0 Size=0x2
    unsigned short dwDataType;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        long dwRefCount;// Offset=0x8 Size=0x4
        struct _ObjData * pdataBase;// Offset=0x8 Size=0x8
    };
    union // Size=0x18 (Id=0)
    {
        unsigned long dwDataValue;// Offset=0x10 Size=0x4
        unsigned long long qwDataValue;// Offset=0x10 Size=0x8
        struct _NSObj * pnsAlias;// Offset=0x10 Size=0x8
        struct _ObjData * pdataAlias;// Offset=0x10 Size=0x8
        void * powner;// Offset=0x10 Size=0x8
    };
    unsigned long dwDataLen;// Offset=0x18 Size=0x4
    unsigned char * pbDataBuff;// Offset=0x20 Size=0x8
};

struct _ACPI_POWER_REQUEST// Size=0x108 (Id=635)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY SerialListEntry;// Offset=0x10 Size=0x10
    unsigned long Signature;// Offset=0x20 Size=0x4
    struct _DEVICE_EXTENSION * DeviceExtension;// Offset=0x28 Size=0x8
    enum ACPI_POWER_REQUEST_TYPE RequestType;// Offset=0x30 Size=0x4
    unsigned char FailedOnce;// Offset=0x34 Size=0x1
    unsigned long Flags;// Offset=0x38 Size=0x4
    struct _ACPI_POWER_REQUEST_DEPENDENCY DependencyRelations;// Offset=0x40 Size=0x20
    struct _LIST_ENTRY * ActiveList;// Offset=0x60 Size=0x8
    union _unnamed_634 u;// Offset=0x68 Size=0x58
    void  ( * CallBack)(struct _DEVICE_EXTENSION * ,void * ,long );// Offset=0xc0 Size=0x8
    void * Context;// Offset=0xc8 Size=0x8
    unsigned long WorkDone;// Offset=0xd0 Size=0x4
    unsigned long NextWorkDone;// Offset=0xd4 Size=0x4
    struct _ObjData ResultData;// Offset=0xd8 Size=0x28
    long Status;// Offset=0x100 Size=0x4
};
