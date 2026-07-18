struct _PCI_AGP_CAPABILITY::_PCI_AGP_STATUS// Size=0x4 (Id=5319)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rate:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Agp3Mode:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FastWrite:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FourGB:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HostTransDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Gart64:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ITA_Coherent:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SideBandAddressing:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long CalibrationCycle:3;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x3
        unsigned long AsyncRequestSize:3;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x3
        unsigned long Rsvd1:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Isoch:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd2:6;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x6
        unsigned long RequestQueueDepthMaximum:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
