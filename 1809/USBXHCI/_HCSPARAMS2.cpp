union _HCSPARAMS2// Size=0x4 (Id=833)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsochSchedulingThreshold:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long EventRingSegmentTableMax:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Reserved0:13;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xd
        unsigned long MaxScratchpadBuffersHi:5;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x5
        unsigned long ScratchpadRestore:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MaxScratchpadBuffers:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
};
