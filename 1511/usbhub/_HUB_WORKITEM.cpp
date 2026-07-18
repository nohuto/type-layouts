struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HUB_WORKITEM// Size=0x48 (Id=218)
{
    unsigned long WiSig;// Offset=0x0 Size=0x4
    unsigned long Sig;// Offset=0x4 Size=0x4
    unsigned long State;// Offset=0x8 Size=0x4
    unsigned long PortNumber;// Offset=0xc Size=0x4
    struct _DEVICE_OBJECT * HubFdo;// Offset=0x10 Size=0x8
    void  ( * WorkerRoutine)(struct _DEVICE_OBJECT * ,unsigned long ,void * );// Offset=0x18 Size=0x8
    void * Context;// Offset=0x20 Size=0x8
    struct USB_WORKITEM_HANDLE__ * IoWi;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY WiLink;// Offset=0x30 Size=0x10
    struct _KTHREAD * WiThread;// Offset=0x40 Size=0x8
};
