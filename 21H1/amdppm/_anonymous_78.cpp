struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=546)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
};

struct _anonymous_77// Size=0x58 (Id=77)
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

struct _KAPC// Size=0x58 (Id=535)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char SpareByte0;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ApcListEntry;// Offset=0x10 Size=0x10
    union // Size=0x38 (Id=0)
    {
        void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x20 Size=0x8
        void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x28 Size=0x8
        void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x30 Size=0x8
        void * Reserved[3];// Offset=0x20 Size=0x18
    };
    void * NormalContext;// Offset=0x38 Size=0x8
    void * SystemArgument1;// Offset=0x40 Size=0x8
    void * SystemArgument2;// Offset=0x48 Size=0x8
    char ApcStateIndex;// Offset=0x50 Size=0x1
    char ApcMode;// Offset=0x51 Size=0x1
    unsigned char Inserted;// Offset=0x52 Size=0x1
};

union _anonymous_78// Size=0x58 (Id=78)
{
    union // Size=0x58 (Id=0)
    {
        struct _anonymous_77 Overlay;// Offset=0x0 Size=0x58
        struct _KAPC Apc;// Offset=0x0 Size=0x58
        void * CompletionKey;// Offset=0x0 Size=0x8
    };
};
