struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PO_NOTIFY_ORDER_LEVEL// Size=0x48 (Id=2019)
{
    unsigned long DeviceCount;// Offset=0x0 Size=0x4
    unsigned long ActiveCount;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitSleep;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY ReadySleep;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY ReadyS0;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY WaitS0;// Offset=0x38 Size=0x10
};
