struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN// Size=0x2 (Id=856)
{
    unsigned char SecondsLeft;// Offset=0x0 Size=0x1
    unsigned char SecondsAssigned;// Offset=0x1 Size=0x1
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=74)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_REBUILD_LARGE_PAGES// Size=0x228 (Id=768)
{
    long Active;// Offset=0x0 Size=0x4
    struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[64][4];// Offset=0x4 Size=0x200
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x208 Size=0x20
};
