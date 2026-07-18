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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=838)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _anonymous_1291// Size=0x8 (Id=1291)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _anonymous_1292// Size=0x8 (Id=1292)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _anonymous_1293// Size=0x8 (Id=1293)
{
    struct _anonymous_1291 e1;// Offset=0x0 Size=0x8
    struct _anonymous_1292 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1294)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _anonymous_1293 u1;// Offset=0x18 Size=0x8
};

union _anonymous_1880// Size=0x4 (Id=1880)
{
    unsigned long ReferenceCount;// Offset=0x0 Size=0x4
    unsigned long NumberOfPtesToFree;// Offset=0x0 Size=0x4
};

struct _MI_PER_SESSION_PROTOS// Size=0x58 (Id=1881)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE SessionProtoNode;// Offset=0x0 Size=0x18
        struct _SINGLE_LIST_ENTRY FreeList;// Offset=0x0 Size=0x8
        void * DriverAddress;// Offset=0x0 Size=0x8
        struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x18 Size=0x20
    };
    unsigned long long NumberOfPtes;// Offset=0x38 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long SessionId;// Offset=0x40 Size=0x4
        struct _SUBSECTION * Subsection;// Offset=0x40 Size=0x8
    };
    struct _MMPTE * SubsectionBase;// Offset=0x48 Size=0x8
    union _anonymous_1880 u2;// Offset=0x50 Size=0x4
};
