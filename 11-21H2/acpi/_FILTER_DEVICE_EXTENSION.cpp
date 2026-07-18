struct _PCI_FILTER_EXTENSION// Size=0x14 (Id=716)
{
    long Flags;// Offset=0x0 Size=0x4
    unsigned long Address;// Offset=0x4 Size=0x4
    unsigned char HeaderType;// Offset=0x8 Size=0x1
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long SecondaryBusNumber;// Offset=0x10 Size=0x4
};

struct _FILTER_DEVICE_EXTENSION// Size=0x58 (Id=696)
{
    struct WORK_QUEUE_CONTEXT WorkContext;// Offset=0x0 Size=0x30
    struct _BUS_INTERFACE_STANDARD * Interface;// Offset=0x30 Size=0x8
    struct _PCI_FILTER_EXTENSION PciFilter;// Offset=0x38 Size=0x14
    struct _IO_RESOURCE_LIST * SidebandResources;// Offset=0x50 Size=0x8
};
