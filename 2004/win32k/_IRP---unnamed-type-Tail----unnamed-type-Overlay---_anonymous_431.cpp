struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _IRP::<unnamed-type-Tail>::<unnamed-type-Overlay>::_anonymous_431// Size=0xc (Id=431)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _IO_STACK_LOCATION * CurrentStackLocation;// Offset=0x8 Size=0x4
        unsigned long PacketType;// Offset=0x8 Size=0x4
    };
};
