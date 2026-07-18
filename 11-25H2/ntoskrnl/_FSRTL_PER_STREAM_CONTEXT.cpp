struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _FSRTL_PER_STREAM_CONTEXT// Size=0x28 (Id=633)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    void * OwnerId;// Offset=0x10 Size=0x8
    void * InstanceId;// Offset=0x18 Size=0x8
    void  ( * FreeCallback)(void * );// Offset=0x20 Size=0x8
};
