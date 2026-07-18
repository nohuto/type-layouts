struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _KDPC_LIST// Size=0x8 (Id=542)
{
    struct _SINGLE_LIST_ENTRY ListHead;// Offset=0x0 Size=0x4
    struct _SINGLE_LIST_ENTRY * LastEntry;// Offset=0x4 Size=0x4
};
