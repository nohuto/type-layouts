struct _PROC_HW_DEBUG_REGISTER_LIST// Size=0x10 (Id=567)
{
    struct _PROC_HW_DEBUG_REGISTER_GROUP * RegisterGroups[2];// Offset=0x0 Size=0x10
};

struct _COMMON_PERF_CONTEXT// Size=0x28 (Id=415)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _PROC_HW_DEBUG_REGISTER_LIST HwDebugRegisters[2];// Offset=0x8 Size=0x20
};
