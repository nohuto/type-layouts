struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PHYSICAL_CORE// Size=0x28 (Id=494)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned long Total;// Offset=0x10 Size=0x4
    unsigned long ActiveTotal;// Offset=0x14 Size=0x4
    unsigned long CoreId;// Offset=0x18 Size=0x4
    struct _PCT_PLATFORM_COUNTER_STATE * PlatformCounterState;// Offset=0x20 Size=0x8
};
