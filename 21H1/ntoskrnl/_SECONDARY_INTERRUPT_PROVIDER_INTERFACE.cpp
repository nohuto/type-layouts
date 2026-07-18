struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE// Size=0x58 (Id=319)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    unsigned long GsivBase;// Offset=0x10 Size=0x4
    unsigned short GsivSize;// Offset=0x14 Size=0x2
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x18 Size=0x8
    void * Reserved1;// Offset=0x20 Size=0x8
    void * Reserved2;// Offset=0x28 Size=0x8
    void * Reserved3;// Offset=0x30 Size=0x8
    void * Reserved4;// Offset=0x38 Size=0x8
    void * Reserved5;// Offset=0x40 Size=0x8
    void * Reserved6;// Offset=0x48 Size=0x8
    void * Reserved7;// Offset=0x50 Size=0x8
};
