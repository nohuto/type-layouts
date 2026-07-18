struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS// Size=0x20 (Id=1564)
{
    struct _VERIFIER_SHARED_EXPORT_THUNK * SharedExportThunks;// Offset=0x0 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * PoolSharedExportThunks;// Offset=0x8 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * OrderDependentSharedExportThunks;// Offset=0x10 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * XdvSharedExportThunks;// Offset=0x18 Size=0x8
};

struct _unnamed_1045// Size=0x4 (Id=1045)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SnapSharedExportsFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _unnamed_1046// Size=0x20 (Id=1046)
{
    union // Size=0x20 (Id=0)
    {
        struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;// Offset=0x0 Size=0x20
        struct _unnamed_1045 Flags;// Offset=0x0 Size=0x4
    };
};
