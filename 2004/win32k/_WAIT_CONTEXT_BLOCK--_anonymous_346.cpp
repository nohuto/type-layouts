struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x10 (Id=331)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x8
    unsigned long SortKey;// Offset=0x8 Size=0x4
    unsigned char Inserted;// Offset=0xc Size=0x1
};

union _WAIT_CONTEXT_BLOCK::_anonymous_346// Size=0x10 (Id=346)
{
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY DmaWaitEntry;// Offset=0x0 Size=0x8
    unsigned long NumberOfChannels;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SyncCallback:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DmaContext:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ZeroMapRegisters:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:9;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x9
        unsigned long NumberOfRemapPages:20;// Offset=0xc Size=0x4 BitOffset=0xc BitSize=0x14
    };
};
