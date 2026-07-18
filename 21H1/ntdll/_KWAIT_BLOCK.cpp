struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KWAIT_BLOCK// Size=0x18 (Id=479)
{
    struct _LIST_ENTRY WaitListEntry;// Offset=0x0 Size=0x8
    unsigned char WaitType;// Offset=0x8 Size=0x1
    unsigned char BlockState;// Offset=0x9 Size=0x1
    unsigned short WaitKey;// Offset=0xa Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _KTHREAD * Thread;// Offset=0xc Size=0x4
        struct _KQUEUE * NotificationQueue;// Offset=0xc Size=0x4
    };
    void * Object;// Offset=0x10 Size=0x4
    void * SparePtr;// Offset=0x14 Size=0x4
};
