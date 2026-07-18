struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PNP_DEVICE_ACTION_REQUEST
{
    AssignResources=0,
    ClearDeviceProblem=1,
    ClearProblem=2,
    ClearEjectProblem=3,
    HaltDevice=4,
    QueryPowerRelations=5,
    Rebalance=6,
    ReenumerateBootDevices=7,
    ReenumerateDeviceOnly=8,
    ReenumerateDeviceTree=9,
    ReenumerateRootDevices=10,
    RequeryDeviceState=11,
    ResetDevice=12,
    ResourceRequirementsChanged=13,
    RestartEnumeration=14,
    SetDeviceProblem=15,
    StartDevice=16,
    StartSystemDevicesPass0=17,
    StartSystemDevicesPass1=18,
    NotifyTransportRelationsChange=19,
    NotifyEjectionRelationsChange=20,
    ConfigureDevice=21,
    ConfigureDeviceClass=22,
    ConfigureDeviceExtensions=23,
    ConfigureDeviceReset=24
};

struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PNP_DEVICE_ACTION_ENTRY// Size=0x48 (Id=1187)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x10 Size=0x8
    enum _PNP_DEVICE_ACTION_REQUEST RequestType;// Offset=0x18 Size=0x4
    unsigned char ReorderingBarrier;// Offset=0x1c Size=0x1
    unsigned long long RequestArgument;// Offset=0x20 Size=0x8
    struct _KEVENT * CompletionEvent;// Offset=0x28 Size=0x8
    long * CompletionStatus;// Offset=0x30 Size=0x8
    struct _GUID ActivityId;// Offset=0x38 Size=0x10
};
