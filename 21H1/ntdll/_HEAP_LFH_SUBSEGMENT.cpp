struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

union _HEAP_LFH_SUBSEGMENT_DELAY_FREE// Size=0x4 (Id=545)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Count:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    void * AllBits;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS// Size=0x4 (Id=254)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short BlockSize;// Offset=0x0 Size=0x2
        unsigned short FirstBlockOffset;// Offset=0x2 Size=0x2
        unsigned long EncodedData;// Offset=0x0 Size=0x4
    };
};

struct _HEAP_LFH_SUBSEGMENT// Size=0x24 (Id=255)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _HEAP_LFH_SUBSEGMENT_OWNER * Owner;// Offset=0x8 Size=0x4
        union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;// Offset=0x8 Size=0x4
    };
    unsigned long CommitLock;// Offset=0xc Size=0x4
    union // Size=0x14 (Id=0)
    {
        unsigned short FreeCount;// Offset=0x10 Size=0x2
        unsigned short BlockCount;// Offset=0x12 Size=0x2
        short InterlockedShort;// Offset=0x10 Size=0x2
        long InterlockedLong;// Offset=0x10 Size=0x4
    };
    unsigned short FreeHint;// Offset=0x14 Size=0x2
    unsigned char Location;// Offset=0x16 Size=0x1
    unsigned char WitheldBlockCount;// Offset=0x17 Size=0x1
    struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;// Offset=0x18 Size=0x4
    unsigned char CommitUnitShift;// Offset=0x1c Size=0x1
    unsigned char CommitUnitCount;// Offset=0x1d Size=0x1
    unsigned short CommitStateOffset;// Offset=0x1e Size=0x2
    unsigned long BlockBitmap[1];// Offset=0x20 Size=0x4
};
