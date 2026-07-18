struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES// Size=0x8 (Id=1568)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long NumberOfPtes:6;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x6
        unsigned long long PartitionId:10;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0xa
        unsigned long long SectionOffset:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MI_REVERSE_VIEW_MAP// Size=0x28 (Id=1384)
{
    struct _LIST_ENTRY ViewLinks;// Offset=0x0 Size=0x10
    union // Size=0x18 (Id=0)
    {
        void * SystemCacheVa;// Offset=0x10 Size=0x8
        void * SessionViewVa;// Offset=0x10 Size=0x8
        struct _EPROCESS * VadsProcess;// Offset=0x10 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Type:2;// Offset=0x10 Size=0x8 BitOffset=0x0 BitSize=0x2
        };
    };
    union // Size=0x8 (Id=0)
    {
        struct _SUBSECTION * Subsection;// Offset=0x18 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long SubsectionType:1;// Offset=0x18 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
    union // Size=0x8 (Id=0)
    {
        struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES SystemCacheAttributes;// Offset=0x20 Size=0x8
        unsigned long long SectionOffset;// Offset=0x20 Size=0x8
    };
};
