struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=90)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_ACCESS_LOG_STATE// Size=0x80 (Id=1176)
{
    struct _MM_PAGE_ACCESS_INFO_HEADER * CcAccessLog;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM DisableAccessLogging;// Offset=0x8 Size=0x20
    unsigned long Enabled;// Offset=0x28 Size=0x4
    unsigned long MinLoggingPriority;// Offset=0x2c Size=0x4
    unsigned long long AccessLoggingLock;// Offset=0x40 Size=0x8
};
