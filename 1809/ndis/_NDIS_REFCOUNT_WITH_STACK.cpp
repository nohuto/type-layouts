struct _NDIS_REFCOUNT_STACK_ENTRY// Size=0x4 (Id=1914)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stack:26;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1a
        unsigned long RefCount:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
};

struct _NDIS_REFCOUNT_STACK_BLOCK// Size=0x38 (Id=1492)
{
    struct _NDIS_REFCOUNT_STACK_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _NDIS_REFCOUNT_STACK_ENTRY References[6];// Offset=0x8 Size=0x18
    struct _NDIS_REFCOUNT_STACK_ENTRY Dereferences[6];// Offset=0x20 Size=0x18
};

struct _NDIS_REFCOUNT_WITH_STACK// Size=0x40 (Id=1110)
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
