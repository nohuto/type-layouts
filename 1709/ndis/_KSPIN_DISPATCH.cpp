struct _KSPIN_DISPATCH// Size=0x50 (Id=916)
{
    long  ( * Create)(struct _KSPIN * ,struct _IRP * );// Offset=0x0 Size=0x8
    long  ( * Close)(struct _KSPIN * ,struct _IRP * );// Offset=0x8 Size=0x8
    long  ( * Process)(struct _KSPIN * );// Offset=0x10 Size=0x8
    void  ( * Reset)(struct _KSPIN * );// Offset=0x18 Size=0x8
    long  ( * SetDataFormat)(struct _KSPIN * ,union KSDATAFORMAT * ,struct KSMULTIPLE_ITEM * ,union KSDATAFORMAT * ,struct KSATTRIBUTE_LIST * );// Offset=0x20 Size=0x8
    long  ( * SetDeviceState)(struct _KSPIN * ,enum KSSTATE ,enum KSSTATE );// Offset=0x28 Size=0x8
    long  ( * Connect)(struct _KSPIN * );// Offset=0x30 Size=0x8
    void  ( * Disconnect)(struct _KSPIN * );// Offset=0x38 Size=0x8
    struct _KSCLOCK_DISPATCH * Clock;// Offset=0x40 Size=0x8
    struct _KSALLOCATOR_DISPATCH * Allocator;// Offset=0x48 Size=0x8
};
