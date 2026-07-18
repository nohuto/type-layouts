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

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

enum _DMA_WIDTH
{
    Width8Bits=0,
    Width16Bits=1,
    Width32Bits=2,
    Width64Bits=3,
    WidthNoWrap=4,
    MaximumDmaWidth=5
};

enum _DMA_SPEED
{
    Compatible=0,
    TypeA=1,
    TypeB=2,
    TypeC=3,
    TypeF=4,
    MaximumDmaSpeed=5
};

enum _STOR_SYNCHRONIZATION_MODEL
{
    StorSynchronizeHalfDuplex=0,
    StorSynchronizeFullDuplex=1
};

enum _INTERRUPT_SYNCHRONIZATION_MODE
{
    InterruptSupportNone=0,
    InterruptSynchronizeAll=1,
    InterruptSynchronizePerMessage=2
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MEMORY_REGION// Size=0x18 (Id=437)
{
    unsigned char * VirtualBase;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER PhysicalBase;// Offset=0x8 Size=0x8
    unsigned long Length;// Offset=0x10 Size=0x4
};

struct _PORT_CONFIGURATION_INFORMATION// Size=0xe0 (Id=257)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long SystemIoBusNumber;// Offset=0x4 Size=0x4
    enum _INTERFACE_TYPE AdapterInterfaceType;// Offset=0x8 Size=0x4
    unsigned long BusInterruptLevel;// Offset=0xc Size=0x4
    unsigned long BusInterruptVector;// Offset=0x10 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x14 Size=0x4
    unsigned long MaximumTransferLength;// Offset=0x18 Size=0x4
    unsigned long NumberOfPhysicalBreaks;// Offset=0x1c Size=0x4
    unsigned long DmaChannel;// Offset=0x20 Size=0x4
    unsigned long DmaPort;// Offset=0x24 Size=0x4
    enum _DMA_WIDTH DmaWidth;// Offset=0x28 Size=0x4
    enum _DMA_SPEED DmaSpeed;// Offset=0x2c Size=0x4
    unsigned long AlignmentMask;// Offset=0x30 Size=0x4
    unsigned long NumberOfAccessRanges;// Offset=0x34 Size=0x4
    struct _ACCESS_RANGE * AccessRanges[0];// Offset=0x38 Size=0x8
    void * MiniportDumpData;// Offset=0x40 Size=0x8
    unsigned char NumberOfBuses;// Offset=0x48 Size=0x1
    char InitiatorBusId[8];// Offset=0x49 Size=0x8
    unsigned char ScatterGather;// Offset=0x51 Size=0x1
    unsigned char Master;// Offset=0x52 Size=0x1
    unsigned char CachesData;// Offset=0x53 Size=0x1
    unsigned char AdapterScansDown;// Offset=0x54 Size=0x1
    unsigned char AtdiskPrimaryClaimed;// Offset=0x55 Size=0x1
    unsigned char AtdiskSecondaryClaimed;// Offset=0x56 Size=0x1
    unsigned char Dma32BitAddresses;// Offset=0x57 Size=0x1
    unsigned char DemandMode;// Offset=0x58 Size=0x1
    unsigned char MapBuffers;// Offset=0x59 Size=0x1
    unsigned char NeedPhysicalAddresses;// Offset=0x5a Size=0x1
    unsigned char TaggedQueuing;// Offset=0x5b Size=0x1
    unsigned char AutoRequestSense;// Offset=0x5c Size=0x1
    unsigned char MultipleRequestPerLu;// Offset=0x5d Size=0x1
    unsigned char ReceiveEvent;// Offset=0x5e Size=0x1
    unsigned char RealModeInitialized;// Offset=0x5f Size=0x1
    unsigned char BufferAccessScsiPortControlled;// Offset=0x60 Size=0x1
    unsigned char MaximumNumberOfTargets;// Offset=0x61 Size=0x1
    unsigned char SrbType;// Offset=0x62 Size=0x1
    unsigned char AddressType;// Offset=0x63 Size=0x1
    unsigned long SlotNumber;// Offset=0x64 Size=0x4
    unsigned long BusInterruptLevel2;// Offset=0x68 Size=0x4
    unsigned long BusInterruptVector2;// Offset=0x6c Size=0x4
    enum _KINTERRUPT_MODE InterruptMode2;// Offset=0x70 Size=0x4
    unsigned long DmaChannel2;// Offset=0x74 Size=0x4
    unsigned long DmaPort2;// Offset=0x78 Size=0x4
    enum _DMA_WIDTH DmaWidth2;// Offset=0x7c Size=0x4
    enum _DMA_SPEED DmaSpeed2;// Offset=0x80 Size=0x4
    unsigned long DeviceExtensionSize;// Offset=0x84 Size=0x4
    unsigned long SpecificLuExtensionSize;// Offset=0x88 Size=0x4
    unsigned long SrbExtensionSize;// Offset=0x8c Size=0x4
    unsigned char Dma64BitAddresses;// Offset=0x90 Size=0x1
    unsigned char ResetTargetSupported;// Offset=0x91 Size=0x1
    unsigned char MaximumNumberOfLogicalUnits;// Offset=0x92 Size=0x1
    unsigned char WmiDataProvider;// Offset=0x93 Size=0x1
    enum _STOR_SYNCHRONIZATION_MODEL SynchronizationModel;// Offset=0x94 Size=0x4
    unsigned char  ( * HwMSInterruptRoutine)(void * ,unsigned long );// Offset=0x98 Size=0x8
    enum _INTERRUPT_SYNCHRONIZATION_MODE InterruptSynchronizationMode;// Offset=0xa0 Size=0x4
    struct _MEMORY_REGION DumpRegion;// Offset=0xa8 Size=0x18
    unsigned long RequestedDumpBufferSize;// Offset=0xc0 Size=0x4
    unsigned char VirtualDevice;// Offset=0xc4 Size=0x1
    unsigned char DumpMode;// Offset=0xc5 Size=0x1
    unsigned long ExtendedFlags1;// Offset=0xc8 Size=0x4
    unsigned long MaxNumberOfIO;// Offset=0xcc Size=0x4
    unsigned long MaxIOsPerLun;// Offset=0xd0 Size=0x4
    unsigned long InitialLunQueueDepth;// Offset=0xd4 Size=0x4
    unsigned long BusResetHoldTime;// Offset=0xd8 Size=0x4
    unsigned long FeatureSupport;// Offset=0xdc Size=0x4
};

