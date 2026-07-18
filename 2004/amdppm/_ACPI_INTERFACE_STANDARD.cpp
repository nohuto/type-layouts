struct _ACPI_INTERFACE_STANDARD// Size=0x58 (Id=588)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * GpeConnectVector)(struct _DEVICE_OBJECT * ,unsigned long ,enum _KINTERRUPT_MODE ,unsigned char ,unsigned char  ( * )(void * ,void * ),void * ,void * );// Offset=0x20 Size=0x8
    long  ( * GpeDisconnectVector)(void * );// Offset=0x28 Size=0x8
    long  ( * GpeEnableEvent)(struct _DEVICE_OBJECT * ,void * );// Offset=0x30 Size=0x8
    long  ( * GpeDisableEvent)(struct _DEVICE_OBJECT * ,void * );// Offset=0x38 Size=0x8
    long  ( * GpeClearStatus)(struct _DEVICE_OBJECT * ,void * );// Offset=0x40 Size=0x8
    long  ( * RegisterForDeviceNotifications)(struct _DEVICE_OBJECT * ,void  ( * )(void * ,unsigned long ),void * );// Offset=0x48 Size=0x8
    void  ( * UnregisterForDeviceNotifications)(struct _DEVICE_OBJECT * ,void  ( * )(void * ,unsigned long ));// Offset=0x50 Size=0x8
};
