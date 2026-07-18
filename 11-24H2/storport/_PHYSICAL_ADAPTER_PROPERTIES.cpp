struct _BUS_INTERFACE_STANDARD// Size=0x40 (Id=1388)
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

struct _RAID_BUS_INTERFACE// Size=0x48 (Id=1353)
{
    unsigned char Initialized;// Offset=0x0 Size=0x1
    struct _BUS_INTERFACE_STANDARD Interface;// Offset=0x8 Size=0x40
};

struct _RAID_RESOURCE_LIST// Size=0x10 (Id=588)
{
    struct _CM_RESOURCE_LIST * AllocatedResources;// Offset=0x0 Size=0x8
    struct _CM_RESOURCE_LIST * TranslatedResources;// Offset=0x8 Size=0x8
};

enum _INTERRUPT_SYNCHRONIZATION_MODE
{
    InterruptSupportNone=0,
    InterruptSynchronizeAll=1,
    InterruptSynchronizePerMessage=2
};

struct _PHYSICAL_ADAPTER_PROPERTIES// Size=0x90 (Id=522)
{
    struct _KINTERRUPT * Interrupt;// Offset=0x0 Size=0x8
    unsigned long InterruptIrql;// Offset=0x8 Size=0x4
    unsigned long InterruptVersion;// Offset=0xc Size=0x4
    struct _RAID_BUS_INTERFACE Bus;// Offset=0x10 Size=0x48
    struct _RAID_RESOURCE_LIST ResourceList;// Offset=0x58 Size=0x10
    enum _INTERRUPT_SYNCHRONIZATION_MODE MsiMode;// Offset=0x68 Size=0x4
    unsigned long long MSIInterruptLock;// Offset=0x70 Size=0x8
    struct _IO_INTERRUPT_MESSAGE_INFO * MSIMessageInfo;// Offset=0x78 Size=0x8
    struct _GROUP_AFFINITY * MSIMessageGroupAffinity;// Offset=0x80 Size=0x8
    unsigned char * InterruptRedirectionTable;// Offset=0x88 Size=0x8
};
