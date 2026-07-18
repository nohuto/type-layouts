struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_FREE_LARGE_PAGE_LIST// Size=0x18 (Id=1564)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long EntryCount;// Offset=0x10 Size=0x8
};
