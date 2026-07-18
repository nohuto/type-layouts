struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TP_TASK// Size=0x20 (Id=376)
{
    struct _TP_TASK_CALLBACKS * Callbacks;// Offset=0x0 Size=0x8
    unsigned long NumaNode;// Offset=0x8 Size=0x4
    unsigned char IdealProcessor;// Offset=0xc Size=0x1
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
};

struct _TP_DIRECT// Size=0x48 (Id=683)
{
    struct _TP_TASK Task;// Offset=0x0 Size=0x20
    unsigned long long Lock;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY IoCompletionInformationList;// Offset=0x28 Size=0x10
    void  ( * Callback)(struct _TP_CALLBACK_INSTANCE * ,struct _TP_DIRECT * ,void * ,struct _IO_STATUS_BLOCK * );// Offset=0x38 Size=0x8
    unsigned long NumaNode;// Offset=0x40 Size=0x4
    unsigned char IdealProcessor;// Offset=0x44 Size=0x1
};
