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

struct _HW_INITIALIZATION_DATA// Size=0xd0 (Id=258)
{
    unsigned long HwInitializationDataSize;// Offset=0x0 Size=0x4
    enum _INTERFACE_TYPE AdapterInterfaceType;// Offset=0x4 Size=0x4
    unsigned char  ( * HwInitialize)(void * );// Offset=0x8 Size=0x8
    unsigned char  ( * HwStartIo)(void * ,struct _SCSI_REQUEST_BLOCK * );// Offset=0x10 Size=0x8
    unsigned char  ( * HwInterrupt)(void * );// Offset=0x18 Size=0x8
    void * HwFindAdapter;// Offset=0x20 Size=0x8
    unsigned char  ( * HwResetBus)(void * ,unsigned long );// Offset=0x28 Size=0x8
    void  ( * HwDmaStarted)(void * );// Offset=0x30 Size=0x8
    unsigned char  ( * HwAdapterState)(void * ,void * ,unsigned char );// Offset=0x38 Size=0x8
    unsigned long DeviceExtensionSize;// Offset=0x40 Size=0x4
    unsigned long SpecificLuExtensionSize;// Offset=0x44 Size=0x4
    unsigned long SrbExtensionSize;// Offset=0x48 Size=0x4
    unsigned long NumberOfAccessRanges;// Offset=0x4c Size=0x4
    void * Reserved;// Offset=0x50 Size=0x8
    unsigned char MapBuffers;// Offset=0x58 Size=0x1
    unsigned char NeedPhysicalAddresses;// Offset=0x59 Size=0x1
    unsigned char TaggedQueuing;// Offset=0x5a Size=0x1
    unsigned char AutoRequestSense;// Offset=0x5b Size=0x1
    unsigned char MultipleRequestPerLu;// Offset=0x5c Size=0x1
    unsigned char ReceiveEvent;// Offset=0x5d Size=0x1
    unsigned short VendorIdLength;// Offset=0x5e Size=0x2
    void * VendorId;// Offset=0x60 Size=0x8
    union // Size=0x2 (Id=0)
    {
        unsigned short ReservedUshort;// Offset=0x68 Size=0x2
        unsigned short PortVersionFlags;// Offset=0x68 Size=0x2
    };
    unsigned short DeviceIdLength;// Offset=0x6a Size=0x2
    void * DeviceId;// Offset=0x70 Size=0x8
    enum _SCSI_ADAPTER_CONTROL_STATUS  ( * HwAdapterControl)(void * ,enum _SCSI_ADAPTER_CONTROL_TYPE ,void * );// Offset=0x78 Size=0x8
    unsigned char  ( * HwBuildIo)(void * ,struct _SCSI_REQUEST_BLOCK * );// Offset=0x80 Size=0x8
    void  ( * HwFreeAdapterResources)(void * );// Offset=0x88 Size=0x8
    void  ( * HwProcessServiceRequest)(void * ,void * );// Offset=0x90 Size=0x8
    void  ( * HwCompleteServiceIrp)(void * );// Offset=0x98 Size=0x8
    void  ( * HwInitializeTracing)(void * ,void * );// Offset=0xa0 Size=0x8
    void  ( * HwCleanupTracing)(void * );// Offset=0xa8 Size=0x8
    void  ( * HwTracingEnabled)(void * ,unsigned char );// Offset=0xb0 Size=0x8
    unsigned long FeatureSupport;// Offset=0xb8 Size=0x4
    unsigned long SrbTypeFlags;// Offset=0xbc Size=0x4
    unsigned long AddressTypeFlags;// Offset=0xc0 Size=0x4
    unsigned long Reserved1;// Offset=0xc4 Size=0x4
    enum _SCSI_UNIT_CONTROL_STATUS  ( * HwUnitControl)(void * ,enum _SCSI_UNIT_CONTROL_TYPE ,void * );// Offset=0xc8 Size=0x8
};
