struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=63)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _HEAP_LFH_SUBSEGMENT_DELAY_FREE// Size=0x8 (Id=334)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DelayFree:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Count:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
    void * AllBits;// Offset=0x0 Size=0x8
};

struct _RTL_SRWLOCK// Size=0x8 (Id=211)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS// Size=0x4 (Id=207)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short BlockSize;// Offset=0x0 Size=0x2
        unsigned short FirstBlockOffset;// Offset=0x2 Size=0x2
        unsigned long EncodedData;// Offset=0x0 Size=0x4
    };
};

struct _HEAP_LFH_SUBSEGMENT// Size=0x40 (Id=208)
{
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
        struct _SLIST_ENTRY Link;// Offset=0x0 Size=0x10
    };
    union // Size=0x8 (Id=0)
    {
        struct _HEAP_LFH_SUBSEGMENT_OWNER * Owner;// Offset=0x10 Size=0x8
        union _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;// Offset=0x10 Size=0x8
    };
    struct _RTL_SRWLOCK CommitLock;// Offset=0x18 Size=0x8
    union // Size=0x24 (Id=0)
    {
        unsigned short FreeCount;// Offset=0x20 Size=0x2
        unsigned short BlockCount;// Offset=0x22 Size=0x2
        short InterlockedShort;// Offset=0x20 Size=0x2
        long InterlockedLong;// Offset=0x20 Size=0x4
    };
    unsigned short FreeHint;// Offset=0x24 Size=0x2
    unsigned char Location;// Offset=0x26 Size=0x1
    unsigned char Spare;// Offset=0x27 Size=0x1
    struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;// Offset=0x28 Size=0x4
    unsigned char CommitUnitShift;// Offset=0x2c Size=0x1
    unsigned char CommitUnitCount;// Offset=0x2d Size=0x1
    unsigned short CommitStateOffset;// Offset=0x2e Size=0x2
    unsigned long long BlockBitmap[1];// Offset=0x30 Size=0x8
};
