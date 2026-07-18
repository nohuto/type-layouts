struct _unnamed_715// Size=0x10 (Id=715)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY * AllocationHint;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * FreeHint;// Offset=0x8 Size=0x8
};

struct _unnamed_716// Size=0x10 (Id=716)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY ** AllocationHints;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY ** FreeHints;// Offset=0x8 Size=0x8
};

struct _unnamed_717// Size=0x20 (Id=717)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_715 NonIdentity;// Offset=0x0 Size=0x10
        struct _unnamed_716 Identity;// Offset=0x0 Size=0x10
    };
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragSourceEntry;// Offset=0x10 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragTargetEntry;// Offset=0x18 Size=0x8
};
