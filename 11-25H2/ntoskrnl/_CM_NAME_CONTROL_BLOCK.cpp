struct _CM_COMPONENT_HASH// Size=0x4 (Id=2214)
{
    unsigned long Hash;// Offset=0x0 Size=0x4
};

struct _CM_NAME_HASH// Size=0x18 (Id=1179)
{
    struct _CM_COMPONENT_HASH ConvKey;// Offset=0x0 Size=0x4
    struct _CM_NAME_HASH * NextHash;// Offset=0x8 Size=0x8
    unsigned short NameLength;// Offset=0x10 Size=0x2
    wchar_t Name[1];// Offset=0x12 Size=0x2
};

struct _CM_NAME_CONTROL_BLOCK// Size=0x20 (Id=710)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Compressed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RefCount:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    union // Size=0x18 (Id=0)
    {
        struct _CM_NAME_HASH NameHash;// Offset=0x8 Size=0x18
        struct _CM_COMPONENT_HASH ConvKey;// Offset=0x8 Size=0x4
        struct _CM_KEY_HASH * NextHash;// Offset=0x10 Size=0x8
    };
    unsigned short NameLength;// Offset=0x18 Size=0x2
    wchar_t Name[1];// Offset=0x1a Size=0x2
};
