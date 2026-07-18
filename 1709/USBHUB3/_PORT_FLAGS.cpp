union _PORT_FLAGS// Size=0x4 (Id=634)
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
