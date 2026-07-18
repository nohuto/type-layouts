struct _RTL_BALANCED_NODE// Size=0x18 (Id=119)
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

union _anonymous_1727// Size=0x8 (Id=1727)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ViewPageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _MI_PHYSICAL_VIEW// Size=0x30 (Id=1728)
{
    struct _RTL_BALANCED_NODE PhysicalNode;// Offset=0x0 Size=0x18
    struct _MMVAD_SHORT * Vad;// Offset=0x18 Size=0x8
    struct _AWEINFO * AweInfo;// Offset=0x20 Size=0x8
    union _anonymous_1727 u1;// Offset=0x28 Size=0x8
};
