struct _PCI_MSI_MESSAGE_CONTROL// Size=0x2 (Id=890)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MSIEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short MultipleMessageCapable:3;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x3
        unsigned short MultipleMessageEnable:3;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x3
        unsigned short CapableOf64Bits:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short PerVectorMaskCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Reserved:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
};
