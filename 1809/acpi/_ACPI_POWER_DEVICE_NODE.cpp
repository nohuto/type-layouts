struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_704// Size=0x8 (Id=704)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Present:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Initialized:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long StatusUnknown:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Blocked:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long On:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long OverrideOn:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long OverrideOff:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long Reserved1:2;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x2
        unsigned long long AlwaysOn:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long AlwaysOff:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long IntendingOn:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long HasDependencies:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long ResetPending:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long PepChecked:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long PepSupported:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long Reserved2:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
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

struct _ACPI_POWER_REQUEST_DEPENDENCY// Size=0x20 (Id=656)
{
    struct _LIST_ENTRY ProviderList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DependentList;// Offset=0x10 Size=0x10
};

struct _ACPI_POWER_DEVICE_NODE// Size=0x90 (Id=705)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    union // Size=0x8 (Id=0)
    {
        unsigned long long Flags;// Offset=0x10 Size=0x8
        struct _unnamed_704 UFlags;// Offset=0x10 Size=0x8
    };
    unsigned long UseCounts;// Offset=0x18 Size=0x4
    struct _NSObjRef * PowerObject;// Offset=0x20 Size=0x8
    unsigned char ResourceOrder;// Offset=0x28 Size=0x1
    enum _SYSTEM_POWER_STATE SystemLevel;// Offset=0x2c Size=0x4
    struct _LIST_ENTRY DevicePowerListHead;// Offset=0x30 Size=0x10
    unsigned long WorkDone;// Offset=0x40 Size=0x4
    unsigned long NextWorkDone;// Offset=0x44 Size=0x4
    struct _NSObjRef * PowerOnObject;// Offset=0x48 Size=0x8
    struct _NSObjRef * PowerOffObject;// Offset=0x50 Size=0x8
    struct _NSObjRef * PowerResetObject;// Offset=0x58 Size=0x8
    struct _ObjData * Dependencies;// Offset=0x60 Size=0x8
    struct _ACPI_POWER_REQUEST_DEPENDENCY DependencyRelations;// Offset=0x68 Size=0x20
    void * NativeMethodHandle;// Offset=0x88 Size=0x8
};
