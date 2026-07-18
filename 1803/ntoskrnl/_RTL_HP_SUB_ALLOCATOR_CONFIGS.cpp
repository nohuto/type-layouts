struct _unnamed_1666// Size=0x4 (Id=1666)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ForceEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

struct _RTL_HP_LFH_CONFIG// Size=0xc (Id=1667)
{
    unsigned long MaxBlockSize;// Offset=0x0 Size=0x4
    unsigned long MaxSubsegmentSize;// Offset=0x4 Size=0x4
    struct _unnamed_1666 Flags;// Offset=0x8 Size=0x4
};

struct _unnamed_1420// Size=0x4 (Id=1420)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=1421)
{
    struct _unnamed_1420 Flags;// Offset=0x0 Size=0x4
};

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS// Size=0x10 (Id=1160)
{
    struct _RTL_HP_LFH_CONFIG LfhConfigs;// Offset=0x0 Size=0xc
    struct _RTL_HP_VS_CONFIG VsConfigs;// Offset=0xc Size=0x4
};
