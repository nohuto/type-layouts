union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS// Size=0x2 (Id=2667)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MultipleError:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Flags:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short ErrorInformation:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short VirtualFaultAddress:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short PhysicalFaultAddress:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_ARM_PROCESSOR_ERROR_INFORMATION// Size=0x20 (Id=2860)
{
    unsigned char Version;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS ValidationBit;// Offset=0x2 Size=0x2
    unsigned char Type;// Offset=0x4 Size=0x1
    unsigned short MultipleError;// Offset=0x5 Size=0x2
    unsigned char Flags;// Offset=0x7 Size=0x1
    unsigned long long ErrorInformation;// Offset=0x8 Size=0x8
    unsigned long long VirtualFaultAddress;// Offset=0x10 Size=0x8
    unsigned long long PhysicalFaultAddress;// Offset=0x18 Size=0x8
};
