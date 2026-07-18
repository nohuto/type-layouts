struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _heapobjhdr// Size=0x20 (Id=534)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    unsigned long dwLen;// Offset=0x4 Size=0x4
    struct _heap * pheap;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY list;// Offset=0x10 Size=0x10
};

struct _heap// Size=0x58 (Id=535)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    unsigned char * pbHeapEnd;// Offset=0x8 Size=0x8
    struct _heap * pheapHead;// Offset=0x10 Size=0x8
    struct _heap * pheapNext;// Offset=0x18 Size=0x8
    unsigned char * pbHeapTop;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY listFreeHeap;// Offset=0x28 Size=0x10
    struct _heapobjhdr Heap;// Offset=0x38 Size=0x20
};
