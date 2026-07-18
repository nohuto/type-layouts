struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS// Size=0x38 (Id=440)
{
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
        union <unnamed-type-ConnectionContext>// Size=0x8 (Id=8776)
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
