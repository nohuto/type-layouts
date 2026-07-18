struct _ARBITER_TEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=1658)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_RETEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=1723)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_BOOT_ALLOCATION_PARAMETERS// Size=0x8 (Id=1600)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS// Size=0x8 (Id=5051)
{
    struct _CM_PARTIAL_RESOURCE_LIST ** AllocatedResources;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_CONFLICT_PARAMETERS// Size=0x20 (Id=2424)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _IO_RESOURCE_DESCRIPTOR * ConflictingResource;// Offset=0x8 Size=0x8
    unsigned long * ConflictCount;// Offset=0x10 Size=0x8
    struct _ARBITER_CONFLICT_INFO ** Conflicts;// Offset=0x18 Size=0x8
};

struct _ARBITER_QUERY_ARBITRATE_PARAMETERS// Size=0x8 (Id=1577)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_ADD_RESERVED_PARAMETERS// Size=0x8 (Id=2036)
{
    struct _DEVICE_OBJECT * ReserveDevice;// Offset=0x0 Size=0x8
};

struct _ARBITER_PARAMETERS// Size=0x20 (Id=3993)
{
    union // Size=0x20 (Id=0)
    {
        union <unnamed-type-Parameters>// Size=0x20 (Id=6536)
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
