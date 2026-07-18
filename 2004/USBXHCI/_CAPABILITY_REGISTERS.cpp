union _HCLENGTHVERSION// Size=0x4 (Id=506)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CapabilityRegisterLength:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MinorRevision:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long MajorRevision:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _HCSPARAMS1// Size=0x4 (Id=831)
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

union _HCSPARAMS2// Size=0x4 (Id=877)
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

union _HCSPARAMS3// Size=0x4 (Id=651)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long U1DeviceExitLatency:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved0:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long U2DeviceExitLatency:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _HCCPARAMS// Size=0x4 (Id=450)
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

union _HCCPARAMS2// Size=0x4 (Id=682)
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
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
};

struct _CAPABILITY_REGISTERS// Size=0x20 (Id=443)
{
    union _HCLENGTHVERSION LengthVersion;// Offset=0x0 Size=0x4
    union _HCSPARAMS1 StructuralParameters1;// Offset=0x4 Size=0x4
    union _HCSPARAMS2 StructuralParameters2;// Offset=0x8 Size=0x4
    union _HCSPARAMS3 StructuralParameters3;// Offset=0xc Size=0x4
    union _HCCPARAMS CapabilityParameters;// Offset=0x10 Size=0x4
    unsigned long DoorbellOffset;// Offset=0x14 Size=0x4
    unsigned long RuntimeRegisterSpaceOffset;// Offset=0x18 Size=0x4
    union _HCCPARAMS2 CapabilityParameters2;// Offset=0x1c Size=0x4
};
