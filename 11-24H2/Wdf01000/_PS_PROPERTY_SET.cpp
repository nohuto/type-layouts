struct _LIST_ENTRY// Size=0x10 (Id=1060)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PS_PROPERTY_SET// Size=0x18 (Id=1415)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
};
