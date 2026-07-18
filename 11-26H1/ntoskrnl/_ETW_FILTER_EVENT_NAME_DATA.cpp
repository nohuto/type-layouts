struct _RTL_HASH_TABLE// Size=0x10 (Id=637)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long MaskBitCount:5;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x5
            unsigned long BucketCount:27;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
        unsigned long BucketAndMaskBitCounts;// Offset=0x4 Size=0x4
    };
    struct _SINGLE_LIST_ENTRY * Buckets;// Offset=0x8 Size=0x8
};

struct _ETW_FILTER_EVENT_NAME_DATA// Size=0x28 (Id=2318)
{
    unsigned char FilterIn;// Offset=0x0 Size=0x1
    unsigned char Level;// Offset=0x1 Size=0x1
    unsigned long long MatchAnyKeyword;// Offset=0x8 Size=0x8
    unsigned long long MatchAllKeyword;// Offset=0x10 Size=0x8
    struct _RTL_HASH_TABLE NameTable;// Offset=0x18 Size=0x10
};
