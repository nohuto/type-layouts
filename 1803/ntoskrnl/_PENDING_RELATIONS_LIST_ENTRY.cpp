struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=84)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
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

enum _PNP_DEVICE_DELETE_TYPE
{
    QueryRemoveDevice=0,
    CancelRemoveDevice=1,
    RemoveDevice=2,
    SurpriseRemoveDevice=3,
    EjectDevice=4,
    RemoveFailedDevice=5,
    RemoveUnstartedFailedDevice=6,
    MaxDeviceDeleteType=7
};

struct _PENDING_RELATIONS_LIST_ENTRY// Size=0x70 (Id=812)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x10 Size=0x20
    struct _PNP_DEVICE_EVENT_ENTRY * DeviceEvent;// Offset=0x30 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x38 Size=0x8
    struct _RELATION_LIST * RelationsList;// Offset=0x40 Size=0x8
    struct _IRP * EjectIrp;// Offset=0x48 Size=0x8
    enum IRPLOCK Lock;// Offset=0x50 Size=0x4
    unsigned long Problem;// Offset=0x54 Size=0x4
    unsigned char ProfileChangingEject;// Offset=0x58 Size=0x1
    unsigned char DisplaySafeRemovalDialog;// Offset=0x59 Size=0x1
    enum _SYSTEM_POWER_STATE LightestSleepState;// Offset=0x5c Size=0x4
    struct DOCK_INTERFACE * DockInterface;// Offset=0x60 Size=0x8
    unsigned char DequeuePending;// Offset=0x68 Size=0x1
    enum _PNP_DEVICE_DELETE_TYPE DeleteType;// Offset=0x6c Size=0x4
};
