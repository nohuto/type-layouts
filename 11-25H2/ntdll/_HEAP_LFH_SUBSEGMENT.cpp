struct _LIST_ENTRY// Size=0x10 (Id=30)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_LFH_BLOCK_SLIST// Size=0x2 (Id=307)
{
    unsigned short Next;// Offset=0x0 Size=0x2
};

union _HEAP_LFH_BLOCK_LIST// Size=0x4 (Id=306)
{
    unsigned short Next;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
    struct _HEAP_LFH_BLOCK_SLIST SList;// Offset=0x0 Size=0x2
    unsigned long ListFields;// Offset=0x0 Size=0x4
};

union _HEAP_LFH_SUBSEGMENT_STATE// Size=0x8 (Id=304)
{
    unsigned short DelayFreeList;// Offset=0x0 Size=0x2
    unsigned short DelayFreeCount;// Offset=0x2 Size=0x2
    unsigned short Owner;// Offset=0x4 Size=0x2
    unsigned char Location;// Offset=0x6 Size=0x1
    long DelayFreeFields;// Offset=0x0 Size=0x4
    long OwnerLocation;// Offset=0x4 Size=0x4
    union _HEAP_LFH_BLOCK_LIST FreeList;// Offset=0x0 Size=0x4
    void * AllBits;// Offset=0x0 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _HEAP_LFH_COMMIT_UNIT_INFO// Size=0x2 (Id=312)
{
    unsigned char CommitUnitShift;// Offset=0x0 Size=0x1
    unsigned char CommitUnitCount;// Offset=0x1 Size=0x1
    unsigned short UShort;// Offset=0x0 Size=0x2
};

struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS// Size=0x4 (Id=309)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short BlockSize;// Offset=0x0 Size=0x2
        unsigned short FirstBlockOffset;// Offset=0x2 Size=0x2
        unsigned long EncodedData;// Offset=0x0 Size=0x4
    };
};

union _HEAP_LFH_SUBSEGMENT_UCHAR_FIELDS// Size=0x1 (Id=311)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PrivateFormat:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Spare1:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char AllUCharBits;// Offset=0x0 Size=0x1
};

struct _HEAP_LFH_SUBSEGMENT// Size=0x48 (Id=308)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    union _HEAP_LFH_SUBSEGMENT_STATE State;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _SINGLE_LIST_ENTRY OwnerFreeListEntry;// Offset=0x18 Size=0x8
        unsigned char CommitStateOffset;// Offset=0x18 Size=0x1
    };
    struct // Size=0x1 (Id=0)
    {
        unsigned char Spare0:4;// Offset=0x19 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
    unsigned short FreeCount;// Offset=0x20 Size=0x2
    unsigned short BlockCount;// Offset=0x22 Size=0x2
    unsigned char FreeHint;// Offset=0x24 Size=0x1
    unsigned char WitheldBlockCount;// Offset=0x25 Size=0x1
    union // Size=0x28 (Id=0)
    {
        unsigned char CommitUnitShift;// Offset=0x26 Size=0x1
        unsigned char CommitUnitCount;// Offset=0x27 Size=0x1
        union _HEAP_LFH_COMMIT_UNIT_INFO CommitUnitInfo;// Offset=0x26 Size=0x2
    };
    struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;// Offset=0x28 Size=0x4
    unsigned short BucketRef;// Offset=0x2c Size=0x2
    unsigned short PrivateSlotMapRef;// Offset=0x2e Size=0x2
    unsigned short HighWatermarkBlockIndex;// Offset=0x30 Size=0x2
    unsigned char BitmapSearchWidth;// Offset=0x32 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char PrivateFormat:1;// Offset=0x33 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Spare1:7;// Offset=0x33 Size=0x1 BitOffset=0x1 BitSize=0x7
        };
        union _HEAP_LFH_SUBSEGMENT_UCHAR_FIELDS UChar;// Offset=0x33 Size=0x1
    };
    unsigned long Spare3;// Offset=0x34 Size=0x4
    unsigned long long CommitLock;// Offset=0x38 Size=0x8
    unsigned long long BlockBitmap[1];// Offset=0x40 Size=0x8
};
