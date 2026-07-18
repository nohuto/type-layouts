struct _PROC_HW_DEBUG_REGISTER_LIST// Size=0x10 (Id=594)
{
    struct _PROC_HW_DEBUG_REGISTER_GROUP * RegisterGroups[2];// Offset=0x0 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=38)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PCC_RUNTIME_STATE// Size=0x58 (Id=641)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _PROC_HW_DEBUG_REGISTER_LIST HwDebugRegisters[2];// Offset=0x8 Size=0x20
    struct _LIST_ENTRY Link;// Offset=0x28 Size=0x10
    unsigned long TargetFrequency;// Offset=0x38 Size=0x4
    unsigned long ActualFrequency;// Offset=0x3c Size=0x4
    struct _PCC_INPUT_BUFFER * InputBuffer;// Offset=0x40 Size=0x8
    union _PCC_OUTPUT_BUFFER * OutputBuffer;// Offset=0x48 Size=0x8
    unsigned long Cap;// Offset=0x50 Size=0x4
};
