union _PORT_FLAGS// Size=0x4 (Id=656)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortFlagRemovable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PortFlagAcpiUpcValid:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PortFlagAcpiPldValid:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PortFlagDebugCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PortFlagIntegratedHubImplemented:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PortFlagRegisteredWithConnectorMap:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PortFlagUsb20HardwareLpmSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PortFlagUsb20HardwareLpmBeslCapabilitySupported:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PortFlagEnhancedSuperSpeed:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PortFlagTypeCWithoutSwitch:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
    };
};

enum _PORT_PROTOCOL
{
    PortProtocolInvalid=0,
    PortProtocolUsb20=512,
    PortProtocolUsb30=768
};

struct _PORT_INFORMATION// Size=0x28 (Id=606)
{
    unsigned short PortNumber;// Offset=0x0 Size=0x2
    unsigned char TotalHubDepth;// Offset=0x2 Size=0x1
    union _PORT_FLAGS PortFlags;// Offset=0x4 Size=0x4
    enum _PORT_PROTOCOL PortProtocol;// Offset=0x8 Size=0x4
    unsigned short FirstMapped30PortNumber;// Offset=0xc Size=0x2
    unsigned short LastMapped30PortNumber;// Offset=0xe Size=0x2
    unsigned long InterconnectType;// Offset=0x10 Size=0x4
    unsigned long SuperSpeedPlusIsochBurstCount;// Offset=0x14 Size=0x4
    union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED * SublinkSpeedAttr;// Offset=0x18 Size=0x8
    unsigned long SublinkSpeedAttrCount;// Offset=0x20 Size=0x4
    unsigned short PortNumberForInstanceId;// Offset=0x24 Size=0x2
};
