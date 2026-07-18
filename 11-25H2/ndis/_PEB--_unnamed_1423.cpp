union _PEB::_unnamed_1423// Size=0x4 (Id=1423)
{
    unsigned long CrossProcessFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ProcessInJob:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ProcessInitializing:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ProcessUsingVEH:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ProcessUsingVCH:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ProcessUsingFTH:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ProcessPreviouslyThrottled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ProcessCurrentlyThrottled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ProcessImagesHotPatched:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReservedBits0:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};
