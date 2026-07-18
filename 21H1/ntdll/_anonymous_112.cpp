struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x10 (Id=456)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x8
    unsigned long SortKey;// Offset=0x8 Size=0x4
    unsigned char Inserted;// Offset=0xc Size=0x1
};

struct _anonymous_112// Size=0x2c (Id=112)
{
    union // Size=0x10 (Id=0)
    {
        struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;// Offset=0x0 Size=0x10
        void * DriverContext[4];// Offset=0x0 Size=0x10
    };
    struct _ETHREAD * Thread;// Offset=0x10 Size=0x4
    char * AuxiliaryBuffer;// Offset=0x14 Size=0x4
    struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _IO_STACK_LOCATION * CurrentStackLocation;// Offset=0x20 Size=0x4
        unsigned long PacketType;// Offset=0x20 Size=0x4
    };
    struct _FILE_OBJECT * OriginalFileObject;// Offset=0x24 Size=0x4
    void * IrpExtension;// Offset=0x28 Size=0x4
};
