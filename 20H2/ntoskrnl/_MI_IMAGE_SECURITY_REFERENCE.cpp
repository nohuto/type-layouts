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

struct _anonymous_1295// Size=0x8 (Id=1295)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _anonymous_1296// Size=0x8 (Id=1296)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _anonymous_1297// Size=0x8 (Id=1297)
{
    struct _anonymous_1295 e1;// Offset=0x0 Size=0x8
    struct _anonymous_1296 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1298)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _anonymous_1297 u1;// Offset=0x18 Size=0x8
};

struct _IMAGE_SECURITY_CONTEXT// Size=0x8 (Id=1613)
{
    union // Size=0x8 (Id=0)
    {
        void * PageHashes;// Offset=0x0 Size=0x8
        unsigned long long Value;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long SecurityBeingCreated:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
            unsigned long long SecurityMandatory:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long PageHashPointer:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
        };
    };
};

union _anonymous_1071// Size=0x8 (Id=1071)
{
    void * ImageFileExtents;// Offset=0x0 Size=0x8
    unsigned long long ImageFileExtentsUlongPtr;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long FilesystemWantsRva:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
    };
};

struct _MI_IMAGE_SECURITY_REFERENCE// Size=0x40 (Id=1072)
{
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x0 Size=0x20
    void * DynamicRelocations;// Offset=0x20 Size=0x8
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;// Offset=0x28 Size=0x8
    union _anonymous_1071 u1;// Offset=0x30 Size=0x8
    unsigned long long StrongImageReference;// Offset=0x38 Size=0x8
};
