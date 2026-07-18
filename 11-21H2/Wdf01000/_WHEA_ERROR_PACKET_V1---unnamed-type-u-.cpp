union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3442)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ProcessorType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long InstructionSet:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Operation:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Flags:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Level:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long CPUVersion:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CPUBrandString:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long ProcessorId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long TargetAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ResponderId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long InstructionPointer:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long NativeModelId:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long Reserved:50;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x32
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION// Size=0xc0 (Id=719)
{
    union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned char ProcessorType;// Offset=0x8 Size=0x1
    unsigned char InstructionSet;// Offset=0x9 Size=0x1
    unsigned char ErrorType;// Offset=0xa Size=0x1
    unsigned char Operation;// Offset=0xb Size=0x1
    unsigned char Flags;// Offset=0xc Size=0x1
    unsigned char Level;// Offset=0xd Size=0x1
    unsigned short Reserved;// Offset=0xe Size=0x2
    unsigned long long CPUVersion;// Offset=0x10 Size=0x8
    unsigned char CPUBrandString[128];// Offset=0x18 Size=0x80
    unsigned long long ProcessorId;// Offset=0x98 Size=0x8
    unsigned long long TargetAddress;// Offset=0xa0 Size=0x8
    unsigned long long RequesterId;// Offset=0xa8 Size=0x8
    unsigned long long ResponderId;// Offset=0xb0 Size=0x8
    unsigned long long InstructionPointer;// Offset=0xb8 Size=0x8
};

union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3379)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PhysicalAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PhysicalAddressMask:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Node:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Card:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Module:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Bank:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long Device:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Row:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Column:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long BitPosition:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long ResponderId:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long RankNumber:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long CardHandle:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long ModuleHandle:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long ExtendedRow:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long BankGroup:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long BankAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long ChipIdentification:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long Reserved:42;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x2a
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_ERROR_STATUS// Size=0x8 (Id=2956)
{
    unsigned long long ErrorStatus;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved1:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long ErrorType:8;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x8
        unsigned long long Address:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long Control:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long Data:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long Responder:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long Requester:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long FirstError:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long Overflow:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long Reserved2:41;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x29
    };
};

struct _WHEA_MEMORY_ERROR_SECTION// Size=0x50 (Id=486)
{
    union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    unsigned long long PhysicalAddress;// Offset=0x10 Size=0x8
    unsigned long long PhysicalAddressMask;// Offset=0x18 Size=0x8
    unsigned short Node;// Offset=0x20 Size=0x2
    unsigned short Card;// Offset=0x22 Size=0x2
    unsigned short Module;// Offset=0x24 Size=0x2
    unsigned short Bank;// Offset=0x26 Size=0x2
    unsigned short Device;// Offset=0x28 Size=0x2
    unsigned short Row;// Offset=0x2a Size=0x2
    unsigned short Column;// Offset=0x2c Size=0x2
    unsigned short BitPosition;// Offset=0x2e Size=0x2
    unsigned long long RequesterId;// Offset=0x30 Size=0x8
    unsigned long long ResponderId;// Offset=0x38 Size=0x8
    unsigned long long TargetId;// Offset=0x40 Size=0x8
    unsigned char ErrorType;// Offset=0x48 Size=0x1
    unsigned char Extended;// Offset=0x49 Size=0x1
    unsigned short RankNumber;// Offset=0x4a Size=0x2
    unsigned short CardHandle;// Offset=0x4c Size=0x2
    unsigned short ModuleHandle;// Offset=0x4e Size=0x2
};

union _WHEA_NMI_ERROR_SECTION_FLAGS// Size=0x4 (Id=1758)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long HypervisorError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_NMI_ERROR_SECTION// Size=0xc (Id=1884)
{
    unsigned char Data[8];// Offset=0x0 Size=0x8
    union _WHEA_NMI_ERROR_SECTION_FLAGS Flags;// Offset=0x8 Size=0x4
};

union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=1833)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PortType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Version:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CommandStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DeviceId:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long DeviceSerialNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long BridgeControlStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long ExpressCapability:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long AerInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Reserved:56;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x38
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

enum _WHEA_PCIEXPRESS_DEVICE_TYPE
{
    WheaPciExpressEndpoint=0,
    WheaPciExpressLegacyEndpoint=1,
    WheaPciExpressRootPort=4,
    WheaPciExpressUpstreamSwitchPort=5,
    WheaPciExpressDownstreamSwitchPort=6,
    WheaPciExpressToPciXBridge=7,
    WheaPciXToExpressBridge=8,
    WheaPciExpressRootComplexIntegratedEndpoint=9,
    WheaPciExpressRootComplexEventCollector=10
};

