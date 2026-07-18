struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _heapobjhdr// Size=0x20 (Id=392)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    unsigned long dwLen;// Offset=0x4 Size=0x4
    struct _heap * pheap;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY list;// Offset=0x10 Size=0x10
};
