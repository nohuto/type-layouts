struct _unnamed_699// Size=0x10 (Id=699)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY * AllocationHint;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * FreeHint;// Offset=0x8 Size=0x8
};

struct _unnamed_700// Size=0x10 (Id=700)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY ** AllocationHints;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY ** FreeHints;// Offset=0x8 Size=0x8
};

struct _unnamed_701// Size=0x20 (Id=701)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_699 NonIdentity;// Offset=0x0 Size=0x10
        struct _unnamed_700 Identity;// Offset=0x0 Size=0x10
    };
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragSourceEntry;// Offset=0x10 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragTargetEntry;// Offset=0x18 Size=0x8
};
