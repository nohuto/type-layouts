struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _HUB_POWER_REQUEST_TYPE
{
    Pdo_SetPower=1,
    Pdo_WaitWake=2,
    Fdo_SetPower=11,
    Fdo_WaitWake=12
};

enum _USB_VBUS_STATE
{
    Vbus_Off=0,
    Vbus_On=1,
    Vbus_Interrupted=2
};

struct _GUID// Size=0x10 (Id=61)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _HUB_POWER_CONTEXT// Size=0x90 (Id=206)
{
    unsigned long Sig;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY PwrCtxLink;// Offset=0x8 Size=0x10
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x18 Size=0x4
    enum _DEVICE_POWER_STATE DeviceState;// Offset=0x1c Size=0x4
    enum _HUB_POWER_REQUEST_TYPE PowerReqType;// Offset=0x20 Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x28 Size=0x8
    struct _DEVICE_OBJECT * DevObject;// Offset=0x30 Size=0x8
    struct _IRP * SystemIrp;// Offset=0x38 Size=0x8
    struct _IRP * DeviceIrp;// Offset=0x40 Size=0x8
    struct _STATE_CONTEXT * Sc;// Offset=0x48 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x50 Size=0x8
    enum _USB_VBUS_STATE VbusState;// Offset=0x58 Size=0x4
    struct _LIST_ENTRY PendingD0ListEntry;// Offset=0x60 Size=0x10
    struct _SSH_BUSY_HANDLE * Bh;// Offset=0x70 Size=0x8
    struct _GUID ActivityId;// Offset=0x78 Size=0x10
    unsigned char ContextStored;// Offset=0x88 Size=0x1
};
