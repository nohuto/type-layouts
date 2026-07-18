struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=33)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _SLIST_HEADER::_anonymous_461// Size=0x8 (Id=461)
{
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};
