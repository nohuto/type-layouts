struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WAITING_IRP// Size=0x38 (Id=887)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    struct _IRP * Irp;// Offset=0x10 Size=0x8
    void  ( * CompletionRoutine)(void * ,struct _IRP * );// Offset=0x18 Size=0x8
    void * Context;// Offset=0x20 Size=0x8
    struct _KEVENT * Event;// Offset=0x28 Size=0x8
    unsigned long Information;// Offset=0x30 Size=0x4
    unsigned char BreakAllRH;// Offset=0x34 Size=0x1
};
