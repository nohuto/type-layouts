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

struct _HEAP_DESCRIPTOR_KEY// Size=0x2 (Id=240)
{
    union // Size=0x2 (Id=0)
    {
        unsigned short Key;// Offset=0x0 Size=0x2
        unsigned char EncodedCommitCount;// Offset=0x0 Size=0x1
        unsigned char PageCount;// Offset=0x1 Size=0x1
    };
};

struct _HEAP_PAGE_RANGE_DESCRIPTOR// Size=0x20 (Id=238)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        unsigned long TreeSignature;// Offset=0x0 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned short ExtraPresent:1;// Offset=0x4 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short Spare0:15;// Offset=0x4 Size=0x2 BitOffset=0x1 BitSize=0xf
        };
        unsigned short UnusedBytes;// Offset=0x6 Size=0x2
        unsigned char RangeFlags;// Offset=0x18 Size=0x1
    };
    unsigned char Spare1;// Offset=0x19 Size=0x1
    union // Size=0x2 (Id=0)
    {
        struct _HEAP_DESCRIPTOR_KEY Key;// Offset=0x1a Size=0x2
        unsigned char Align;// Offset=0x1a Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char Offset;// Offset=0x1b Size=0x1
        unsigned char Size;// Offset=0x1b Size=0x1
    };
};
