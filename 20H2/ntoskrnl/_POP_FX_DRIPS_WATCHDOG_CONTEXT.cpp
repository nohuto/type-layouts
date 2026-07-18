struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _POP_FX_DRIPS_WATCHDOG_CONTEXT// Size=0x28 (Id=1904)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned long ComponentIndex;// Offset=0x10 Size=0x4
    struct _DEVICE_NODE ** ChildDevices;// Offset=0x18 Size=0x8
    unsigned long ChildDeviceCount;// Offset=0x20 Size=0x4
};
