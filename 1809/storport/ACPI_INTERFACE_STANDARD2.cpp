struct ACPI_INTERFACE_STANDARD2// Size=0x58 (Id=496)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * GpeConnectVector)(void * ,unsigned long ,enum _KINTERRUPT_MODE ,unsigned char ,unsigned char  ( * )(void * ,void * ),void * ,void ** );// Offset=0x20 Size=0x8
    long  ( * GpeDisconnectVector)(void * ,void * );// Offset=0x28 Size=0x8
    long  ( * GpeEnableEvent)(void * ,void * );// Offset=0x30 Size=0x8
    long  ( * GpeDisableEvent)(void * ,void * );// Offset=0x38 Size=0x8
    long  ( * GpeClearStatus)(void * ,void * );// Offset=0x40 Size=0x8
    long  ( * RegisterForDeviceNotifications)(void * ,void  ( * )(void * ,unsigned long ),void * );// Offset=0x48 Size=0x8
    void  ( * UnregisterForDeviceNotifications)(void * );// Offset=0x50 Size=0x8
};
