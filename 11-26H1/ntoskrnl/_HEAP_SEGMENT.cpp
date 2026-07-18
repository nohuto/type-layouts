struct _HEAP_UNPACKED_ENTRY// Size=0x10 (Id=2294)
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

struct _HEAP_EXTENDED_ENTRY// Size=0x10 (Id=2260)
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

struct _HEAP_ENTRY// Size=0x10 (Id=988)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_SEGMENT// Size=0x70 (Id=989)
{
    struct _HEAP_ENTRY Entry;// Offset=0x0 Size=0x10
    unsigned long SegmentSignature;// Offset=0x10 Size=0x4
    unsigned long SegmentFlags;// Offset=0x14 Size=0x4
    struct _LIST_ENTRY SegmentListEntry;// Offset=0x18 Size=0x10
    struct _HEAP * Heap;// Offset=0x28 Size=0x8
    void * BaseAddress;// Offset=0x30 Size=0x8
    unsigned long NumberOfPages;// Offset=0x38 Size=0x4
    struct _HEAP_ENTRY * FirstEntry;// Offset=0x40 Size=0x8
    struct _HEAP_ENTRY * LastValidEntry;// Offset=0x48 Size=0x8
    unsigned long NumberOfUnCommittedPages;// Offset=0x50 Size=0x4
    unsigned long NumberOfUnCommittedRanges;// Offset=0x54 Size=0x4
    unsigned short SegmentAllocatorBackTraceIndex;// Offset=0x58 Size=0x2
    unsigned short Reserved;// Offset=0x5a Size=0x2
    struct _LIST_ENTRY UCRSegmentList;// Offset=0x60 Size=0x10
};
