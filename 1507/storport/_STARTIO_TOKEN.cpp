struct _SLIST_ENTRY// Size=0x10 (Id=21)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _STARTIO_TOKEN// Size=0x20 (Id=323)
{
    struct _SLIST_ENTRY Link;// Offset=0x0 Size=0x10
    unsigned long Node;// Offset=0x10 Size=0x4
    unsigned long Number;// Offset=0x14 Size=0x4
};
