struct _BUS_INTERFACE_STANDARD// Size=0x40 (Id=741)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned char  ( * TranslateBusAddress)(void * ,union _LARGE_INTEGER ,unsigned long ,unsigned long * ,union _LARGE_INTEGER * );// Offset=0x20 Size=0x8
    struct _DMA_ADAPTER *  ( * GetDmaAdapter)(void * ,struct _DEVICE_DESCRIPTION * ,unsigned long * );// Offset=0x28 Size=0x8
    unsigned long  ( * SetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
    unsigned long  ( * GetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x38 Size=0x8
};
