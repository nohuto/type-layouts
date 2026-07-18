struct _PCI_AGP_CAPABILITY::_PCI_AGP_COMMAND// Size=0x4 (Id=3499)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rate:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Rsvd1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FastWriteEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FourGBEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Rsvd2:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Gart64:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AGPEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SBAEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long CalibrationCycle:3;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x3
        unsigned long AsyncReqSize:3;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x3
        unsigned long Rsvd3:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long RequestQueueDepth:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
