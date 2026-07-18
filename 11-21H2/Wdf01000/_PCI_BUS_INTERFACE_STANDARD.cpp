struct _PCI_BUS_INTERFACE_STANDARD// Size=0x58 (Id=1556)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long  ( * ReadConfig)(void * ,unsigned long ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    unsigned long  ( * WriteConfig)(void * ,unsigned long ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    void  ( * PinToLine)(void * ,struct _PCI_COMMON_CONFIG * );// Offset=0x30 Size=0x8
    void  ( * LineToPin)(void * ,struct _PCI_COMMON_CONFIG * ,struct _PCI_COMMON_CONFIG * );// Offset=0x38 Size=0x8
    void  ( * RootBusCapability)(void * ,struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY * );// Offset=0x40 Size=0x8
    void  ( * ExpressWakeControl)(void * ,unsigned char );// Offset=0x48 Size=0x8
    void  ( * PrepareMultistageResume)(void * );// Offset=0x50 Size=0x8
};
