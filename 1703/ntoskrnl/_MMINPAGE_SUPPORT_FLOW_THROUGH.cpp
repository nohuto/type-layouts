struct _RTL_BALANCED_NODE// Size=0x18 (Id=36)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _MMINPAGE_SUPPORT_FLOW_THROUGH// Size=0x38 (Id=1160)
{
    unsigned long long Page[1];// Offset=0x0 Size=0x8
    struct _MMINPAGE_SUPPORT * InitialInPageSupport;// Offset=0x8 Size=0x8
    struct _MMPAGING_FILE * PagingFile;// Offset=0x10 Size=0x8
    unsigned long long PageFileOffset;// Offset=0x18 Size=0x8
    struct _RTL_BALANCED_NODE Node;// Offset=0x20 Size=0x18
};