union _WHEA_PCIEXPRESS_VERSION// Size=0x4 (Id=1030)
{
    unsigned char MinorVersion;// Offset=0x0 Size=0x1
    unsigned char MajorVersion;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _WHEA_PCIEXPRESS_COMMAND_STATUS// Size=0x4 (Id=3386)
{
    unsigned short Command;// Offset=0x0 Size=0x2
    unsigned short Status;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCIEXPRESS_DEVICE_ID// Size=0x10 (Id=1105)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    struct // Size=0xc (Id=0)
    {
        unsigned long ClassCode:24;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long FunctionNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long DeviceNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Segment:16;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long PrimaryBusNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long SecondaryBusNumber:8;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved1:3;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long SlotNumber:13;// Offset=0xc Size=0x4 BitOffset=0xb BitSize=0xd
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS// Size=0x4 (Id=646)
{
    unsigned short BridgeSecondaryStatus;// Offset=0x0 Size=0x2
    unsigned short BridgeControl;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCIEXPRESS_ERROR_SECTION// Size=0xd0 (Id=3084)
{
    union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    enum _WHEA_PCIEXPRESS_DEVICE_TYPE PortType;// Offset=0x8 Size=0x4
    union _WHEA_PCIEXPRESS_VERSION Version;// Offset=0xc Size=0x4
    union _WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;// Offset=0x10 Size=0x4
    unsigned long Reserved;// Offset=0x14 Size=0x4
    struct _WHEA_PCIEXPRESS_DEVICE_ID DeviceId;// Offset=0x18 Size=0x10
    unsigned long long DeviceSerialNumber;// Offset=0x28 Size=0x8
    union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;// Offset=0x30 Size=0x4
    unsigned char ExpressCapability[60];// Offset=0x34 Size=0x3c
    unsigned char AerInfo[96];// Offset=0x70 Size=0x60
};

union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2598)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long ErrorType:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long BusId:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long BusAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long BusData:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long BusCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long RequesterId:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long CompleterId:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Reserved:55;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x37
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_PCIXBUS_ID// Size=0x2 (Id=1679)
{
    unsigned char BusNumber;// Offset=0x0 Size=0x1
    unsigned char BusSegment;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _WHEA_PCIXBUS_COMMAND// Size=0x8 (Id=2381)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Command:56;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x38
        unsigned long long PCIXCommand:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x7
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

struct _WHEA_PCIXBUS_ERROR_SECTION// Size=0x48 (Id=2005)
{
    union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    unsigned short ErrorType;// Offset=0x10 Size=0x2
    union _WHEA_PCIXBUS_ID BusId;// Offset=0x12 Size=0x2
    unsigned long Reserved;// Offset=0x14 Size=0x4
    unsigned long long BusAddress;// Offset=0x18 Size=0x8
    unsigned long long BusData;// Offset=0x20 Size=0x8
    union _WHEA_PCIXBUS_COMMAND BusCommand;// Offset=0x28 Size=0x8
    unsigned long long RequesterId;// Offset=0x30 Size=0x8
    unsigned long long CompleterId;// Offset=0x38 Size=0x8
    unsigned long long TargetId;// Offset=0x40 Size=0x8
};

union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=1893)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long IdInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long MemoryNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long RegisterDataPairs:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_PCIXDEVICE_ID// Size=0x10 (Id=1163)
{
    unsigned short VendorId;// Offset=0x0 Size=0x2
    unsigned short DeviceId;// Offset=0x2 Size=0x2
    struct // Size=0x8 (Id=0)
    {
        unsigned long ClassCode:24;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long FunctionNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long DeviceNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long BusNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long SegmentNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long Reserved1:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long Reserved2;// Offset=0xc Size=0x4
};

struct _WHEA_PCIXDEVICE_ERROR_SECTION// Size=0x38 (Id=2668)
{
    union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x8 Size=0x8
    struct _WHEA_PCIXDEVICE_ID IdInfo;// Offset=0x10 Size=0x10
    unsigned long MemoryNumber;// Offset=0x20 Size=0x4
    unsigned long IoNumber;// Offset=0x24 Size=0x4
    struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[1];// Offset=0x28 Size=0x10
};

union _WHEA_PMEM_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2097)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ErrorStatus:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NFITHandle:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long LocationInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_PMEM_PAGE_RANGE// Size=0x18 (Id=2169)
{
    unsigned long long StartingPfn;// Offset=0x0 Size=0x8
    unsigned long long PageCount;// Offset=0x8 Size=0x8
    unsigned long long MarkedBadBitmap;// Offset=0x10 Size=0x8
};

struct _WHEA_PMEM_ERROR_SECTION// Size=0x70 (Id=2999)
{
    union _WHEA_PMEM_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned char LocationInfo[64];// Offset=0x8 Size=0x40
    union _WHEA_ERROR_STATUS ErrorStatus;// Offset=0x48 Size=0x8
    unsigned long NFITHandle;// Offset=0x50 Size=0x4
    unsigned long PageRangeCount;// Offset=0x54 Size=0x4
    struct _WHEA_PMEM_PAGE_RANGE PageRange[1];// Offset=0x58 Size=0x18
};

union _WHEA_ERROR_PACKET_V1::<unnamed-type-u>// Size=0xd0 (Id=3480)
{
    union // Size=0xd0 (Id=0)
    {
        struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION ProcessorError;// Offset=0x0 Size=0xc0
        struct _WHEA_MEMORY_ERROR_SECTION MemoryError;// Offset=0x0 Size=0x50
        struct _WHEA_NMI_ERROR_SECTION NmiError;// Offset=0x0 Size=0xc
        struct _WHEA_PCIEXPRESS_ERROR_SECTION PciExpressError;// Offset=0x0 Size=0xd0
        struct _WHEA_PCIXBUS_ERROR_SECTION PciXBusError;// Offset=0x0 Size=0x48
        struct _WHEA_PCIXDEVICE_ERROR_SECTION PciXDeviceError;// Offset=0x0 Size=0x38
        struct _WHEA_PMEM_ERROR_SECTION PmemError;// Offset=0x0 Size=0x70
    };
};
