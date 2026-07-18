struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KDEVICE_QUEUE_ENTRY// Size=0x18 (Id=800)
{
    struct _LIST_ENTRY DeviceListEntry;// Offset=0x0 Size=0x10
    unsigned long SortKey;// Offset=0x10 Size=0x4
    unsigned char Inserted;// Offset=0x14 Size=0x1
};

struct _WAIT_CONTEXT_BLOCK// Size=0x48 (Id=1080)
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
            unsigned long Reserved:30;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    enum _IO_ALLOCATION_ACTION  ( * DeviceRoutine)(struct _DEVICE_OBJECT * ,struct _IRP * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeviceContext;// Offset=0x20 Size=0x8
    unsigned long NumberOfMapRegisters;// Offset=0x28 Size=0x4
    void * DeviceObject;// Offset=0x30 Size=0x8
    void * CurrentIrp;// Offset=0x38 Size=0x8
    struct _KDPC * BufferChainingDpc;// Offset=0x40 Size=0x8
};

struct _KDEVICE_QUEUE// Size=0x28 (Id=871)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY DeviceListHead;// Offset=0x8 Size=0x10
    unsigned long long Lock;// Offset=0x18 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char Busy;// Offset=0x20 Size=0x1
        struct // Size=0x8 (Id=0)
        {
            long long Reserved:8;// Offset=0x20 Size=0x8 BitOffset=0x0 BitSize=0x8
            long long Hint:56;// Offset=0x20 Size=0x8 BitOffset=0x8 BitSize=0x38
        };
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=24)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=80)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=464)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=54)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _DEVICE_OBJECT// Size=0x150 (Id=79)
{
    union // Size=0x4d (Id=0)
    {
        short Type;// Offset=0x0 Size=0x2
        unsigned short Size;// Offset=0x2 Size=0x2
        long ReferenceCount;// Offset=0x4 Size=0x4
        struct _DRIVER_OBJECT * DriverObject;// Offset=0x8 Size=0x8
        struct _DEVICE_OBJECT * NextDevice;// Offset=0x10 Size=0x8
        struct _DEVICE_OBJECT * AttachedDevice;// Offset=0x18 Size=0x8
        struct _IRP * CurrentIrp;// Offset=0x20 Size=0x8
        struct _IO_TIMER * Timer;// Offset=0x28 Size=0x8
        unsigned long Flags;// Offset=0x30 Size=0x4
        unsigned long Characteristics;// Offset=0x34 Size=0x4
        struct _VPB * Vpb;// Offset=0x38 Size=0x8
        void * DeviceExtension;// Offset=0x40 Size=0x8
        unsigned long DeviceType;// Offset=0x48 Size=0x4
        char StackSize;// Offset=0x4c Size=0x1
        union <unnamed-type-Queue>// Size=0x48 (Id=2221)
        {
            struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
            struct _WAIT_CONTEXT_BLOCK Wcb;// Offset=0x0 Size=0x48
        };
        union _DEVICE_OBJECT::<unnamed-type-Queue> Queue;// Offset=0x50 Size=0x48
    };
    unsigned long AlignmentRequirement;// Offset=0x98 Size=0x4
    struct _KDEVICE_QUEUE DeviceQueue;// Offset=0xa0 Size=0x28
    struct _KDPC Dpc;// Offset=0xc8 Size=0x40
    unsigned long ActiveThreadCount;// Offset=0x108 Size=0x4
    void * SecurityDescriptor;// Offset=0x110 Size=0x8
    struct _KEVENT DeviceLock;// Offset=0x118 Size=0x18
    unsigned short SectorSize;// Offset=0x130 Size=0x2
    unsigned short Spare1;// Offset=0x132 Size=0x2
    struct _DEVOBJ_EXTENSION * DeviceObjectExtension;// Offset=0x138 Size=0x8
    void * Reserved;// Offset=0x140 Size=0x8
};
