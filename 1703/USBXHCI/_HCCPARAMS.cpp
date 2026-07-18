union _HCCPARAMS// Size=0x4 (Id=402)
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
