struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _IO_TIMER// Size=0x18 (Id=382)
{
    short Type;// Offset=0x0 Size=0x2
    short TimerFlag;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY TimerList;// Offset=0x4 Size=0x8
    void  ( * TimerRoutine)(struct _DEVICE_OBJECT * ,void * );// Offset=0xc Size=0x4
    void * Context;// Offset=0x10 Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x14 Size=0x4
};