struct _unnamed_260// Size=0x1 (Id=260)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char InFindAdapter:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char InResetBus:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char IsVirtual:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnitControlListPopulated:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AdapterControlListPopulated:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
};

struct _UNIT_CONTROL_LIST// Size=0x10 (Id=485)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[12];// Offset=0x4 Size=0xc
};

struct _ADAPTER_CONTROL_LIST// Size=0x18 (Id=451)
{
    unsigned long MaxControlType;// Offset=0x0 Size=0x4
    unsigned char SupportedTypeList[19];// Offset=0x4 Size=0x13
};

struct _RAID_MINIPORT// Size=0x128 (Id=261)
{
    struct _RAID_ADAPTER_EXTENSION * Adapter;// Offset=0x0 Size=0x8
    struct _PORT_CONFIGURATION_INFORMATION PortConfiguration;// Offset=0x8 Size=0xe0
    struct _HW_INITIALIZATION_DATA * HwInitializationData;// Offset=0xe8 Size=0x8
    struct _RAID_HW_DEVICE_EXT * PrivateDeviceExt;// Offset=0xf0 Size=0x8
    struct _unnamed_260 Flags;// Offset=0xf8 Size=0x1
    struct _UNIT_CONTROL_LIST UnitControlList;// Offset=0xfc Size=0x10
    struct _ADAPTER_CONTROL_LIST AdapterControlList;// Offset=0x10c Size=0x18
};
