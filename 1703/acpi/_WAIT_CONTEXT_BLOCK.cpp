struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=327)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
};

struct _WAIT_CONTEXT_BLOCK// Size=0x48 (Id=275)
{
    union // Size=0x18 (Id=0)
    {
        struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;// Offset=0x0 Size=0x18
        struct _LIST_ENTRY DmaWaitEntry;// Offset=0x0 Size=0x10
        unsigned long NumberOfChannels;// Offset=0x10 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long SyncCallback:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DmaContext:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ZeroMapRegisters:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reserved:29;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
    };
    enum _IO_ALLOCATION_ACTION  ( * DeviceRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeviceContext;// Offset=0x20 Size=0x8
    unsigned long NumberOfMapRegisters;// Offset=0x28 Size=0x4
    void * DeviceObject;// Offset=0x30 Size=0x8
    void * CurrentIrp;// Offset=0x38 Size=0x8
    struct _KDPC * BufferChainingDpc;// Offset=0x40 Size=0x8
};
