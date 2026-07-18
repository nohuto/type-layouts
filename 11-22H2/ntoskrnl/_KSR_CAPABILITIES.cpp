union _KSR_CAPABILITIES// Size=0x4 (Id=1511)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PerennialDatabase:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SkipSubAllocator:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};
