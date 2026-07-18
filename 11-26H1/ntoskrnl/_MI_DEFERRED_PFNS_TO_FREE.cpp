struct _MI_PFN_LIST_ENTRY// Size=0x10 (Id=1850)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MI_PFN_LIST_HEAD// Size=0x18 (Id=662)
{
    struct _MI_PFN_LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long long Total;// Offset=0x10 Size=0x8
};

struct _MI_DEFERRED_PFNS_TO_FREE// Size=0x20 (Id=2636)
{
    struct _MI_PFN_LIST_HEAD ListHead;// Offset=0x0 Size=0x18
    unsigned long TbFlushStamp;// Offset=0x18 Size=0x4
};
