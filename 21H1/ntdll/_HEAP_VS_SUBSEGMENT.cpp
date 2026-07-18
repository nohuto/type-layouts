struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _HEAP_VS_SUBSEGMENT// Size=0x18 (Id=263)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    unsigned long long CommitBitmap;// Offset=0x8 Size=0x8
    unsigned long CommitLock;// Offset=0x10 Size=0x4
    unsigned short Size;// Offset=0x14 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Signature:15;// Offset=0x16 Size=0x2 BitOffset=0x0 BitSize=0xf
        unsigned short FullCommit:1;// Offset=0x16 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};
