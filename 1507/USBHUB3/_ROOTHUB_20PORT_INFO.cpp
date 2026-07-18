union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS// Size=0x1 (Id=653)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char L1CapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char BeslLpmCapabilitySupported:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

struct _ROOTHUB_20PORT_INFO// Size=0x14 (Id=639)
{
    unsigned short PortNumber;// Offset=0x0 Size=0x2
    unsigned char MinorRevision;// Offset=0x2 Size=0x1
    unsigned char HubDepth;// Offset=0x3 Size=0x1
    enum TRISTATE Removable;// Offset=0x4 Size=0x4
    enum TRISTATE IntegratedHubImplemented;// Offset=0x8 Size=0x4
    enum TRISTATE DebugCapable;// Offset=0xc Size=0x4
    union _CONTROLLER_USB_20_HARDWARE_LPM_FLAGS ControllerUsb20HardwareLpmFlags;// Offset=0x10 Size=0x1
};
