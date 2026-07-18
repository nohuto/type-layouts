union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2199)
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

union _WHEA_PCIEXPRESS_VERSION// Size=0x4 (Id=1848)
{
    unsigned char MinorVersion;// Offset=0x0 Size=0x1
    unsigned char MajorVersion;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _WHEA_PCIEXPRESS_COMMAND_STATUS// Size=0x4 (Id=2987)
{
    unsigned short Command;// Offset=0x0 Size=0x2
    unsigned short Status;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCIEXPRESS_DEVICE_ID// Size=0x10 (Id=1867)
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

union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS// Size=0x4 (Id=1756)
{
    unsigned short BridgeSecondaryStatus;// Offset=0x0 Size=0x2
    unsigned short BridgeControl;// Offset=0x2 Size=0x2
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCIEXPRESS_ERROR_SECTION// Size=0xd0 (Id=2789)
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
