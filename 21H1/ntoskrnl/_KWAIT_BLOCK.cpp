struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KWAIT_BLOCK// Size=0x30 (Id=1384)
{
    struct _LIST_ENTRY WaitListEntry;// Offset=0x0 Size=0x10
    unsigned char WaitType;// Offset=0x10 Size=0x1
    unsigned char BlockState;// Offset=0x11 Size=0x1
    unsigned short WaitKey;// Offset=0x12 Size=0x2
    long SpareLong;// Offset=0x14 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _KTHREAD * Thread;// Offset=0x18 Size=0x8
        struct _KQUEUE * NotificationQueue;// Offset=0x18 Size=0x8
    };
    void * Object;// Offset=0x20 Size=0x8
    void * SparePtr;// Offset=0x28 Size=0x8
};
