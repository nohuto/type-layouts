struct _LIST_ENTRY// Size=0x10 (Id=122)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FX_POOL// Size=0xa0 (Id=2126)
{
    class MxLockNoDynam NonPagedLock;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY NonPagedHead;// Offset=0x10 Size=0x10
    class MxPagedLockNoDynam PagedLock;// Offset=0x20 Size=0x40
    struct _LIST_ENTRY PagedHead;// Offset=0x60 Size=0x10
    unsigned long long NonPagedBytes;// Offset=0x70 Size=0x8
    unsigned long long PagedBytes;// Offset=0x78 Size=0x8
    unsigned long NonPagedAllocations;// Offset=0x80 Size=0x4
    unsigned long PagedAllocations;// Offset=0x84 Size=0x4
    unsigned long long PeakNonPagedBytes;// Offset=0x88 Size=0x8
    unsigned long long PeakPagedBytes;// Offset=0x90 Size=0x8
    unsigned long PeakNonPagedAllocations;// Offset=0x98 Size=0x4
    unsigned long PeakPagedAllocations;// Offset=0x9c Size=0x4
};
