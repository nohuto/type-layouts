union _WHEA_CXL_PROTOCOL_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2849)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CxlAgentType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CxlAgentAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long DeviceID:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DeviceSerialNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CapabilityStructure:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CxlDvsec:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long CxlErrorLog:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long Reserved:57;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x39
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
