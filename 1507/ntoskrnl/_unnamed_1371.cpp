struct _ARBITER_TEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=1106)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_RETEST_ALLOCATION_PARAMETERS// Size=0x18 (Id=937)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
    unsigned long AllocateFromCount;// Offset=0x8 Size=0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;// Offset=0x10 Size=0x8
};

struct _ARBITER_BOOT_ALLOCATION_PARAMETERS// Size=0x8 (Id=881)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS// Size=0x8 (Id=1444)
{
    struct _CM_PARTIAL_RESOURCE_LIST ** AllocatedResources;// Offset=0x0 Size=0x8
};

struct _ARBITER_QUERY_CONFLICT_PARAMETERS// Size=0x20 (Id=1109)
{
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x0 Size=0x8
    struct _IO_RESOURCE_DESCRIPTOR * ConflictingResource;// Offset=0x8 Size=0x8
    unsigned long * ConflictCount;// Offset=0x10 Size=0x8
    struct _ARBITER_CONFLICT_INFO ** Conflicts;// Offset=0x18 Size=0x8
};

struct _ARBITER_QUERY_ARBITRATE_PARAMETERS// Size=0x8 (Id=877)
{
    struct _LIST_ENTRY * ArbitrationList;// Offset=0x0 Size=0x8
};

struct _ARBITER_ADD_RESERVED_PARAMETERS// Size=0x8 (Id=922)
{
    struct _DEVICE_OBJECT * ReserveDevice;// Offset=0x0 Size=0x8
};

union _unnamed_1371// Size=0x20 (Id=1371)
{
    union // Size=0x20 (Id=0)
    {
        struct _ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;// Offset=0x0 Size=0x18
        struct _ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;// Offset=0x0 Size=0x18
        struct _ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;// Offset=0x0 Size=0x8
        struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources;// Offset=0x0 Size=0x8
        struct _ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;// Offset=0x0 Size=0x20
        struct _ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;// Offset=0x0 Size=0x8
        struct _ARBITER_ADD_RESERVED_PARAMETERS AddReserved;// Offset=0x0 Size=0x8
    };
};
