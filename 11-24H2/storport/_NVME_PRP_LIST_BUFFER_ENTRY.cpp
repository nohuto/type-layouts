struct _SLIST_ENTRY// Size=0x10 (Id=438)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_PRP_LIST_BUFFER_ENTRY// Size=0x40 (Id=715)
{
    struct _SLIST_ENTRY SListEntry;// Offset=0x0 Size=0x10
    void * PrpList;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER PrpListPhysicalAddress;// Offset=0x18 Size=0x8
    unsigned long PrpListEntriesCountInUse;// Offset=0x20 Size=0x4
    unsigned short TotalPrpListEntriesCount;// Offset=0x24 Size=0x2
    unsigned char Reserved[26];// Offset=0x26 Size=0x1a
};
