struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IRP::<unnamed-type-Tail>::<unnamed-type-Overlay>::_anonymous_1375// Size=0x18 (Id=1375)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _IO_STACK_LOCATION * CurrentStackLocation;// Offset=0x10 Size=0x8
        unsigned long PacketType;// Offset=0x10 Size=0x4
    };
};
