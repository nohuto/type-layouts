union _HCCPARAMS// Size=0x4 (Id=430)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AddressingCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long BwNegotiationCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ContextSize:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PortPowerControl:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PortIndicators:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long LightHCResetCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long LatencyToleranceMessagingCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long NoSecondarySidSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ParseAllEventData:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long StoppedShortPacketCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long StoppedEDTLACapability:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ContiguousFrameIDCapability:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long MaximumPrimaryStreamArraySize:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long XhciExtendedCapabilitiesPointer:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _HCCPARAMS2// Size=0x4 (Id=645)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long U3EntryCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ConfigureEndpointCommandMaxExitLatencyCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ForceSaveContextCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ComplianceTransitionCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LargeESITPayloadCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ConfigurationInformationCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ExtendedTBCCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
};

struct _REGISTER_DATA// Size=0x80 (Id=422)
{
    void * WdfRegister;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    unsigned char RegistersMapped;// Offset=0x10 Size=0x1
    unsigned long RegisterMapLength;// Offset=0x14 Size=0x4
    struct _CAPABILITY_REGISTERS * CapabilityRegisters;// Offset=0x18 Size=0x8
    struct _OPERATIONAL_REGISTERS * OperationalRegisters;// Offset=0x20 Size=0x8
    struct _RUNTIME_REGISTERS * RuntimeRegisters;// Offset=0x28 Size=0x8
    union _DOORBELL_REGISTER * DoorbellRegisters;// Offset=0x30 Size=0x8
    union _EXTENDED_CAPABILITY * ExtendedCapabilityRegisters;// Offset=0x38 Size=0x8
    union _USBLEGSUPCAPABILITY * UsbLegSupCapability;// Offset=0x40 Size=0x8
    struct _DEBUG_CAPABILITY * DebugCapability;// Offset=0x48 Size=0x8
    unsigned long SupportedNumberOfDeviceSlots;// Offset=0x50 Size=0x4
    unsigned long SupportedNumberOfInterrupters;// Offset=0x54 Size=0x4
    unsigned long SupportedNumberOfPorts;// Offset=0x58 Size=0x4
    unsigned long MaxEventRingSegments;// Offset=0x5c Size=0x4
    unsigned long MaxScratchpadBuffers;// Offset=0x60 Size=0x4
    unsigned short U1DeviceExitLatency;// Offset=0x64 Size=0x2
    unsigned short U2DeviceExitLatency;// Offset=0x66 Size=0x2
    union _HCCPARAMS CachedHccParams;// Offset=0x68 Size=0x4
    union _HCCPARAMS2 CachedHccParams2;// Offset=0x6c Size=0x4
    unsigned long SupportedNumberOfStreams;// Offset=0x70 Size=0x4
    unsigned long CHTSavedRegisterBits;// Offset=0x74 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * SecureObjectHandle;// Offset=0x78 Size=0x8
};
