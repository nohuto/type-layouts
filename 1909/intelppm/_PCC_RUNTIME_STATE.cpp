struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PCC_RUNTIME_STATE// Size=0x38 (Id=587)
{
    struct _FDO_DATA * DevExt;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY Link;// Offset=0x8 Size=0x10
    unsigned long TargetFrequency;// Offset=0x18 Size=0x4
    unsigned long ActualFrequency;// Offset=0x1c Size=0x4
    struct _PCC_INPUT_BUFFER * InputBuffer;// Offset=0x20 Size=0x8
    union _PCC_OUTPUT_BUFFER * OutputBuffer;// Offset=0x28 Size=0x8
    unsigned long Cap;// Offset=0x30 Size=0x4
};
