struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_ALIGNED_SLIST// Size=0x40 (Id=1945)
{
    union _SLIST_HEADER SList;// Offset=0x0 Size=0x10
};

struct _MI_ULTRA_MDL_NODE// Size=0x200 (Id=1500)
{
    struct _MI_ALIGNED_SLIST UltraMdlMaps[8];// Offset=0x0 Size=0x200
};
