struct _RTL_BALANCED_NODE// Size=0x18 (Id=35)
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=47)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _unnamed_1081// Size=0x4 (Id=1081)
{
    unsigned long ReferenceCount;// Offset=0x0 Size=0x4
    unsigned long NumberOfPtesToFree;// Offset=0x0 Size=0x4
};

struct _MI_PER_SESSION_PROTOS// Size=0x30 (Id=1082)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE SessionProtoNode;// Offset=0x0 Size=0x18
        struct _SINGLE_LIST_ENTRY FreeList;// Offset=0x0 Size=0x8
        void * DriverAddress;// Offset=0x0 Size=0x8
        unsigned long SessionId;// Offset=0x18 Size=0x4
    };
    struct _SUBSECTION * Subsection;// Offset=0x18 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x20 Size=0x8
    union _unnamed_1081 u2;// Offset=0x28 Size=0x4
};
