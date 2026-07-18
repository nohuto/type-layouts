enum _PCI_LINK_SPEED
{
    PciLinkSpeed2_5Gts=0,
    PciLinkSpeed5_0Gts=1,
    PciLinkSpeed8_0Gts=2,
    PciLinkSpeed16_0Gts=3,
    PciLinkSpeed32_0Gts=4,
    PciLinkSpeed64_0Gts=5,
    PciLinkSpeedMax=6
};

struct _PCI_LINK_INFORMATION// Size=0xc (Id=3511)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-AvailableLinkSpeeds>// Size=0x4 (Id=15369)
        {
            unsigned long Gts_2_5:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Gts_5_0:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Gts_8_0:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Gts_16_0:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Gts_32_0:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Gts_64_0:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_LINK_INFORMATION::<unnamed-type-AvailableLinkSpeeds> AvailableLinkSpeeds;// Offset=0x0 Size=0x4
    };
    unsigned short LinkWidth;// Offset=0x4 Size=0x2
    enum _PCI_LINK_SPEED CurrentLinkSpeed;// Offset=0x8 Size=0x4
};
