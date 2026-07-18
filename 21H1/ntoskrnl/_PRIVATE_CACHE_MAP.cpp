struct _PRIVATE_CACHE_MAP_FLAGS// Size=0x4 (Id=1620)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DontUse:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long ReadAheadActive:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ReadAheadEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long PagePriority:3;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x3
        unsigned long PipelineReadAheads:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Available:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
    };
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=977)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PRIVATE_CACHE_MAP// Size=0x78 (Id=1137)
{
    union // Size=0x2 (Id=0)
    {
        short NodeTypeCode;// Offset=0x0 Size=0x2
        struct _PRIVATE_CACHE_MAP_FLAGS Flags;// Offset=0x0 Size=0x4
    };
    unsigned long ReadAheadMask;// Offset=0x4 Size=0x4
    struct _FILE_OBJECT * FileObject;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER FileOffset1;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER BeyondLastByte1;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER FileOffset2;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER BeyondLastByte2;// Offset=0x28 Size=0x8
    unsigned long SequentialReadCount;// Offset=0x30 Size=0x4
    unsigned long ReadAheadLength;// Offset=0x34 Size=0x4
    union _LARGE_INTEGER ReadAheadOffset;// Offset=0x38 Size=0x8
    union _LARGE_INTEGER ReadAheadBeyondLastByte;// Offset=0x40 Size=0x8
    unsigned long long PrevReadAheadBeyondLastByte;// Offset=0x48 Size=0x8
    unsigned long long ReadAheadSpinLock;// Offset=0x50 Size=0x8
    unsigned long PipelinedReadAheadRequestSize;// Offset=0x58 Size=0x4
    unsigned long ReadAheadGrowth;// Offset=0x5c Size=0x4
    struct _LIST_ENTRY PrivateLinks;// Offset=0x60 Size=0x10
    void * ReadAheadWorkItem;// Offset=0x70 Size=0x8
};
