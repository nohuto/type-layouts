union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS// Size=0x2 (Id=2276)
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
