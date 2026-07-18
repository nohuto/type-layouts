struct _CM_PATH_HASH// Size=0x4 (Id=1027)
{
    unsigned long Hash;// Offset=0x0 Size=0x4
};

struct _CM_KEY_HASH// Size=0x20 (Id=1199)
{
    struct _CM_PATH_HASH ConvKey;// Offset=0x0 Size=0x4
    struct _CM_KEY_HASH * NextHash;// Offset=0x8 Size=0x8
    struct _HHIVE * KeyHive;// Offset=0x10 Size=0x8
    unsigned long KeyCell;// Offset=0x18 Size=0x4
};
