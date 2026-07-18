struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=432)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _anonymous_363// Size=0x4 (Id=363)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=364)
{
    struct _anonymous_363 Flags;// Offset=0x0 Size=0x4
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x8 (Id=556)
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0x4
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0x4 Size=0x4
};
