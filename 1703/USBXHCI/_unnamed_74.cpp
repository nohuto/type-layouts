struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=654)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
};

struct _unnamed_74// Size=0x58 (Id=74)
{
    union // Size=0x18 (Id=0)
    {
        struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;// Offset=0x0 Size=0x18
        void * DriverContext[4];// Offset=0x0 Size=0x20
    };
    struct _ETHREAD * Thread;// Offset=0x20 Size=0x8
    char * AuxiliaryBuffer;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY ListEntry;// Offset=0x30 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _IO_STACK_LOCATION * CurrentStackLocation;// Offset=0x40 Size=0x8
        unsigned long PacketType;// Offset=0x40 Size=0x4
    };
    struct _FILE_OBJECT * OriginalFileObject;// Offset=0x48 Size=0x8
    void * IrpExtension;// Offset=0x50 Size=0x8
};
