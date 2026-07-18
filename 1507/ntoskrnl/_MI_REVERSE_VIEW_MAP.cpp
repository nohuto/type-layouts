struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_REVERSE_VIEW_MAP// Size=0x28 (Id=1087)
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
    unsigned long long SectionOffset;// Offset=0x20 Size=0x8
};
