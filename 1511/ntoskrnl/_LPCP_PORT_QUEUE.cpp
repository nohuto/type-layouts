struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _LPCP_PORT_QUEUE// Size=0x20 (Id=1297)
{
    struct _LPCP_NONPAGED_PORT_QUEUE * NonPagedPortQueue;// Offset=0x0 Size=0x8
    struct _KSEMAPHORE * Semaphore;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ReceiveHead;// Offset=0x10 Size=0x10
};
