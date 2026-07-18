enum _INTERFACE_TYPE
{
    InterfaceTypeUndefined=-1,
    Internal=0,
    Isa=1,
    Eisa=2,
    MicroChannel=3,
    TurboChannel=4,
    PCIBus=5,
    VMEBus=6,
    NuBus=7,
    PCMCIABus=8,
    CBus=9,
    MPIBus=10,
    MPSABus=11,
    ProcessorInternal=12,
    InternalPowerBus=13,
    PNPISABus=14,
    PNPBus=15,
    Vmcs=16,
    ACPIBus=17,
    MaximumInterfaceType=18
};

enum _BUS_DATA_TYPE
{
    ConfigurationSpaceUndefined=-1,
    Cmos=0,
    EisaConfiguration=1,
    Pos=2,
    CbusConfiguration=3,
    PCIConfiguration=4,
    VMEConfiguration=5,
    NuBusConfiguration=6,
    PCMCIAConfiguration=7,
    MPIConfiguration=8,
    MPSAConfiguration=9,
    PNPISAConfiguration=10,
    SgiInternalConfiguration=11,
    MaximumBusDataType=12
};

struct _BUS_HANDLER// Size=0xb0 (Id=1476)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _INTERFACE_TYPE InterfaceType;// Offset=0x4 Size=0x4
    enum _BUS_DATA_TYPE ConfigurationType;// Offset=0x8 Size=0x4
    unsigned long BusNumber;// Offset=0xc Size=0x4
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x10 Size=0x8
    struct _BUS_HANDLER * ParentHandler;// Offset=0x18 Size=0x8
    void * BusData;// Offset=0x20 Size=0x8
    unsigned long DeviceControlExtensionSize;// Offset=0x28 Size=0x4
    struct _SUPPORTED_RANGES * BusAddresses;// Offset=0x30 Size=0x8
    unsigned long Reserved[4];// Offset=0x38 Size=0x10
    unsigned long  ( * GetBusData)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x48 Size=0x8
    unsigned long  ( * SetBusData)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x50 Size=0x8
    long  ( * AdjustResourceList)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,struct _IO_RESOURCE_REQUIREMENTS_LIST ** );// Offset=0x58 Size=0x8
    long  ( * AssignSlotResources)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING * ,struct _DRIVER_OBJECT * ,struct _DEVICE_OBJECT * ,unsigned long ,struct _CM_RESOURCE_LIST ** );// Offset=0x60 Size=0x8
    unsigned char  ( * TranslateBusAddress)(struct _BUS_HANDLER * ,struct _BUS_HANDLER * ,union _LARGE_INTEGER ,unsigned long * ,union _LARGE_INTEGER * );// Offset=0x68 Size=0x8
    void * Spare1;// Offset=0x70 Size=0x8
    void * Spare2;// Offset=0x78 Size=0x8
    void * Spare3;// Offset=0x80 Size=0x8
    void * Spare4;// Offset=0x88 Size=0x8
    void * Spare5;// Offset=0x90 Size=0x8
    void * Spare6;// Offset=0x98 Size=0x8
    void * Spare7;// Offset=0xa0 Size=0x8
    void * Spare8;// Offset=0xa8 Size=0x8
};
