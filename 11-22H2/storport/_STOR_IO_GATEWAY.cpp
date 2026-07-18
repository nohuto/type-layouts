struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_221// Size=0x10 (Id=221)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=222)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_221 HeaderX64;// Offset=0x0 Size=0x10
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _IO_CONT_RESOURCE_LIST// Size=0x80 (Id=612)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER Header;// Offset=0x0 Size=0x10
        union _SLIST_HEADER ** Hash;// Offset=0x0 Size=0x8
        unsigned long HashSize;// Offset=0x40 Size=0x4
    };
    unsigned long MaximumProcessorCount;// Offset=0x44 Size=0x4
    unsigned long ResourceCount;// Offset=0x48 Size=0x4
    unsigned long MinCount;// Offset=0x4c Size=0x4
    unsigned long MaxCount;// Offset=0x50 Size=0x4
    unsigned long ResourceSize;// Offset=0x54 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x58 Size=0x8
    unsigned long MemAllocFailureCount;// Offset=0x60 Size=0x4
    unsigned long ConsecutiveFailureCount;// Offset=0x64 Size=0x4
    union _LARGE_INTEGER SuspendTick;// Offset=0x68 Size=0x8
    unsigned long SuspendCount;// Offset=0x70 Size=0x4
    unsigned long CompatSrbSize;// Offset=0x74 Size=0x4
    unsigned char IsVirtualMiniport;// Offset=0x78 Size=0x1
    long AddingNewResource;// Offset=0x7c Size=0x4
};

struct _STOR_NOTIFICATION_INFO// Size=0x20 (Id=613)
{
    struct _IRP * Irp;// Offset=0x0 Size=0x8
    void * Context;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * Pdo;// Offset=0x10 Size=0x8
    void  ( * NotificationFunctionCallback)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
};

struct _RAID_SHARED_WORK_ITEM_CONTEXT// Size=0x18 (Id=727)
{
    struct _IO_WORKITEM * WorkItem;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    unsigned long InUse;// Offset=0x10 Size=0x4
};

struct _STOR_IO_GATEWAY// Size=0x140 (Id=263)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY PendingList;// Offset=0x8 Size=0x10
    unsigned long PendingIoCount;// Offset=0x18 Size=0x4
    unsigned long HighWaterMark;// Offset=0x1c Size=0x4
    unsigned long LowWaterMark;// Offset=0x20 Size=0x4
    unsigned long OutstandingMax;// Offset=0x24 Size=0x4
    long BusyCount;// Offset=0x28 Size=0x4
    long PauseCount;// Offset=0x2c Size=0x4
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x30 Size=0x8
    struct _IO_CONT_RESOURCE_LIST ResourceList;// Offset=0x40 Size=0x80
    unsigned long Outstanding;// Offset=0xc0 Size=0x4
    struct _KEVENT * EmptyEvent;// Offset=0xc8 Size=0x8
    unsigned char PendingEvent;// Offset=0xd0 Size=0x1
    struct _STOR_NOTIFICATION_INFO EmptyNotificationInfo;// Offset=0xd8 Size=0x20
    struct _LIST_ENTRY HighPriorityPendingList;// Offset=0xf8 Size=0x10
    struct _LIST_ENTRY QosReqList;// Offset=0x108 Size=0x10
    long SlowPathCount;// Offset=0x118 Size=0x4
    unsigned long Index;// Offset=0x11c Size=0x4
    struct _RAID_SHARED_WORK_ITEM_CONTEXT IoResourceWorkItem;// Offset=0x120 Size=0x18
};
