struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_421// Size=0x4 (Id=421)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Secure:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

union _unnamed_422// Size=0x4 (Id=422)
{
    struct _unnamed_421 s1;// Offset=0x0 Size=0x4
};

struct _KALPC_REGION// Size=0x58 (Id=423)
{
    struct _LIST_ENTRY RegionListEntry;// Offset=0x0 Size=0x10
    struct _KALPC_SECTION * Section;// Offset=0x10 Size=0x8
    unsigned long long Offset;// Offset=0x18 Size=0x8
    unsigned long long Size;// Offset=0x20 Size=0x8
    unsigned long long ViewSize;// Offset=0x28 Size=0x8
    union _unnamed_422 u1;// Offset=0x30 Size=0x4
    unsigned long NumberOfViews;// Offset=0x34 Size=0x4
    struct _LIST_ENTRY ViewListHead;// Offset=0x38 Size=0x10
    struct _KALPC_VIEW * ReadOnlyView;// Offset=0x48 Size=0x8
    struct _KALPC_VIEW * ReadWriteView;// Offset=0x50 Size=0x8
};
