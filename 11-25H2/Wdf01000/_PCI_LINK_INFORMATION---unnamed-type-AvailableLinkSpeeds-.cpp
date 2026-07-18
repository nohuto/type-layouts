union _PCI_LINK_INFORMATION::<unnamed-type-AvailableLinkSpeeds>// Size=0x4 (Id=3493)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Gts_2_5:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Gts_5_0:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Gts_8_0:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Gts_16_0:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Gts_32_0:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Gts_64_0:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
