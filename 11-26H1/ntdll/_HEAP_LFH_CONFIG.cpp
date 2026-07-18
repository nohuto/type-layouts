union _RTL_HP_LFH_CONFIG// Size=0x4 (Id=524)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONFIG// Size=0x8 (Id=472)
{
    union _RTL_HP_LFH_CONFIG Global;// Offset=0x0 Size=0x4
    struct // Size=0x2 (Id=0)
    {
        unsigned short EnablePrivateSlots:1;// Offset=0x4 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Spare:15;// Offset=0x4 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned char CommitUnitDecommitThreshold;// Offset=0x6 Size=0x1
};
