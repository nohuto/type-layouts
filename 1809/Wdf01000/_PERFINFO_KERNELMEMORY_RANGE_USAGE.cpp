struct _PERFINFO_KERNELMEMORY_RANGE_USAGE// Size=0x18 (Id=2441)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UsageType:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long Spare:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    void * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long long PageCount;// Offset=0x10 Size=0x8
};
