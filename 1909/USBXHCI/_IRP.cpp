union _anonymous_74// Size=0x8 (Id=74)
{
    struct _IRP * MasterIrp;// Offset=0x0 Size=0x8
    long IrpCount;// Offset=0x0 Size=0x4
    void * SystemBuffer;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IO_STATUS_BLOCK// Size=0x10 (Id=67)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _anonymous_75// Size=0x10 (Id=75)
{
    union // Size=0x8 (Id=0)
    {
        void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x8
        void * IssuingProcess;// Offset=0x0 Size=0x8
    };
    void * UserApcContext;// Offset=0x8 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _anonymous_76// Size=0x10 (Id=76)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_75 AsynchronousParameters;// Offset=0x0 Size=0x10
        union _LARGE_INTEGER AllocationSize;// Offset=0x0 Size=0x8
    };
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=729)
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

struct _KAPC// Size=0x58 (Id=716)
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

struct _IRP// Size=0xd0 (Id=79)
{
    short Type;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0x4 Size=0x2
    unsigned short Reserved;// Offset=0x6 Size=0x2
    struct _MDL * MdlAddress;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
    union _anonymous_74 AssociatedIrp;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY ThreadListEntry;// Offset=0x20 Size=0x10
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x30 Size=0x10
    char RequestorMode;// Offset=0x40 Size=0x1
    unsigned char PendingReturned;// Offset=0x41 Size=0x1
    char StackCount;// Offset=0x42 Size=0x1
    char CurrentLocation;// Offset=0x43 Size=0x1
    unsigned char Cancel;// Offset=0x44 Size=0x1
    unsigned char CancelIrql;// Offset=0x45 Size=0x1
    char ApcEnvironment;// Offset=0x46 Size=0x1
    unsigned char AllocationFlags;// Offset=0x47 Size=0x1
    struct _IO_STATUS_BLOCK * UserIosb;// Offset=0x48 Size=0x8
    struct _KEVENT * UserEvent;// Offset=0x50 Size=0x8
    union _anonymous_76 Overlay;// Offset=0x58 Size=0x10
    void  ( * CancelRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x68 Size=0x8
    void * UserBuffer;// Offset=0x70 Size=0x8
    union _anonymous_78 Tail;// Offset=0x78 Size=0x58
};
