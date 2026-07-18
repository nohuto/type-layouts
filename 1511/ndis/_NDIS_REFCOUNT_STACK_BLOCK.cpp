struct _NDIS_REFCOUNT_STACK_ENTRY// Size=0x4 (Id=1703)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Stack:26;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1a
        unsigned long RefCount:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
};

struct _NDIS_REFCOUNT_STACK_BLOCK// Size=0x38 (Id=1619)
{
    struct _NDIS_REFCOUNT_STACK_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _NDIS_REFCOUNT_STACK_ENTRY References[6];// Offset=0x8 Size=0x18
    struct _NDIS_REFCOUNT_STACK_ENTRY Dereferences[6];// Offset=0x20 Size=0x18
};
