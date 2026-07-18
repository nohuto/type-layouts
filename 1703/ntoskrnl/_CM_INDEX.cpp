struct _CM_FAST_LEAF_HINT// Size=0x4 (Id=1492)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Characters[4];// Offset=0x0 Size=0x4
        unsigned long FullHint;// Offset=0x0 Size=0x4
    };
};

struct _CM_COMPONENT_HASH// Size=0x4 (Id=1370)
{
    unsigned long Hash;// Offset=0x0 Size=0x4
};

struct _CM_INDEX// Size=0x8 (Id=1170)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct _CM_FAST_LEAF_HINT NameHint;// Offset=0x4 Size=0x4
        struct _CM_COMPONENT_HASH HashKey;// Offset=0x4 Size=0x4
    };
};
