struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_DEVICE_EXTENSION// Size=0x38 (Id=531)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    char * CompatibleID;// Offset=0x18 Size=0x8
    unsigned long InitialApicId;// Offset=0x20 Size=0x4
    unsigned long ProcessorId;// Offset=0x24 Size=0x4
    struct _LIST_ENTRY Link;// Offset=0x28 Size=0x10
};
