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

struct _HAL_BUS_INFORMATION// Size=0x10 (Id=1505)
{
    enum _INTERFACE_TYPE BusType;// Offset=0x0 Size=0x4
    enum _BUS_DATA_TYPE ConfigurationType;// Offset=0x4 Size=0x4
    unsigned long BusNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};
