union _RTL_HP_LFH_CONFIG// Size=0x4 (Id=519)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _unnamed_435// Size=0x1 (Id=435)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageAlignLargeAllocs:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char EnableDelayFree:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x1 (Id=436)
{
    struct _unnamed_435 Flags;// Offset=0x0 Size=0x1
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x8 (Id=655)
{
    union _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0x4
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0x4 Size=0x1
};
