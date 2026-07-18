struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IO_TIMER// Size=0x30 (Id=1262)
{
    short Type;// Offset=0x0 Size=0x2
    short TimerFlag;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY TimerList;// Offset=0x8 Size=0x10
    void  ( * TimerRoutine)(struct _DEVICE_OBJECT * ,void * );// Offset=0x18 Size=0x8
    void * Context;// Offset=0x20 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x28 Size=0x8
};
