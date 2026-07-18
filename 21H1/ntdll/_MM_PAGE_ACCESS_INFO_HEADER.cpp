struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

enum _MM_PAGE_ACCESS_TYPE
{
    MmPteAccessType=0,
    MmCcReadAheadType=1,
    MmPfnRepurposeType=2,
    MmMaximumPageAccessType=3
};

struct _MM_PAGE_ACCESS_INFO_HEADER// Size=0x38 (Id=187)
{
    struct _SINGLE_LIST_ENTRY Link;// Offset=0x0 Size=0x4
    enum _MM_PAGE_ACCESS_TYPE Type;// Offset=0x4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long EmptySequenceNumber;// Offset=0x8 Size=0x4
        unsigned long CurrentFileIndex;// Offset=0x8 Size=0x4
    };
    unsigned long long CreateTime;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long EmptyTime;// Offset=0x18 Size=0x8
        struct _MM_PAGE_ACCESS_INFO * TempEntry;// Offset=0x18 Size=0x4
    };
    union // Size=0x34 (Id=0)
    {
        struct _MM_PAGE_ACCESS_INFO * PageEntry;// Offset=0x20 Size=0x4
        unsigned long * FileEntry;// Offset=0x24 Size=0x4
        unsigned long * FirstFileEntry;// Offset=0x28 Size=0x4
        struct _EPROCESS * Process;// Offset=0x2c Size=0x4
        unsigned long SessionId;// Offset=0x30 Size=0x4
        unsigned long * PageFrameEntry;// Offset=0x20 Size=0x4
        unsigned long * LastPageFrameEntry;// Offset=0x24 Size=0x4
    };
};
