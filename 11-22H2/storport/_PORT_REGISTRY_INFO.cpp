struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PORT_REGISTRY_INFO// Size=0x40 (Id=685)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x8 Size=0x10
    unsigned long long SpinLock;// Offset=0x18 Size=0x8
    unsigned char * Buffer;// Offset=0x20 Size=0x8
    unsigned long AllocatedLength;// Offset=0x28 Size=0x4
    unsigned long CurrentLength;// Offset=0x2c Size=0x4
    unsigned long LengthNeeded;// Offset=0x30 Size=0x4
    unsigned long Offset;// Offset=0x34 Size=0x4
    unsigned long Flags;// Offset=0x38 Size=0x4
    long InternalStatus;// Offset=0x3c Size=0x4
};
