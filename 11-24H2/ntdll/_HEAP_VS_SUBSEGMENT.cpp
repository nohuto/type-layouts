struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_VS_SUBSEGMENT// Size=0x28 (Id=325)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long long CommitBitmap;// Offset=0x10 Size=0x8
    unsigned long long CommitLock;// Offset=0x18 Size=0x8
    unsigned short Size;// Offset=0x20 Size=0x2
    unsigned short OwnerSlotRef;// Offset=0x22 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Signature:15;// Offset=0x24 Size=0x2 BitOffset=0x0 BitSize=0xf
        unsigned short FullCommit:1;// Offset=0x24 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};
