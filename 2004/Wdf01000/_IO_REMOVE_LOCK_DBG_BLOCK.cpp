struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IO_REMOVE_LOCK_DBG_BLOCK// Size=0x58 (Id=2631)
{
    long Signature;// Offset=0x0 Size=0x4
    unsigned long HighWatermark;// Offset=0x4 Size=0x4
    long long MaxLockedTicks;// Offset=0x8 Size=0x8
    long AllocateTag;// Offset=0x10 Size=0x4
    struct _LIST_ENTRY LockList;// Offset=0x18 Size=0x10
    unsigned long long Spin;// Offset=0x28 Size=0x8
    long LowMemoryCount;// Offset=0x30 Size=0x4
    unsigned long Reserved1[4];// Offset=0x34 Size=0x10
    void * Reserved2;// Offset=0x48 Size=0x8
    struct _IO_REMOVE_LOCK_TRACKING_BLOCK * Blocks;// Offset=0x50 Size=0x8
};
