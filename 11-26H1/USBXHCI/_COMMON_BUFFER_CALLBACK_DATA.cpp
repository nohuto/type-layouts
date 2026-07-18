struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _COMMON_BUFFER_CALLBACK_DATA// Size=0x30 (Id=705)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * Owner;// Offset=0x10 Size=0x8
    unsigned long NumberToAcquire;// Offset=0x18 Size=0x4
    unsigned long BufferSize;// Offset=0x1c Size=0x4
    unsigned long Tag;// Offset=0x20 Size=0x4
    void  ( * Callback)(struct _COMMON_BUFFER_CALLBACK_DATA * ,long ,struct _LIST_ENTRY * );// Offset=0x28 Size=0x8
};
