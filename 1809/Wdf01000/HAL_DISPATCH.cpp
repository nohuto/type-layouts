struct HAL_DISPATCH// Size=0xb8 (Id=4947)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    long  ( * HalQuerySystemInformation)(enum _HAL_QUERY_INFORMATION_CLASS ,unsigned long ,void * ,unsigned long * );// Offset=0x8 Size=0x8
    long  ( * HalSetSystemInformation)(enum _HAL_SET_INFORMATION_CLASS ,unsigned long ,void * );// Offset=0x10 Size=0x8
    long  ( * HalQueryBusSlots)(struct _BUS_HANDLER * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x18 Size=0x8
    unsigned long Spare1;// Offset=0x20 Size=0x4
    void  ( * HalExamineMBR)(struct _DEVICE_OBJECT * ,unsigned long ,unsigned long ,void ** );// Offset=0x28 Size=0x8
    long  ( * HalIoReadPartitionTable)(struct _DEVICE_OBJECT * ,unsigned long ,unsigned char ,struct _DRIVE_LAYOUT_INFORMATION ** );// Offset=0x30 Size=0x8
    long  ( * HalIoSetPartitionInformation)(struct _DEVICE_OBJECT * ,unsigned long ,unsigned long ,unsigned long );// Offset=0x38 Size=0x8
    long  ( * HalIoWritePartitionTable)(struct _DEVICE_OBJECT * ,unsigned long ,unsigned long ,unsigned long ,struct _DRIVE_LAYOUT_INFORMATION * );// Offset=0x40 Size=0x8
    struct _BUS_HANDLER *  ( * HalReferenceHandlerForBus)(enum _INTERFACE_TYPE ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * HalReferenceBusHandler)(struct _BUS_HANDLER * );// Offset=0x50 Size=0x8
    void  ( * HalDereferenceBusHandler)(struct _BUS_HANDLER * );// Offset=0x58 Size=0x8
    long  ( * HalInitPnpDriver)();// Offset=0x60 Size=0x8
    long  ( * HalInitPowerManagement)(struct _PM_DISPATCH_TABLE * ,struct _PM_DISPATCH_TABLE ** );// Offset=0x68 Size=0x8
    struct _DMA_ADAPTER *  ( * HalGetDmaAdapter)(void * ,struct _DEVICE_DESCRIPTION * ,unsigned long * );// Offset=0x70 Size=0x8
    long  ( * HalGetInterruptTranslator)(enum _INTERFACE_TYPE ,unsigned long ,enum _INTERFACE_TYPE ,unsigned short ,unsigned short ,struct _TRANSLATOR_INTERFACE * ,unsigned long * );// Offset=0x78 Size=0x8
    long  ( * HalStartMirroring)();// Offset=0x80 Size=0x8
    long  ( * HalEndMirroring)(unsigned long );// Offset=0x88 Size=0x8
    long  ( * HalMirrorPhysicalMemory)(union _LARGE_INTEGER ,union _LARGE_INTEGER );// Offset=0x90 Size=0x8
    void  ( * HalEndOfBoot)();// Offset=0x98 Size=0x8
    long  ( * HalMirrorVerify)(union _LARGE_INTEGER ,union _LARGE_INTEGER );// Offset=0xa0 Size=0x8
    void *  ( * HalGetCachedAcpiTable)(unsigned long ,char * ,char * );// Offset=0xa8 Size=0x8
    void  ( * HalSetPciErrorHandlerCallback)(void  ( * )());// Offset=0xb0 Size=0x8
};
