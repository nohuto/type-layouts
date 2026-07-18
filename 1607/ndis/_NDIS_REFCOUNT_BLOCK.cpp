struct _NDIS_REFCOUNT_TAGGED// Size=0x10 (Id=988)
{
    struct _NDIS_REFCOUNT_TAGGED_ENTRY * Tags;// Offset=0x0 Size=0x8
    unsigned long RefMask[1];// Offset=0x8 Size=0x4
};

struct _NDIS_REFCOUNT_STACK_ENTRY// Size=0x4 (Id=1616)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stack:26;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1a
        unsigned long RefCount:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
};

struct _NDIS_REFCOUNT_STACK_BLOCK// Size=0x38 (Id=1261)
{
    struct _NDIS_REFCOUNT_STACK_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _NDIS_REFCOUNT_STACK_ENTRY References[6];// Offset=0x8 Size=0x18
    struct _NDIS_REFCOUNT_STACK_ENTRY Dereferences[6];// Offset=0x20 Size=0x18
};

struct _NDIS_REFCOUNT_WITH_STACK// Size=0x40 (Id=905)
{
    struct _NDIS_REFCOUNT_STACK_BLOCK Block;// Offset=0x0 Size=0x38
    struct // Size=0x4 (Id=0)
    {
        unsigned long ReferenceAllocationFailed:1;// Offset=0x38 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TotalReferences:15;// Offset=0x38 Size=0x4 BitOffset=0x1 BitSize=0xf
        unsigned long DereferenceAllocationFailed:1;// Offset=0x38 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long TotalDereferences:15;// Offset=0x38 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
};

struct _NDIS_REFCOUNT_BLOCK// Size=0x48 (Id=901)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char NumRefTags;// Offset=0x2 Size=0x1
    unsigned char NumOverflowTaggedEntries;// Offset=0x3 Size=0x1
    union // Size=0x10 (Id=0)
    {
        struct _NDIS_REFCOUNT_TAGGED TaggedRefCounts;// Offset=0x8 Size=0x10
        struct _NDIS_REFCOUNT_WITH_STACK RefWithStack[1];// Offset=0x8 Size=0x40
    };
};
