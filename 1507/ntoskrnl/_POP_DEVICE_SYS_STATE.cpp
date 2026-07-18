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

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PO_NOTIFY_ORDER_LEVEL// Size=0x48 (Id=1433)
{
    unsigned long DeviceCount;// Offset=0x0 Size=0x4
    unsigned long ActiveCount;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitSleep;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY ReadySleep;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY ReadyS0;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY WaitS0;// Offset=0x38 Size=0x10
};

struct _PO_DEVICE_NOTIFY_ORDER// Size=0x178 (Id=1428)
{
    unsigned char Locked;// Offset=0x0 Size=0x1
    struct _DEVICE_OBJECT ** WarmEjectPdoPointer;// Offset=0x8 Size=0x8
    struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];// Offset=0x10 Size=0x168
};

struct _POP_DEVICE_SYS_STATE// Size=0x1d0 (Id=1204)
{
    unsigned char IrpMinor;// Offset=0x0 Size=0x1
    enum _SYSTEM_POWER_STATE SystemState;// Offset=0x4 Size=0x4
    unsigned long long SpinLock;// Offset=0x8 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x10 Size=0x8
    struct _KEVENT * AbortEvent;// Offset=0x18 Size=0x8
    struct _KSEMAPHORE * ReadySemaphore;// Offset=0x20 Size=0x8
    struct _KSEMAPHORE * FinishedSemaphore;// Offset=0x28 Size=0x8
    struct _PO_DEVICE_NOTIFY_ORDER Order;// Offset=0x30 Size=0x178
    struct _LIST_ENTRY Pending;// Offset=0x1a8 Size=0x10
    long Status;// Offset=0x1b8 Size=0x4
    struct _DEVICE_OBJECT * FailedDevice;// Offset=0x1c0 Size=0x8
    unsigned char Waking;// Offset=0x1c8 Size=0x1
    unsigned char Cancelled;// Offset=0x1c9 Size=0x1
    unsigned char IgnoreErrors;// Offset=0x1ca Size=0x1
    unsigned char IgnoreNotImplemented;// Offset=0x1cb Size=0x1
    unsigned char TimeRefreshLockAcquired;// Offset=0x1cc Size=0x1
};
