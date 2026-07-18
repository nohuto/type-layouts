struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _PS_PROPERTY_SET// Size=0xc (Id=339)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    unsigned long Lock;// Offset=0x8 Size=0x4
};
