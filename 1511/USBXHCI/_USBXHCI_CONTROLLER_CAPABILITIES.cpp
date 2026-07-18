struct _USBXHCI_CONTROLLER_CAPABILITIES// Size=0xb8 (Id=485)
{
    enum USBXHCI_CONTROLLER_PARENT_BUS_TYPE ParentBusType;// Offset=0x0 Size=0x4
    unsigned long PciVendorId;// Offset=0x4 Size=0x4
    unsigned long PciDeviceId;// Offset=0x8 Size=0x4
    unsigned long PciRevision;// Offset=0xc Size=0x4
    char AcpiVendorId[5];// Offset=0x10 Size=0x5
    char AcpiDeviceId[5];// Offset=0x15 Size=0x5
    unsigned short AcpiRevision[5];// Offset=0x1a Size=0xa
    unsigned long long FirmwareVersion;// Offset=0x28 Size=0x8
    unsigned long MajorRevision;// Offset=0x30 Size=0x4
    unsigned long MinorRevision;// Offset=0x34 Size=0x4
    unsigned long Slots;// Offset=0x38 Size=0x4
    unsigned long Interrupters;// Offset=0x3c Size=0x4
    unsigned long Ports;// Offset=0x40 Size=0x4
    unsigned long IsochSchedulingThreshold;// Offset=0x44 Size=0x4
    unsigned long EventRingSegmentTableMax;// Offset=0x48 Size=0x4
    unsigned long ScratchpadRestore;// Offset=0x4c Size=0x4
    unsigned long MaxScratchpadBuffers;// Offset=0x50 Size=0x4
    unsigned long U1DeviceExitLatency;// Offset=0x54 Size=0x4
    unsigned long U2DeviceExitLatency;// Offset=0x58 Size=0x4
    unsigned long AddressCapability;// Offset=0x5c Size=0x4
    unsigned long BwNegotiationCapability;// Offset=0x60 Size=0x4
    unsigned long ContextSize;// Offset=0x64 Size=0x4
    unsigned long PortPowerControl;// Offset=0x68 Size=0x4
    unsigned long PortIndicators;// Offset=0x6c Size=0x4
    unsigned long LightHCResetCapability;// Offset=0x70 Size=0x4
    unsigned long LatencyToleranceMessagingCapability;// Offset=0x74 Size=0x4
    unsigned long NoSecondarySidSupport;// Offset=0x78 Size=0x4
    unsigned long ParseAllEventData;// Offset=0x7c Size=0x4
    unsigned long StoppedShortPacketCapability;// Offset=0x80 Size=0x4
    unsigned long StoppedEDTLACapability;// Offset=0x84 Size=0x4
    unsigned long ContiguousFrameIDCapability;// Offset=0x88 Size=0x4
    unsigned long MaximumPrimaryStreamArraySize;// Offset=0x8c Size=0x4
    unsigned long U3EntryCapability;// Offset=0x90 Size=0x4
    unsigned long ConfigureEndpointCommandMaxExitLatencyCapability;// Offset=0x94 Size=0x4
    unsigned long ForceSaveContextCapability;// Offset=0x98 Size=0x4
    unsigned long ComplianceTransitionCapability;// Offset=0x9c Size=0x4
    unsigned long LargeESITPayloadCapability;// Offset=0xa0 Size=0x4
    unsigned long ConfigurationInformationCapability;// Offset=0xa4 Size=0x4
    unsigned long ExtendedTBCCapability;// Offset=0xa8 Size=0x4
    unsigned long MessageSignaledInterrupts;// Offset=0xac Size=0x4
    unsigned long ExtendedCapabilities[1];// Offset=0xb0 Size=0x4
};
