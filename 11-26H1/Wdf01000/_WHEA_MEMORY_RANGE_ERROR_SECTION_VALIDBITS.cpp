union _WHEA_MEMORY_RANGE_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3226)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Version:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DeviceInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long DeviceType:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long RangeCount:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Ranges:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
