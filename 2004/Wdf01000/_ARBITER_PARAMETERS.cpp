struct _ARBITER_TEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=1727)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_RETEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=1756)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_BOOT_ALLOCATION_PARAMETERS// Size=0x8 (Id=1703)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS// Size=0x8 (Id=3046)
{
    struct _CM_PARTIAL_RESOURCE_LIST ** AllocatedResources;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_CONFLICT_PARAMETERS// Size=0x20 (Id=2109)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _IO_RESOURCE_DESCRIPTOR * ConflictingResource;// Offset=0x8 Size=0x8
    unsigned long * ConflictCount;// Offset=0x10 Size=0x8
    struct _ARBITER_CONFLICT_INFO ** Conflicts;// Offset=0x18 Size=0x8
};

struct _ARBITER_QUERY_ARBITRATE_PARAMETERS// Size=0x8 (Id=1697)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_ADD_RESERVED_PARAMETERS// Size=0x8 (Id=1855)
{
    struct _DEVICE_OBJECT * ReserveDevice;// Offset=0x0 Size=0x8
};

struct _ARBITER_PARAMETERS// Size=0x20 (Id=2706)
{
    union // Size=0x20 (Id=0)
    {
        union <unnamed-type-Parameters>// Size=0x20 (Id=4788)
        {
            struct _ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;// Offset=0x0 Size=0x18
            struct _ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;// Offset=0x0 Size=0x18
            struct _ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;// Offset=0x0 Size=0x8
            struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources;// Offset=0x0 Size=0x8
            struct _ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;// Offset=0x0 Size=0x20
            struct _ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;// Offset=0x0 Size=0x8
            struct _ARBITER_ADD_RESERVED_PARAMETERS AddReserved;// Offset=0x0 Size=0x8
        };
        union _ARBITER_PARAMETERS::<unnamed-type-Parameters> Parameters;// Offset=0x0 Size=0x20
    };
};
