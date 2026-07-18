union _RTL_HP_LFH_CONFIG// Size=0x4 (Id=519)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONFIG// Size=0x8 (Id=467)
{
    union _RTL_HP_LFH_CONFIG Global;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnablePrivateSlots:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};
