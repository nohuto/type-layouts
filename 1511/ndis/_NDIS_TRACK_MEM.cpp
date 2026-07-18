struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_TRACK_MEM// Size=0x28 (Id=1357)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Tag;// Offset=0x10 Size=0x4
    unsigned int Length;// Offset=0x14 Size=0x4
    void * Caller;// Offset=0x18 Size=0x8
    void * CallersCaller;// Offset=0x20 Size=0x8
};
