union _OWNER_ENTRY_COUNTS// Size=0x4 (Id=996)
{
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IoPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OwnerReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IoQoSPriorityBoosted:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OwnerCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _OWNER_ENTRY// Size=0x10 (Id=920)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        union _OWNER_ENTRY_COUNTS EntryCounts;// Offset=0x8 Size=0x4
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};
