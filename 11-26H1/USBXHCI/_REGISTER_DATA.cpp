enum _VTIO_PROGRAMMING_METHOD
{
    VTIO_None=0,
    VTIO_Intel_Dual_BDF_Legacy_V1=1,
    VTIO_Intel_Dual_BDF_Interim_V2=2,
    VTIO_XHCI_SPEC_1_2_Dual_BDF_V3=3,
    VTIO_Single_BDF=4
};

union _HCSPARAMS1// Size=0x4 (Id=943)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NumberOfDeviceSlots:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NumberOfInterrupters:11;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xb
        unsigned long Reserved0:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long NumberOfPorts:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _HCSPARAMS2// Size=0x4 (Id=994)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsochSchedulingThreshold:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long EventRingSegmentTableMax:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Reserved0:13;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xd
        unsigned long MaxScratchpadBuffersHi:5;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x5
        unsigned long ScratchpadRestore:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MaxScratchpadBuffers:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
};

union _HCSPARAMS3// Size=0x4 (Id=746)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long U1DeviceExitLatency:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long U2DeviceExitLatency:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _HCCPARAMS// Size=0x4 (Id=513)
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

union _HCCPARAMS2// Size=0x4 (Id=781)
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
        unsigned long ExtendedTBCTRBStatusCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long GetSetExtendedPropertyCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long VTIOCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DIIBCapability:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long E2V2Capability:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Reserved2:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};

union _EXTENDED_CAPABILITY_IDENTIFIER// Size=0x2 (Id=1011)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SidebandAudioExtendedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xb
        unsigned short VendorDefinedExtendedCapability:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _REGISTER_DATA// Size=0x90 (Id=505)
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
    enum _VTIO_PROGRAMMING_METHOD VTIOProgrammingMethod;// Offset=0x50 Size=0x4
    union _HCSPARAMS1 CachedHcsParams1;// Offset=0x54 Size=0x4
    union _HCSPARAMS2 CachedHcsParams2;// Offset=0x58 Size=0x4
    unsigned long MaxEventRingSegments;// Offset=0x5c Size=0x4
    unsigned long MaxScratchpadBuffers;// Offset=0x60 Size=0x4
    union _HCSPARAMS3 CachedHcsParams3;// Offset=0x64 Size=0x4
    union _HCCPARAMS CachedHccParams1;// Offset=0x68 Size=0x4
    union _HCCPARAMS2 CachedHccParams2;// Offset=0x6c Size=0x4
    union _EXTENDED_CAPABILITY_IDENTIFIER ExtendedCapabilityIdentifier;// Offset=0x70 Size=0x2
    unsigned long SupportedNumberOfStreams;// Offset=0x74 Size=0x4
    unsigned long CHTSavedRegisterBits;// Offset=0x78 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * SecureObjectHandle;// Offset=0x80 Size=0x8
    unsigned char AssignDoorbellsToVTL0InSecureMode;// Offset=0x88 Size=0x1
    unsigned char AssignRuntimeRegistersToVTL0InSecureMode;// Offset=0x89 Size=0x1
    unsigned long First30Port;// Offset=0x8c Size=0x4
};
