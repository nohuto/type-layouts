struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct tagVERIFIERTRACKHDR// Size=0x20 (Id=243)
{
    struct _LIST_ENTRY list;// Offset=0x0 Size=0x10
    unsigned long long ulSize;// Offset=0x10 Size=0x8
    unsigned long ulTag;// Offset=0x18 Size=0x4
};
