union _PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER// Size=0x4 (Id=2724)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SupportedLinkSpeedsVector:7;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x7
        unsigned long Rsvd8_31:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
