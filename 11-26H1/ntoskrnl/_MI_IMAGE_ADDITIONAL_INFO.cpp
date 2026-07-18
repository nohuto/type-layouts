struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
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

struct _unnamed_1651// Size=0x8 (Id=1651)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _unnamed_1652// Size=0x8 (Id=1652)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _unnamed_1653// Size=0x8 (Id=1653)
{
    struct _unnamed_1651 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1652 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1654)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _unnamed_1653 u1;// Offset=0x18 Size=0x8
};

struct _IMAGE_SECURITY_CONTEXT// Size=0x8 (Id=1278)
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

struct _unnamed_687// Size=0x8 (Id=687)
{
    void * ImageFileExtents;// Offset=0x0 Size=0x8
};

struct _unnamed_688// Size=0x8 (Id=688)
{
    struct _MI_FILE_ONLY_FIXUP_EXTENTS * FixupExtents;// Offset=0x0 Size=0x8
};

struct _unnamed_689// Size=0x8 (Id=689)
{
    void * Spare;// Offset=0x0 Size=0x8
};

struct _MI_IMAGE_ADDITIONAL_FLAGS// Size=0x4 (Id=1488)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SizeOfHeader:12;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xc
        unsigned long FilesystemWantsRva:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
    };
};

union _unnamed_690// Size=0x4 (Id=690)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MI_IMAGE_ADDITIONAL_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MI_IMAGE_ADDITIONAL_INFO// Size=0x48 (Id=691)
{
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x0 Size=0x20
    void * DynamicRelocations;// Offset=0x20 Size=0x8
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;// Offset=0x28 Size=0x8
    union // Size=0x38 (Id=0)
    {
        struct _unnamed_687 CopyExtents;// Offset=0x30 Size=0x8
        struct _unnamed_688 ZeroCopyExtents;// Offset=0x30 Size=0x8
        struct _unnamed_689 NoExtents;// Offset=0x30 Size=0x8
    };
    union _unnamed_690 u;// Offset=0x38 Size=0x4
    unsigned long Unused;// Offset=0x3c Size=0x4
    unsigned long long StrongImageReference;// Offset=0x40 Size=0x8
};
