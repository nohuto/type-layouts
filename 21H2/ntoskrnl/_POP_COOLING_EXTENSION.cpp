struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _POP_RW_LOCK// Size=0x10 (Id=701)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
};

struct _THERMAL_COOLING_INTERFACE// Size=0x38 (Id=1969)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    void  ( * ActiveCooling)(void * ,unsigned char );// Offset=0x28 Size=0x8
    void  ( * PassiveCooling)(void * ,unsigned long );// Offset=0x30 Size=0x8
};

struct _POP_COOLING_EXTENSION// Size=0x90 (Id=1782)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY RequestListHead;// Offset=0x10 Size=0x10
    struct _POP_RW_LOCK Lock;// Offset=0x20 Size=0x10
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x30 Size=0x8
    void * NotificationEntry;// Offset=0x38 Size=0x8
    unsigned char Enabled;// Offset=0x40 Size=0x1
    unsigned char ActiveEngaged;// Offset=0x41 Size=0x1
    unsigned char ThrottleLimit;// Offset=0x42 Size=0x1
    unsigned char UpdatingToCurrent;// Offset=0x43 Size=0x1
    struct _KEVENT * RemovalFlushEvent;// Offset=0x48 Size=0x8
    struct _KEVENT * PnpFlushEvent;// Offset=0x50 Size=0x8
    struct _THERMAL_COOLING_INTERFACE Interface;// Offset=0x58 Size=0x38
};
