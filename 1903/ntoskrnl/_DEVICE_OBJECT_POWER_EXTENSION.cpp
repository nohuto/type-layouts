struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _POP_DEVICE_IDLE_TYPE
{
    DeviceIdleNormal=0,
    DeviceIdleDisk=1
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

struct _anonymous_1329// Size=0x8 (Id=1329)
{
    unsigned long IdleTime;// Offset=0x0 Size=0x4
    unsigned long NonIdleTime;// Offset=0x4 Size=0x4
};

union _anonymous_1330// Size=0x8 (Id=1330)
{
    struct _anonymous_1329 Disk;// Offset=0x0 Size=0x8
};

struct _DEVICE_OBJECT_POWER_EXTENSION// Size=0x60 (Id=1331)
{
    unsigned long IdleCount;// Offset=0x0 Size=0x4
    unsigned long BusyCount;// Offset=0x4 Size=0x4
    unsigned long BusyReference;// Offset=0x8 Size=0x4
    unsigned long TotalBusyCount;// Offset=0xc Size=0x4
    unsigned long ConservationIdleTime;// Offset=0x10 Size=0x4
    unsigned long PerformanceIdleTime;// Offset=0x14 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY IdleList;// Offset=0x20 Size=0x10
    enum _POP_DEVICE_IDLE_TYPE IdleType;// Offset=0x30 Size=0x4
    enum _DEVICE_POWER_STATE IdleState;// Offset=0x34 Size=0x4
    enum _DEVICE_POWER_STATE CurrentState;// Offset=0x38 Size=0x4
    struct _POP_COOLING_EXTENSION * CoolingExtension;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY Volume;// Offset=0x48 Size=0x10
    union _anonymous_1330 Specific;// Offset=0x58 Size=0x8
};
