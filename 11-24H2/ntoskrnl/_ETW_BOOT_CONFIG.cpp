struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _ETW_BOOT_CONFIG// Size=0x18 (Id=2482)
{
    unsigned long MaxLoggers;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY BootLoggersList;// Offset=0x8 Size=0x10
};
