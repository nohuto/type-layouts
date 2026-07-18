struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER// Size=0x4 (Id=3240)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
};

union _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS// Size=0x8 (Id=2503)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Segment:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Bus:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Device:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Function:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Mask:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CorrectableErrorCount:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_PCIE_ADDRESS// Size=0x10 (Id=3413)
{
    unsigned int Segment;// Offset=0x0 Size=0x4
    unsigned int Bus;// Offset=0x4 Size=0x4
    unsigned int Device;// Offset=0x8 Size=0x4
    unsigned int Function;// Offset=0xc Size=0x4
};

struct _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES// Size=0x9c (Id=450)
{
    union _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    struct _WHEA_PCIE_ADDRESS Address;// Offset=0x8 Size=0x10
    unsigned int Mask;// Offset=0x18 Size=0x4
    unsigned int CorrectableErrorCount[32];// Offset=0x1c Size=0x80
};

struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION// Size=0xa0 (Id=675)
{
    struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER Header;// Offset=0x0 Size=0x4
    struct _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES Devices[1];// Offset=0x4 Size=0x9c
};
