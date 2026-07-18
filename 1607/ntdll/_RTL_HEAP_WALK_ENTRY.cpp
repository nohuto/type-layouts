struct _unnamed_240// Size=0x18 (Id=240)
{
    unsigned long long Settable;// Offset=0x0 Size=0x8
    unsigned short TagIndex;// Offset=0x8 Size=0x2
    unsigned short AllocatorBackTraceIndex;// Offset=0xa Size=0x2
    unsigned long Reserved[2];// Offset=0xc Size=0x8
};

struct _unnamed_241// Size=0x18 (Id=241)
{
    unsigned long CommittedSize;// Offset=0x0 Size=0x4
    unsigned long UnCommittedSize;// Offset=0x4 Size=0x4
    void * FirstEntry;// Offset=0x8 Size=0x8
    void * LastEntry;// Offset=0x10 Size=0x8
};

struct _RTL_HEAP_WALK_ENTRY// Size=0x30 (Id=242)
{
    void * DataAddress;// Offset=0x0 Size=0x8
    unsigned long long DataSize;// Offset=0x8 Size=0x8
    unsigned char OverheadBytes;// Offset=0x10 Size=0x1
    unsigned char SegmentIndex;// Offset=0x11 Size=0x1
    unsigned short Flags;// Offset=0x12 Size=0x2
    union // Size=0x18 (Id=0)
    {
        struct _unnamed_240 Block;// Offset=0x18 Size=0x18
        struct _unnamed_241 Segment;// Offset=0x18 Size=0x18
    };
};
