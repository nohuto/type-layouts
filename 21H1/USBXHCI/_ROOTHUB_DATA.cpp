struct _ROOTHUB_DATA// Size=0x40 (Id=479)
{
    struct UCXROOTHUB__ * UcxRootHub;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned long NumberOfPorts;// Offset=0x10 Size=0x4
    unsigned short NumberOf20Ports;// Offset=0x14 Size=0x2
    unsigned short NumberOf30Ports;// Offset=0x16 Size=0x2
    unsigned short U1DeviceExitLatency;// Offset=0x18 Size=0x2
    unsigned short U2DeviceExitLatency;// Offset=0x1a Size=0x2
    struct _OPERATIONAL_REGISTERS * OperationalRegisters;// Offset=0x20 Size=0x8
    struct _PORT_REGISTER_SET * PortRegisterSet;// Offset=0x28 Size=0x8
    struct _ROOTHUB_PORT_DATA * PortData;// Offset=0x30 Size=0x8
    unsigned char DebugCapable;// Offset=0x38 Size=0x1
    unsigned char NoInterruptTransfersSinceFDOD0Entry;// Offset=0x39 Size=0x1
};
