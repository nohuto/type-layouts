struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE// Size=0x10 (Id=656)
{
    struct _LIST_ENTRY DispatchedList;// Offset=0x0 Size=0x10
};
