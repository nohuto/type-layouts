struct _VF_AVL_TREE_NODE// Size=0x10 (Id=2047)
{
    void * p;// Offset=0x0 Size=0x8
    unsigned long long RangeSize;// Offset=0x8 Size=0x8
};

struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS// Size=0x18 (Id=2386)
{
    struct _VERIFIER_SHARED_EXPORT_THUNK * SharedExportThunks;// Offset=0x0 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * PoolSharedExportThunks;// Offset=0x8 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * XdvSharedExportThunks;// Offset=0x10 Size=0x8
};

struct _unnamed_1760// Size=0x4 (Id=1760)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SnapSharedExportsFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _unnamed_1761// Size=0x18 (Id=1761)
{
    union // Size=0x18 (Id=0)
    {
        struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;// Offset=0x0 Size=0x18
        struct _unnamed_1760 Flags;// Offset=0x0 Size=0x4
    };
};

struct _VF_TARGET_DRIVER// Size=0x48 (Id=1762)
{
    struct _VF_AVL_TREE_NODE TreeNode;// Offset=0x0 Size=0x10
    union _unnamed_1761 u1;// Offset=0x10 Size=0x18
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x28 Size=0x8
    struct _VF_DRIVER_IO_CALLBACKS * Callbacks;// Offset=0x30 Size=0x8
    unsigned long AssignedPluginId;// Offset=0x38 Size=0x4
    struct _VF_TARGET_VERIFIED_DRIVER_DATA * VerifiedData;// Offset=0x40 Size=0x8
};
