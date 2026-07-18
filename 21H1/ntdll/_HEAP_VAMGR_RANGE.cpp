struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _HEAP_VAMGR_RANGE// Size=0x10 (Id=216)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_BALANCED_NODE RbNode;// Offset=0x0 Size=0xc
        struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
        struct // Size=0x1 (Id=0)
        {
            unsigned char Allocated:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Internal:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Standalone:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Spare0:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
        };
        unsigned char AllocatorIndex;// Offset=0x1 Size=0x1
        unsigned long OwnerCtx[2];// Offset=0x4 Size=0x8
    };
    union // Size=0x10 (Id=0)
    {
        unsigned long SizeInChunks;// Offset=0xc Size=0x4
        unsigned short ChunkCount;// Offset=0xc Size=0x2
        unsigned short PrevChunkCount;// Offset=0xe Size=0x2
        unsigned long Signature;// Offset=0xc Size=0x4
    };
};
