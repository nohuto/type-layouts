struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS// Size=0x30 (Id=1758)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _KINTERRUPT ** InterruptObject;// Offset=0x8 Size=0x8
    unsigned char  ( * ServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0x10 Size=0x8
    void * ServiceContext;// Offset=0x18 Size=0x8
    unsigned long long * SpinLock;// Offset=0x20 Size=0x8
    unsigned char SynchronizeIrql;// Offset=0x28 Size=0x1
    unsigned char FloatingSave;// Offset=0x29 Size=0x1
};
