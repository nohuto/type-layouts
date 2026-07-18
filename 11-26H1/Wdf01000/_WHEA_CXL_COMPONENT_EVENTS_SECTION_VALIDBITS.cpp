union _WHEA_CXL_COMPONENT_EVENTS_SECTION_VALIDBITS// Size=0x8 (Id=3776)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DeviceID:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DeviceSerialNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CxlComponentEventLog:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
