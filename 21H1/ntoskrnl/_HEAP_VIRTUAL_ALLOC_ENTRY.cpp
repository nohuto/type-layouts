struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_ENTRY_EXTRA// Size=0x10 (Id=1499)
{
    union // Size=0x10 (Id=0)
    {
        unsigned short AllocatorBackTraceIndex;// Offset=0x0 Size=0x2
        unsigned short TagIndex;// Offset=0x2 Size=0x2
        unsigned long long Settable;// Offset=0x8 Size=0x8
        unsigned long long ZeroInit;// Offset=0x0 Size=0x8
        unsigned long long ZeroInit1;// Offset=0x8 Size=0x8
    };
};

struct _HEAP_UNPACKED_ENTRY// Size=0x10 (Id=1790)
{
    void * PreviousBlockPrivateData;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        unsigned short Size;// Offset=0x8 Size=0x2
        unsigned char Flags;// Offset=0xa Size=0x1
        unsigned char SmallTagIndex;// Offset=0xb Size=0x1
        unsigned long SubSegmentCode;// Offset=0x8 Size=0x4
        unsigned short PreviousSize;// Offset=0xc Size=0x2
        union // Size=0x1 (Id=0)
        {
            unsigned char SegmentOffset;// Offset=0xe Size=0x1
            unsigned char LFHFlags;// Offset=0xe Size=0x1
        };
        unsigned char UnusedBytes;// Offset=0xf Size=0x1
        unsigned long long CompactHeader;// Offset=0x8 Size=0x8
    };
};

struct _HEAP_EXTENDED_ENTRY// Size=0x10 (Id=1765)
{
    void * Reserved;// Offset=0x0 Size=0x8
    union // Size=0xc (Id=0)
    {
        unsigned short FunctionIndex;// Offset=0x8 Size=0x2
        unsigned short ContextValue;// Offset=0xa Size=0x2
        unsigned long InterceptorValue;// Offset=0x8 Size=0x4
    };
    unsigned short UnusedBytesLength;// Offset=0xc Size=0x2
    unsigned char EntryOffset;// Offset=0xe Size=0x1
    unsigned char ExtendedBlockSignature;// Offset=0xf Size=0x1
};

struct _HEAP_ENTRY// Size=0x10 (Id=768)
{
    union // Size=0x10 (Id=0)
    {
        struct _HEAP_UNPACKED_ENTRY UnpackedEntry;// Offset=0x0 Size=0x10
        void * PreviousBlockPrivateData;// Offset=0x0 Size=0x8
        unsigned short Size;// Offset=0x8 Size=0x2
        unsigned char Flags;// Offset=0xa Size=0x1
        unsigned char SmallTagIndex;// Offset=0xb Size=0x1
        unsigned long SubSegmentCode;// Offset=0x8 Size=0x4
        unsigned short PreviousSize;// Offset=0xc Size=0x2
        union // Size=0x1 (Id=0)
        {
            unsigned char SegmentOffset;// Offset=0xe Size=0x1
            unsigned char LFHFlags;// Offset=0xe Size=0x1
        };
        unsigned char UnusedBytes;// Offset=0xf Size=0x1
        unsigned long long CompactHeader;// Offset=0x8 Size=0x8
        struct _HEAP_EXTENDED_ENTRY ExtendedEntry;// Offset=0x0 Size=0x10
        void * Reserved;// Offset=0x0 Size=0x8
        union // Size=0xc (Id=0)
        {
            unsigned short FunctionIndex;// Offset=0x8 Size=0x2
            unsigned short ContextValue;// Offset=0xa Size=0x2
            unsigned long InterceptorValue;// Offset=0x8 Size=0x4
        };
        unsigned short UnusedBytesLength;// Offset=0xc Size=0x2
        unsigned char EntryOffset;// Offset=0xe Size=0x1
        unsigned char ExtendedBlockSignature;// Offset=0xf Size=0x1
        void * ReservedForAlignment;// Offset=0x0 Size=0x8
        unsigned long Code1;// Offset=0x8 Size=0x4
        unsigned short Code2;// Offset=0xc Size=0x2
        unsigned char Code3;// Offset=0xe Size=0x1
        unsigned char Code4;// Offset=0xf Size=0x1
    };
    unsigned long Code234;// Offset=0xc Size=0x4
    unsigned long long AgregateCode;// Offset=0x8 Size=0x8
};

struct _HEAP_VIRTUAL_ALLOC_ENTRY// Size=0x40 (Id=770)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    struct _HEAP_ENTRY_EXTRA ExtraStuff;// Offset=0x10 Size=0x10
    unsigned long long CommitSize;// Offset=0x20 Size=0x8
    unsigned long long ReserveSize;// Offset=0x28 Size=0x8
    struct _HEAP_ENTRY BusyBlock;// Offset=0x30 Size=0x10
};
