struct _PCI_DEVICE_INFORMATION// Size=0x38 (Id=718)
{
    unsigned long VendorId;// Offset=0x0 Size=0x4
    unsigned long DeviceId;// Offset=0x4 Size=0x4
    unsigned short RevisionId;// Offset=0x8 Size=0x2
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DeviceNumber;// Offset=0x10 Size=0x4
    unsigned long FunctionNumber;// Offset=0x14 Size=0x4
    unsigned short SubVendorID;// Offset=0x18 Size=0x2
    unsigned short SubSystemID;// Offset=0x1a Size=0x2
    void * Context;// Offset=0x20 Size=0x8
    unsigned long  ( * SetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    unsigned long  ( * GetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
};
