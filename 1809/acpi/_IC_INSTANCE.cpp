struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IC_INSTANCE// Size=0xe8 (Id=366)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long BaseInputNumber;// Offset=0x10 Size=0x4
    unsigned long MaxInputNumber;// Offset=0x14 Size=0x4
    unsigned long LimitInputNumber;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
    struct INPUT_STATE Inputs[1];// Offset=0x20 Size=0xc8
};
