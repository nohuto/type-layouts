struct _unnamed_441// Size=0x10 (Id=441)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=442)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_441 HeaderX64;// Offset=0x0 Size=0x10
};

struct _NVME_PRP_LIST_BUFFER_POOL// Size=0x20 (Id=816)
{
    union _SLIST_HEADER SListHeader;// Offset=0x0 Size=0x10
    unsigned long PrpListEntryCount;// Offset=0x10 Size=0x4
    unsigned long Reserved[3];// Offset=0x14 Size=0xc
};
