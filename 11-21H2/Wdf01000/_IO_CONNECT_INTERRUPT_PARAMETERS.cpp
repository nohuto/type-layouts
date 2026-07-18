enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS// Size=0x48 (Id=682)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _KINTERRUPT ** InterruptObject;// Offset=0x8 Size=0x8
    unsigned char  ( * ServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0x10 Size=0x8
    void * ServiceContext;// Offset=0x18 Size=0x8
    unsigned long long * SpinLock;// Offset=0x20 Size=0x8
    unsigned char SynchronizeIrql;// Offset=0x28 Size=0x1
    unsigned char FloatingSave;// Offset=0x29 Size=0x1
    unsigned char ShareVector;// Offset=0x2a Size=0x1
    unsigned long Vector;// Offset=0x2c Size=0x4
    unsigned char Irql;// Offset=0x30 Size=0x1
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x34 Size=0x4
    unsigned long long ProcessorEnableMask;// Offset=0x38 Size=0x8
    unsigned short Group;// Offset=0x40 Size=0x2
};

struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS// Size=0x30 (Id=1616)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _KINTERRUPT ** InterruptObject;// Offset=0x8 Size=0x8
    unsigned char  ( * ServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0x10 Size=0x8
    void * ServiceContext;// Offset=0x18 Size=0x8
    unsigned long long * SpinLock;// Offset=0x20 Size=0x8
    unsigned char SynchronizeIrql;// Offset=0x28 Size=0x1
    unsigned char FloatingSave;// Offset=0x29 Size=0x1
};

struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS// Size=0x38 (Id=658)
{
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
        union <unnamed-type-ConnectionContext>// Size=0x8 (Id=9624)
        {
            void ** Generic;// Offset=0x0 Size=0x8
            struct _IO_INTERRUPT_MESSAGE_INFO ** InterruptMessageTable;// Offset=0x0 Size=0x8
            struct _KINTERRUPT ** InterruptObject;// Offset=0x0 Size=0x8
        };
    };
    union _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS::<unnamed-type-ConnectionContext> ConnectionContext;// Offset=0x8 Size=0x8
    unsigned char  ( * MessageServiceRoutine)(struct _KINTERRUPT * ,void * ,unsigned long );// Offset=0x10 Size=0x8
    void * ServiceContext;// Offset=0x18 Size=0x8
    unsigned long long * SpinLock;// Offset=0x20 Size=0x8
    unsigned char SynchronizeIrql;// Offset=0x28 Size=0x1
    unsigned char FloatingSave;// Offset=0x29 Size=0x1
    unsigned char  ( * FallBackServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0x30 Size=0x8
};

struct _IO_CONNECT_INTERRUPT_PARAMETERS// Size=0x50 (Id=1325)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    union // Size=0x48 (Id=0)
    {
        struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS FullySpecified;// Offset=0x8 Size=0x48
        struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS LineBased;// Offset=0x8 Size=0x30
        struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS MessageBased;// Offset=0x8 Size=0x38
    };
};
