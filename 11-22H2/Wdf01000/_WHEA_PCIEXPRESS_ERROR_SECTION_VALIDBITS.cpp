union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=1905)
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
