struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct tagVERIFIERTRACKHDR// Size=0x10 (Id=477)
{
    struct _LIST_ENTRY list;// Offset=0x0 Size=0x8
    unsigned long ulSize;// Offset=0x8 Size=0x4
    unsigned long ulTag;// Offset=0xc Size=0x4
};
