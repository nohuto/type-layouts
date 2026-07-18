struct NVME_PCI_ADDRESS// Size=0x4 (Id=839)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Function:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Device:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long Bus:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Segment:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
