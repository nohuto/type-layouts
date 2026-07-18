struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DELAY_ACK_FO// Size=0x18 (Id=684)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    struct _FILE_OBJECT * OriginalFileObject;// Offset=0x10 Size=0x8
};
