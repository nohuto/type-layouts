struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PPM_VETO_ENTRY// Size=0x18 (Id=581)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned long VetoReason;// Offset=0x10 Size=0x4
    unsigned long ReferenceCount;// Offset=0x14 Size=0x4
};
